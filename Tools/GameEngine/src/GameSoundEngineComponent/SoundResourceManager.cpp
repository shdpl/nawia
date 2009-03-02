// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************



// ****************************************************************************************
//
// GameEngine Sound Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl and Felix Kistler
// 
// ****************************************************************************************
#include "SoundResourceManager.h"
#include "CWaves.h"
#include "Ogg.h"

#include <GameEngine/GameLog.h>

#include <al.h>

SoundResourceManager* SoundResourceManager::m_instance = 0;

SoundResourceManager* SoundResourceManager::instance()
{
	if (!m_instance)
		m_instance = new SoundResourceManager();
	return m_instance;
}

void SoundResourceManager::release()
{
	delete m_instance;
	m_instance = 0;
}

SoundResourceManager::SoundResourceManager()
{
	m_resourceCount = 0;
	m_wavLoader = new CWaves();
	m_oggLoader = new Ogg();
}


SoundResourceManager::~SoundResourceManager()
{
	for (unsigned int i=0; i<m_files.size(); ++i)
		alDeleteBuffers(m_files[i].numBuffers, m_files[i].buffers);
	delete m_wavLoader;
	delete m_oggLoader;
}

void SoundResourceManager::DisplayALError(char *szText, int errorcode)
{
	printf("%s %s", szText, alGetString(errorcode));
	GameLog::errorMessage("%s %s", szText, alGetString(errorcode));
}

void SoundResourceManager::setResourceDirectory(const char* directory)
{
	m_directory = directory;
	if (m_directory.find_last_of('\\') != m_directory.length()-1 &&
		m_directory.find_last_of('/') != m_directory.length()-1 &&
		m_directory.length() > 0)
		m_directory+="/";
}

unsigned int SoundResourceManager::addResource(const char* filename)
{
	if (!filename) return 0;

	size_t size=0;
	unsigned int resourceID = 0;
	SoundFile soundfile;
	int i = 0;

	std::vector<SoundFile>::iterator iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if ( iter->filename == filename)
		{
			if ( !iter->stream )
			{
				iter->refCount++;
				return iter->resourceID;
			}
			else
			{
				if ( iter->refCount > 0)
				{
					GameLog::errorMessage("Soundstream already in use: %s", filename);
					return 0;
				}
				else
					resourceID = iter->resourceID;
					m_files.erase(iter);
				break;
			}
		}
		++iter;		
	}

	size=strlen(filename);
	
	soundfile.fileType=SRESFT_UNKNOWN;

	if (size>4)
	{
		if (_stricmp( &filename[size-4], ".ogg") ==0) soundfile.fileType=SRESFT_OGG;
		if (_stricmp( &filename[size-4], ".wav") ==0) soundfile.fileType=SRESFT_PCM_WAV;
	}

	switch (soundfile.fileType)
	{
		case SRESFT_OGG:
			int OggFileID;
			if ((i = loadOgg(filename, soundfile.buffers, SOUNDRESOURCE_NUMBUFFERS, &OggFileID))>0)
			{
				soundfile.filename = filename;
				soundfile.numBuffers = i;
				soundfile.stream=true;
				soundfile.oggID=OggFileID;
				soundfile.refCount = 1;
				if( resourceID == 0)
					resourceID=++m_resourceCount;
				soundfile.resourceID=resourceID;
				m_files.push_back(soundfile);
			}
			break;

		case SRESFT_PCM_WAV:
			if ((i = loadWave(filename, soundfile.buffers, SOUNDRESOURCE_NUMBUFFERS))>0)
			{
				soundfile.filename = filename;
				soundfile.numBuffers = i;
				soundfile.stream=false;
				soundfile.oggID=-1; // Ogg only
				soundfile.refCount = 1;
				if( resourceID == 0)
					resourceID=++m_resourceCount;
				soundfile.resourceID=resourceID;
				m_files.push_back(soundfile);
			}
			break;
	}

	if (i>0)
		return resourceID;
	else
		return 0;
}

int SoundResourceManager::removeResource( unsigned int resourceID )
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if (iter->resourceID == resourceID)
		{
			iter->refCount--;
			if( iter->refCount == 0 && iter->stream )
			{
				alDeleteBuffers(iter->numBuffers, iter->buffers);
				if (iter->fileType==SRESFT_OGG)
				{
					m_oggLoader->DeleteOggFile(iter->oggID);
				}
			}
			return iter->refCount;
		}
		++iter;		
	}		
	return -1;
}

void SoundResourceManager::releaseUnusedResources()
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if( iter->refCount == 0 )
		{
			if( !iter->stream )
			{
				if (iter->fileType==SRESFT_OGG)
				{
					m_oggLoader->DeleteOggFile(iter->oggID);
				}
				alDeleteBuffers(iter->numBuffers, iter->buffers);
			}
			m_files.erase(iter);
		}
		++iter;
	}
}

unsigned int * SoundResourceManager::getBuffer(unsigned int resourceID)
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while (iter!=m_files.end())
	{
		if (iter->resourceID == resourceID) return iter->buffers;
		++iter;
	}

	return 0;
}

int SoundResourceManager::getBufferCount(unsigned int resourceID)
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while (iter!=m_files.end())
	{
		if (iter->resourceID == resourceID) return iter->numBuffers;
		++iter;
	}

	return 0;
}

bool SoundResourceManager::isStream(unsigned int resourceID)
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while (iter!=m_files.end())
	{
		if (iter->resourceID == resourceID) return iter->stream;
		++iter;
	}

	return false;
}


void SoundResourceManager::updateBuffer(unsigned int uiSource, unsigned int resourceID)
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while (iter!=m_files.end())
	{
		ALenum error_code = AL_NO_ERROR;
		if ( iter->resourceID == resourceID) 
		{
			ALint iBuffersProcessed;
			unsigned long	ulBytesWritten;

			alGetSourcei(uiSource, AL_BUFFERS_PROCESSED, &iBuffersProcessed);

			// For each processed buffer, remove it from the Source Queue, read next chunk of audio
			// data from disk, fill buffer with new data, and add it to the Source Queue
			while (iBuffersProcessed--)
			{
				// Remove the Buffer from the Queue.  (uiBuffer contains the Buffer ID for the unqueued Buffer)
				ALuint	uiBuffer = 0;
				alSourceUnqueueBuffers(uiSource, 1, &uiBuffer);
				if( (error_code = alGetError()) != AL_NO_ERROR ) 
				{
					DisplayALError("Error unqueuing Buffer: ", error_code);
				}

				// Read more audio data (if there is any)
				ulBytesWritten = m_oggLoader->DecodeOggVorbis(iter->oggID);

				if (ulBytesWritten)
				{
					if (m_oggLoader->getDecodeBuffer(iter->oggID))
					{
						alBufferData(uiBuffer, m_oggLoader->getFormat(iter->oggID), m_oggLoader->getDecodeBuffer(iter->oggID), ulBytesWritten, m_oggLoader->getFrequency(iter->oggID));
						alSourceQueueBuffers(uiSource, 1, &uiBuffer);
						if( (error_code = alGetError()) != AL_NO_ERROR ) 
						{
							DisplayALError("Error queuing OGG Buffer: ", error_code);
						}
					}
				}
			}
			break;
		}

		++iter;
	}
}

int SoundResourceManager::loadWave(const char *szWaveFile, unsigned int * uiBuffer, int bufferCount )
{
	std::string completeFilename = m_directory;	
	completeFilename+=szWaveFile;
	
	// create ALBuffer
	ALenum error_code = AL_NO_ERROR;
	alGenBuffers(1, uiBuffer);
	if( (error_code = alGetError()) != AL_NO_ERROR ) 
	{
		DisplayALError("Error generating Buffer: ", error_code);
	}
	// load the wav file

	if (!loadWaveToBuffer(completeFilename.c_str(), uiBuffer, 1))
	{
		GameLog::errorMessage( "Failed to load %s", szWaveFile );
		alDeleteBuffers(1, uiBuffer);
		return 0;
	}

	return 1;
}

bool SoundResourceManager::loadWaveToBuffer(const char *szWaveFile, unsigned int * uiBufferID, int bufferCount)
{
	WAVEID			WaveID;
	ALint			iDataSize, iFrequency;
	ALenum			eBufferFormat;
	ALchar			*pData;

	bool success = false;
	if (SUCCEEDED(m_wavLoader->LoadWaveFile(szWaveFile, &WaveID)))
	{
		if ((SUCCEEDED(m_wavLoader->GetWaveSize(WaveID, (unsigned long*)&iDataSize))) &&
			(SUCCEEDED(m_wavLoader->GetWaveData(WaveID, (void**)&pData))) &&
			(SUCCEEDED(m_wavLoader->GetWaveFrequency(WaveID, (unsigned long*)&iFrequency))) &&
			(SUCCEEDED(m_wavLoader->GetWaveALBufferFormat(WaveID, &alGetEnumValue, (unsigned long*)&eBufferFormat))))
		{
			// Set XRAM Mode (if application)
			//if (eaxSetBufferMode && eXRAMBufferMode)
			//	eaxSetBufferMode(1, uiBufferID, eXRAMBufferMode);
			alGetError();
			alBufferData(uiBufferID[0], eBufferFormat, pData, iDataSize, iFrequency);
			if (alGetError() == AL_NO_ERROR)
				success = true;
			m_wavLoader->DeleteWaveFile(WaveID);
		}
	}
	return success;
}

int SoundResourceManager::loadOgg(const char *szOggFile, unsigned int * uiBuffer, int bufferCount , int *pOggFileID)
{
	std::string completeFilename = m_directory;	
	completeFilename+=szOggFile;
	
	// create ALBuffer
	alGenBuffers(bufferCount,  uiBuffer );

	// load ogg file
	if (!loadOggToBuffer(completeFilename.c_str(), uiBuffer, bufferCount, pOggFileID))
	{
		GameLog::errorMessage( "Failed to load %s", szOggFile );
		alDeleteBuffers(bufferCount, uiBuffer);
		return 0;
	}
	return bufferCount;
}

bool SoundResourceManager::loadOggToBuffer(const char *szOggFile, unsigned int * uiBuffer, int bufferCount, int *pOggFileID)
{
	bool success = false;
	int iLoop=0;
	unsigned long	ulBytesWritten = 0;

	if (SUCCEEDED(m_oggLoader->LoadOggFile(szOggFile, pOggFileID)))
	{
		alGetError();
		// Fill all the Buffers with decoded audio data from the OggVorbis file
		for (iLoop = 0; iLoop < bufferCount; ++iLoop)
		{
			ulBytesWritten = m_oggLoader->DecodeOggVorbis(*pOggFileID);
			if (ulBytesWritten)
			{
				alBufferData(uiBuffer[iLoop], m_oggLoader->getFormat(*pOggFileID), m_oggLoader->getDecodeBuffer(*pOggFileID), ulBytesWritten, m_oggLoader->getFrequency(*pOggFileID));
			}
		}
		if (alGetError() == AL_NO_ERROR)
				success = true;
	}

	return success;
}

const char* SoundResourceManager::getResourceFileName(unsigned int resourceID)
{
	std::vector<SoundFile>::iterator iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if (iter->resourceID == resourceID)
			return iter->filename.c_str();
		++iter;
	}
	return "";
}

void SoundResourceManager::reloadResource(unsigned int resourceID)
{
	// Search for the sound file associated to this resource
	std::vector<SoundFile>::iterator soundFile = m_files.begin();
	while( soundFile!=m_files.end() )
	{
		if (soundFile->resourceID == resourceID)
			break;
		++soundFile;
	}

	// No sound file found for this resourceID
	if( soundFile == m_files.end() ) return;
	
	// Delete old buffers
	alDeleteBuffers(soundFile->numBuffers, soundFile->buffers);
	
	int numBuffers = 0;
	// Reload it
	switch (soundFile->fileType)
	{
		case SRESFT_OGG:
			int OggFileID;
			if ((numBuffers = loadOgg(soundFile->filename.c_str(), soundFile->buffers, SOUNDRESOURCE_NUMBUFFERS, &OggFileID))>0)
			{
				soundFile->numBuffers = numBuffers;
				soundFile->oggID=OggFileID;
			}
			break;

		case SRESFT_PCM_WAV:
			if ((numBuffers = loadWave(soundFile->filename.c_str(), soundFile->buffers, SOUNDRESOURCE_NUMBUFFERS))>0)
			{
				soundFile->numBuffers = numBuffers;
			}
			break;
	}
}