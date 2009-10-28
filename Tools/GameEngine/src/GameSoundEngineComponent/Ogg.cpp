// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This software is distributed under the terms of the Eclipse Public License v1.0.
// A copy of the license may be obtained at: http://www.eclipse.org/legal/epl-v10.html
//
// *************************************************************************************************
//



// ****************************************************************************************
//
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Felix Kistler and Thomas Zeugner
// 
// ****************************************************************************************

#include "Ogg.h"
#include <al.h>
#include <GameEngine/GameLog.h>

OGGRESULT Ogg::LoadOggFile(const char *szFilename, OGGID *pOggID)
{

	LPOGGFILEINFO pOggInfo;
	long newOggID=-1;

	*pOggID=-1;
		
	vorbis_info		*psVorbisInfo;
	InitVorbisFile();

	if (!g_bVorbisInit)
	{
		GameLog::errorMessage("Failed to find OggVorbis DLLs (vorbisfile.dll, ogg.dll, or vorbis.dll)\n");
		return OR_INITIALIZATION_ERROR;
	}

	// Open Ogg Stream
	ov_callbacks	sCallbacks;

	sCallbacks.read_func = ov_read_func;
	sCallbacks.seek_func = ov_seek_func;
	sCallbacks.close_func = ov_close_func;
	sCallbacks.tell_func = ov_tell_func;

	// Open the OggVorbis file
	FILE *pOggVorbisFile = fopen(szFilename, "rb");
	if (!pOggVorbisFile)
	{
		GameLog::errorMessage("Could not find %s\n", szFilename );
		ShutdownVorbisFile();
		return OR_INVALIDFILENAME;
	}

	pOggInfo = new OGGFILEINFO;
	if (pOggInfo)
	{
		// Open new slot
		long lLoop = 0;
		for (lLoop = 0; lLoop < MAX_NUM_OGGID; lLoop++)
		{
			if ( !m_OggIDs[lLoop] )
			{
				newOggID = lLoop;
				m_OggIDs[lLoop] = pOggInfo;
				
				break;
			}
		}
		if ( newOggID < 0 )
		{
			// No free slot found
			delete pOggInfo;
			fclose(pOggVorbisFile);
			return OR_OUTOF_MAX_NUM_OGGID;
		}

		// Create an OggVorbis file stream
		if (fn_ov_open_callbacks(pOggVorbisFile, &pOggInfo->sOggVorbisFile, NULL, 0, sCallbacks) == 0)
		{
			// Get some information about the file (Channels, Format, and Frequency)
			psVorbisInfo = fn_ov_info(&pOggInfo->sOggVorbisFile, -1);
			if (psVorbisInfo)
			{
				pOggInfo->ulFrequency = psVorbisInfo->rate;
				pOggInfo->ulChannels = psVorbisInfo->channels;
				if (psVorbisInfo->channels == 1)
				{
					pOggInfo->ulFormat = AL_FORMAT_MONO16;
					// Set BufferSize to 250ms (Frequency * 2 (16bit) divided by 4 (quarter of a second))
					pOggInfo->ulBufferSize = pOggInfo->ulFrequency >> 1;
					// IMPORTANT : The Buffer Size must be an exact multiple of the BlockAlignment ...
					pOggInfo->ulBufferSize -= (pOggInfo->ulBufferSize % 2);
				}
				else if (psVorbisInfo->channels == 2)
				{
					pOggInfo->ulFormat = AL_FORMAT_STEREO16;
					// Set BufferSize to 250ms (Frequency * 4 (16bit stereo) divided by 4 (quarter of a second))
					pOggInfo->ulBufferSize = pOggInfo->ulFrequency;
					// IMPORTANT : The Buffer Size must be an exact multiple of the BlockAlignment ...
					pOggInfo->ulBufferSize -= (pOggInfo->ulBufferSize % 4);
				}
				else if (psVorbisInfo->channels == 4)
				{
					pOggInfo->ulFormat = alGetEnumValue("AL_FORMAT_QUAD16");
					// Set BufferSize to 250ms (Frequency * 8 (16bit 4-channel) divided by 4 (quarter of a second))
					pOggInfo->ulBufferSize = pOggInfo->ulFrequency * 2;
					// IMPORTANT : The Buffer Size must be an exact multiple of the BlockAlignment ...
					pOggInfo->ulBufferSize -= (pOggInfo->ulBufferSize % 8);
				}
				else if (psVorbisInfo->channels == 6)
				{
					pOggInfo->ulFormat = alGetEnumValue("AL_FORMAT_51CHN16");
					// Set BufferSize to 250ms (Frequency * 12 (16bit 6-channel) divided by 4 (quarter of a second))
					pOggInfo->ulBufferSize = pOggInfo->ulFrequency * 3;
					// IMPORTANT : The Buffer Size must be an exact multiple of the BlockAlignment ...
					pOggInfo->ulBufferSize -= (pOggInfo->ulBufferSize % 12);
				}
			}
			if (pOggInfo->ulFormat != 0)
			{
				// Allocate a buffer to be used to store decoded data for all Buffers
				pOggInfo->pDecodeBuffer = (char*)malloc(pOggInfo->ulBufferSize);
				if (!pOggInfo->pDecodeBuffer)
				{
					GameLog::errorMessage("Failed to allocate memory for decoded OggVorbis data\n");
					fn_ov_clear(&pOggInfo->sOggVorbisFile);
					ShutdownVorbisFile();

					m_OggIDs[lLoop]=0;
					delete pOggInfo;
					return OR_OUTOF_MEMORY;
				}

			}
		} else fclose(pOggVorbisFile);

		*pOggID = newOggID;

		return OR_OK;

	}
	return OR_UNKNOWN_ERROR;
}


bool Ogg::IsOggID(OGGID OggID)
{
	if ((OggID >= 0) && (OggID < MAX_NUM_OGGID))
	{
		if (m_OggIDs[OggID])
			return true;
	}

	return false;
}


unsigned long Ogg::DecodeOggVorbis(OGGID OggID)
{
	int current_section;
	long lDecodeSize;
	unsigned long ulSamples;
	short *pSamples;
	unsigned long ulBytesDone = 0;


	if (IsOggID(OggID))
	{

		while (1)
		{
			lDecodeSize = fn_ov_read(&m_OggIDs[OggID]->sOggVorbisFile, m_OggIDs[OggID]->pDecodeBuffer + ulBytesDone, m_OggIDs[OggID]->ulBufferSize - ulBytesDone, 0, 2, 1, &current_section);
			if (lDecodeSize > 0)
			{
				ulBytesDone += lDecodeSize;

				if (ulBytesDone >= m_OggIDs[OggID]->ulBufferSize)
					break;
			}
			else
			{
				break;
			}
		}

		// Mono, Stereo and 4-Channel files decode into the same channel order as WAVEFORMATEXTENSIBLE,
		// however 6-Channels files need to be re-ordered
		if (m_OggIDs[OggID]->ulChannels == 6)
		{		
			pSamples = (short*)m_OggIDs[OggID]->pDecodeBuffer;
			for (ulSamples = 0; ulSamples < (m_OggIDs[OggID]->ulBufferSize>>1); ulSamples+=6)
			{
				// WAVEFORMATEXTENSIBLE Order : FL, FR, FC, LFE, RL, RR
				// OggVorbis Order            : FL, FC, FR,  RL, RR, LFE
				Swap(pSamples[ulSamples+1], pSamples[ulSamples+2]);
				Swap(pSamples[ulSamples+3], pSamples[ulSamples+5]);
				Swap(pSamples[ulSamples+4], pSamples[ulSamples+5]);
			}
		}

		return ulBytesDone;
	}
	else
	{
		return OR_INVALIDOGGID;
	}
}



unsigned long Ogg::getFrequency(OGGID OggID)
{
	if (IsOggID(OggID))
	{
		return m_OggIDs[OggID]->ulFrequency;
	}
	else
	{
		return OR_INVALIDOGGID;
	}
}

unsigned long Ogg::getFormat(OGGID OggID)
{
	if (IsOggID(OggID))
	{
		return m_OggIDs[OggID]->ulFormat;
		}
	else
	{
		return OR_INVALIDOGGID;
	}
}

unsigned long Ogg::getChannels(OGGID OggID)
{
	if (IsOggID(OggID))
	{
		return m_OggIDs[OggID]->ulChannels;
	}
	else
	{
		return OR_INVALIDOGGID;
	}
}

char * Ogg::getDecodeBuffer(OGGID OggID)
{
	if (IsOggID(OggID))
	{
		return m_OggIDs[OggID]->pDecodeBuffer;
	}
	else
	{
		return 0;
	}
}

void Ogg::Swap(short &s1, short &s2)
{
	short sTemp = s1;
	s1 = s2;
	s2 = sTemp;
}

Ogg::Ogg()
{
	g_bVorbisInit = false;
	
	g_hVorbisFileDLL = NULL;
	
	fn_ov_clear = NULL;
	fn_ov_read = NULL;
	fn_ov_pcm_total = NULL;
	fn_ov_info = NULL;
	fn_ov_comment = NULL;
	fn_ov_open_callbacks = NULL;

	memset(&m_OggIDs, 0, sizeof(m_OggIDs));
}

void Ogg::InitVorbisFile()
{	
	if (g_bVorbisInit) return;

	// Try and load Vorbis DLLs (VorbisFile.dll will load ogg.dll and vorbis.dll)
	g_hVorbisFileDLL = LoadLibrary("vorbisfile.dll");
	if (g_hVorbisFileDLL)
	{
		fn_ov_clear = (LPOVCLEAR)GetProcAddress(g_hVorbisFileDLL, "ov_clear");
		fn_ov_read = (LPOVREAD)GetProcAddress(g_hVorbisFileDLL, "ov_read");
		fn_ov_pcm_total = (LPOVPCMTOTAL)GetProcAddress(g_hVorbisFileDLL, "ov_pcm_total");
		fn_ov_info = (LPOVINFO)GetProcAddress(g_hVorbisFileDLL, "ov_info");
		fn_ov_comment = (LPOVCOMMENT)GetProcAddress(g_hVorbisFileDLL, "ov_comment");
		fn_ov_open_callbacks = (LPOVOPENCALLBACKS)GetProcAddress(g_hVorbisFileDLL, "ov_open_callbacks");

		if (fn_ov_clear && fn_ov_read && fn_ov_pcm_total && fn_ov_info &&
			fn_ov_comment && fn_ov_open_callbacks)
		{
			g_bVorbisInit = true;
		}
	}
}

void Ogg::ShutdownVorbisFile()
{
	if (g_hVorbisFileDLL)
	{
		FreeLibrary(g_hVorbisFileDLL);
		g_hVorbisFileDLL = NULL;
	}
	g_bVorbisInit = false;
}

OGGRESULT Ogg::DeleteOggFile(OGGID OggID)
{
	if (IsOggID(OggID))
	{

		if (m_OggIDs[OggID]->pDecodeBuffer)
		{
			free(m_OggIDs[OggID]->pDecodeBuffer);
			m_OggIDs[OggID]->pDecodeBuffer = NULL;
		}

		fn_ov_clear(& m_OggIDs[OggID]->sOggVorbisFile);

		delete m_OggIDs[OggID];
		m_OggIDs[OggID] = 0;
	} else return OR_INVALIDOGGID;

	return OR_OK;
}

size_t ov_read_func(void *ptr, size_t size, size_t nmemb, void *datasource)
{
	return fread(ptr, size, nmemb, (FILE*)datasource);
}

int ov_seek_func(void *datasource, ogg_int64_t offset, int whence)
{
	return fseek((FILE*)datasource, (long)offset, whence);
}

int ov_close_func(void *datasource)
{
   return fclose((FILE*)datasource);
}

long ov_tell_func(void *datasource)
{
	return ftell((FILE*)datasource);
}