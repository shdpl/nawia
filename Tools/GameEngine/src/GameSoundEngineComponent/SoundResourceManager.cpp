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
// Copyright (C) 2007 Volker Wiendl and Felix Kistler
// 
// ****************************************************************************************
#include "SoundResourceManager.h"
#include "CWaves.h"
#include "Ogg.h"

#include <XMLParser/utXMLParser.h>
#include <GameEngine/GameLog.h>

#include <al.h>

#include <sstream>

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
	m_nextPResID = 1;
	m_wavLoader = new CWaves();
	m_oggLoader = new Ogg();
}


SoundResourceManager::~SoundResourceManager()
{
	SFileIter end = m_files.end();
	for (SFileIter iter = m_files.begin(); iter != end; iter++)
		alDeleteBuffers(iter->second.numBuffers, iter->second.buffers);
	delete m_wavLoader;
	delete m_oggLoader;
}

bool SoundResourceManager::checkXMLParseResult(const XMLResults& results)
{
	switch (results.error)
	{
	case eXMLErrorNone:
		return true;
	default:
		GameLog::errorMessage("Parsing error in line %d column %d: %s", results.nLine, results.nColumn, XMLNode::getError(results.error));
		return false;
	}
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

unsigned int SoundResourceManager::addUserResource(const char* data, int dataSize, int samplesPerSec, int bitsPerSample, int numChannels)
{
	unsigned int resourceID = 0;
	SoundFile soundfile;

	std::stringstream filename;
	filename << "userResource";
	SFileIter iter = m_files.begin();
	int index = 0;
	while (index < 100 && iter != m_files.end())
	{
		if ( iter->second.filename == filename.str())
		{
			// Try next index
			filename.str("");
			// Create new resource name
			filename << "userResource" << index;
			index++;
			// Restart search for equivalent
			iter = m_files.begin();
		}
		else
			iter++;
	}

	if (index == 100)
		GameLog::errorMessage("Error creating Sound resource, maximum of 100 user resources reached!");

	soundfile.fileType=SRESFT_PCM_WAV;
	// Create ALBuffer
	ALenum error_code = AL_NO_ERROR;
	alGenBuffers(1, soundfile.buffers);
	if( (error_code = alGetError()) != AL_NO_ERROR ) 
	{
		DisplayALError("Error generating Buffer: ", error_code);
	}
	else
	{
		// Get format
		ALenum alFormat = alGetEnumValue("AL_FORMAT_STEREO16");
		if (numChannels == 1)
			alFormat = bitsPerSample == 16 ? alGetEnumValue("AL_FORMAT_MONO16") : alGetEnumValue("AL_FORMAT_MONO8");
		else if (numChannels == 2)
			alFormat = bitsPerSample == 16 ? alGetEnumValue("AL_FORMAT_STEREO16") : alGetEnumValue("AL_FORMAT_STEREO8");
		else if ((numChannels == 4) && (bitsPerSample == 16))
			alFormat = alGetEnumValue("AL_FORMAT_QUAD16");
		else if ((numChannels == 6) && (bitsPerSample == 16))
			alFormat = alGetEnumValue("AL_FORMAT_51CHN16");
		else if ((numChannels == 7) && (bitsPerSample == 16))
			alFormat = alGetEnumValue("AL_FORMAT_61CHN16");
		else if ((numChannels == 8) && (bitsPerSample == 16))
			alFormat = alGetEnumValue("AL_FORMAT_71CHN16");

		// And add the user data
		alBufferData(*(soundfile.buffers), alFormat, data, dataSize, samplesPerSec);
		if (alGetError() == AL_NO_ERROR)
		{
			soundfile.filename = filename.str();
			soundfile.numBuffers = 1;
			soundfile.stream=false;
			soundfile.oggID=-1; // Ogg only
			soundfile.refCount = 1;
			resourceID = ++m_resourceCount;
			m_files[resourceID] = soundfile;
		}
	}

	return resourceID;
}

unsigned int SoundResourceManager::addPhonemesFile(const char* filename)
{
	if (!filename) return 0;

	for (PFileIter iter = m_phonemeFiles.begin(); iter != m_phonemeFiles.end(); ++iter)
	{
		if( iter->second.fileName == filename)
		{
			iter->second.refCount++;
			return iter->first;
		}
	}

	PhonemeFile file;
	if (loadPhonemesFile(filename, &(file.visemes)))
	{
		file.refCount = 1;
		file.fileName = filename;
		unsigned int newID = m_nextPResID++;
		m_phonemeFiles[newID] = file;
		return newID;
	}
}

unsigned int SoundResourceManager::addResource(const char* filename, bool forceNoStream /*= false*/)
{
	if (!filename) return 0;

	size_t size=0;
	unsigned int resourceID = 0;
	SoundFile soundfile;
	int i = 0;

	SFileIter iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if ( iter->second.filename == filename)
		{
			if ( !iter->second.stream )
			{
				iter->second.refCount++;
				return iter->first;
			}
			else
			{
				if ( iter->second.refCount > 0)
				{
					GameLog::errorMessage("Soundstream already in use: %s", filename);
					return 0;
				}
				else
					resourceID = iter->first;
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
			if ((i = loadOgg(filename, soundfile.buffers, forceNoStream ? 1 : SOUNDRESOURCE_NUMBUFFERS, &OggFileID, forceNoStream))>0)
			{
				soundfile.filename = filename;
				soundfile.numBuffers = i;
				soundfile.stream=!forceNoStream;
				soundfile.oggID=OggFileID;
				soundfile.refCount = 1;
				if( resourceID == 0)
					resourceID=++m_resourceCount;
				m_files[resourceID] = soundfile;
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
				m_files[resourceID] = soundfile;
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
	SFileIter iter = m_files.find(resourceID);
	if( iter!=m_files.end() )
	{
		iter->second.refCount--;
		if( iter->second.refCount == 0 && iter->second.stream )
		{
			alDeleteBuffers(iter->second.numBuffers, iter->second.buffers);
			if (iter->second.fileType==SRESFT_OGG)
			{
				m_oggLoader->DeleteOggFile(iter->second.oggID);
			}
		}
		return iter->second.refCount;
	}		
	return -1;
}

unsigned int SoundResourceManager::removePhonemesFile(unsigned int resourceID)
{
	PFileIter iter = m_phonemeFiles.find(resourceID);
	if (iter != m_phonemeFiles.end())
	{
		unsigned int refCount = --(iter->second.refCount);
		if (refCount == 0)
		{
			m_phonemeFiles.erase(iter);
		}
		return refCount;
	}
	return 0;
}

void SoundResourceManager::releaseUnusedResources()
{
	SFileIter iter = m_files.begin();
	while( iter!=m_files.end() )
	{
		if( iter->second.refCount == 0 )
		{
			if( !iter->second.stream )
			{
				alDeleteBuffers(iter->second.numBuffers, iter->second.buffers);
			}
			m_files.erase(iter);
		}
		++iter;
	}
}

unsigned int * SoundResourceManager::getBuffer(unsigned int resourceID)
{
	SFileIter iter = m_files.find(resourceID);
	if (iter!=m_files.end())
		return iter->second.buffers;

	return 0;
}

int SoundResourceManager::getBufferCount(unsigned int resourceID)
{
	SFileIter iter = m_files.find(resourceID);
	if (iter!=m_files.end())
		return iter->second.numBuffers;
	return 0;
}

bool SoundResourceManager::isStream(unsigned int resourceID)
{
	SFileIter iter = m_files.find(resourceID);
	if (iter!=m_files.end())
		return iter->second.stream;

	return false;
}


void SoundResourceManager::updateBuffer(unsigned int uiSource, unsigned int resourceID)
{
	SFileIter iter = m_files.find(resourceID);
	if (iter!=m_files.end())
	{
		ALenum error_code = AL_NO_ERROR;
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
			int oggID = iter->second.oggID;
			ulBytesWritten = m_oggLoader->DecodeOggVorbis(oggID);

			if (ulBytesWritten)
			{
				if (m_oggLoader->getDecodeBuffer(oggID))
				{
					alBufferData(uiBuffer, m_oggLoader->getFormat(oggID), m_oggLoader->getDecodeBuffer(oggID), ulBytesWritten, m_oggLoader->getFrequency(oggID));
					alSourceQueueBuffers(uiSource, 1, &uiBuffer);
					if( (error_code = alGetError()) != AL_NO_ERROR ) 
					{
						DisplayALError("Error queuing OGG Buffer: ", error_code);
					}
				}
			}
		}
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

int SoundResourceManager::loadOgg(const char *szOggFile, unsigned int * uiBuffer, int bufferCount , int *pOggFileID, bool forceNoStream /*= false*/)
{
	std::string completeFilename = m_directory;	
	completeFilename+=szOggFile;
	
	// create ALBuffer
	alGenBuffers(bufferCount,  uiBuffer );

	if (forceNoStream)
	{
		if (!loadCompleteOggToBuffer(completeFilename.c_str(), uiBuffer, pOggFileID))
		{
			GameLog::errorMessage( "Failed to load %s", szOggFile );
			alDeleteBuffers(bufferCount, uiBuffer);
			return 0;
		}
	}
	// load ogg file as stream
	else if (!loadOggToBuffer(completeFilename.c_str(), uiBuffer, bufferCount, pOggFileID))
	{
		GameLog::errorMessage( "Failed to load %s", szOggFile );
		alDeleteBuffers(bufferCount, uiBuffer);
		return 0;
	}
	return bufferCount;
}

bool SoundResourceManager::loadCompleteOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int *pOggFileID)
{
	bool success = false;
	unsigned long	ulBytesWritten = 0;	

	if (SUCCEEDED(m_oggLoader->LoadOggFile(szOggFile, pOggFileID)))
	{
		alGetError();
		// Fill the Buffer with decoded audio data from the OggVorbis file
		ulBytesWritten = m_oggLoader->DecodeOggVorbis(*pOggFileID);
		std::vector<std::pair<char*, unsigned long>> m_dataVector;
		unsigned long completeSize = 0;
		while (ulBytesWritten)
		{
			char* temp = new char[ulBytesWritten];
			memcpy(temp, m_oggLoader->getDecodeBuffer(*pOggFileID), ulBytesWritten);
			m_dataVector.push_back(std::pair<char*, unsigned long>(temp, ulBytesWritten));
			completeSize += ulBytesWritten;
			ulBytesWritten = m_oggLoader->DecodeOggVorbis(*pOggFileID);
		}
		char* buffer = new char[completeSize];
		unsigned long offset = 0;
		for (unsigned int i = 0; i < m_dataVector.size(); i++)
		{
			memcpy(buffer + offset, m_dataVector[i].first, m_dataVector[i].second);
			delete[] m_dataVector[i].first;
			offset += m_dataVector[i].second;
		}
		alBufferData(*uiBufferID, m_oggLoader->getFormat(*pOggFileID), buffer, completeSize, m_oggLoader->getFrequency(*pOggFileID));
		delete[] buffer;
		m_oggLoader->DeleteOggFile(*pOggFileID);	
		if (alGetError() == AL_NO_ERROR)
				success = true;
	}

	return success;
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
	SFileIter iter = m_files.find(resourceID);
	if( iter!=m_files.end() )
		return iter->second.filename.c_str();
	return "";
}

void SoundResourceManager::reloadResource(unsigned int resourceID)
{
	// Search for the sound file associated to this resource
	SFileIter iter = m_files.find(resourceID);
	if( iter != m_files.end() )
	{	
		SoundFile* soundFile = &(iter->second);
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
}

bool SoundResourceManager::loadPhonemesFile(const char* fileName, std::vector<Viseme>* container)
{
	// Nothing to do if the filename is empty
	if( _stricmp(fileName, "") == 0 )
		return true;

	// Get resource directory for phoneme file
	std::string file = m_directory;
	file += fileName;

	// Load phonemfile
	XMLResults results;
	XMLNode phonems = XMLNode::parseFile(file.c_str(), "PhonemeTimings", &results);
	if (checkXMLParseResult(results) && !phonems.isEmpty())
	{				
		// Load visemes and timings from phonemfile
		if (!phonems.isEmpty())
		{
			int childs = phonems.nChildNode();
			for (int i = 0; i < childs; ++i)
			{
				XMLNode child(phonems.getChildNode(i));
				if(_stricmp(child.getName(),"phn")==0  || 
					_stricmp(child.getName(),"theme")==0 ||	_stricmp(child.getName(),"rheme")==0)
					addPhonem(&child, container);
				else if( _stricmp(child.getName(),"word")==0  )
				{
					int wordChilds = child.nChildNode();
					for (int j = 0; j < wordChilds; ++j)
					{
						XMLNode wordChild(child.getChildNode(j));
						if(_stricmp(wordChild.getName(),"phn")==0  || 
							_stricmp(wordChild.getName(),"theme")==0 ||	_stricmp(wordChild.getName(),"rheme")==0)
							addPhonem(&wordChild, container);
						else GameLog::errorMessage("Bad childnode in phonem file %s\n", fileName);
					}

				}
				else GameLog::errorMessage("Bad childnode in phonem file %s\n", fileName);
			}				
		}
	}
	else
	{				
		GameLog::errorMessage("Error loading phonem file %s\n", fileName);
		return false;
	}
	return true;
}

void SoundResourceManager::addPhonem(const XMLNode* phonem, std::vector<Viseme>* container)
{
	if (container)
	{
		int start = static_cast<int>(atoi(phonem->getAttribute("start","0")));
		int end = static_cast<int>(atoi(phonem->getAttribute("end","0")));
		int index = 0;

		// Rheme/Theme
		if (_stricmp(phonem->getName(),"theme")==0)
			index = 100;
		else if(_stricmp(phonem->getName(),"rheme")==0)
			index = 101;
		// phonem mapping
		else if( _stricmp(phonem->getAttribute("value",""), "AE")==0 ||
			_stricmp(phonem->getAttribute("value",""), "AY")==0 ||
			_stricmp(phonem->getAttribute("value",""), "AH")==0 ) index = 1;
		else if( _stricmp(phonem->getAttribute("value",""), "AA")==0 ) index=2;
		else if( _stricmp(phonem->getAttribute("value",""), "AO")==0 ) index=3;
		else if( _stricmp(phonem->getAttribute("value",""), "EY")==0 ||
			_stricmp(phonem->getAttribute("value",""), "EH")==0 ||
			_stricmp(phonem->getAttribute("value",""), "UH")==0 ) index=4;
		else if( _stricmp(phonem->getAttribute("value",""), "ER")==0 ) index=5;
		else if( _stricmp(phonem->getAttribute("value",""), "y")==0 ||
			_stricmp(phonem->getAttribute("value",""), "IY")==0 ||
			_stricmp(phonem->getAttribute("value",""), "IH")==0 ) index=6;
		else if( _stricmp(phonem->getAttribute("value",""), "w")==0 ||
			_stricmp(phonem->getAttribute("value",""), "UW")==0 ) index=7;
		else if( _stricmp(phonem->getAttribute("value",""), "OW")==0 ) index=8;
		else if( _stricmp(phonem->getAttribute("value",""), "AW")==0 ) index=9;
		else if( _stricmp(phonem->getAttribute("value",""), "OY")==0 ) index=10;
		else if( _stricmp(phonem->getAttribute("value",""), "AY")==0 ) index=11;
		else if( _stricmp(phonem->getAttribute("value",""), "h")==0 ) index=12;
		else if( _stricmp(phonem->getAttribute("value",""), "r")==0 ) index=13;
		else if( _stricmp(phonem->getAttribute("value",""), "l")==0 ) index=14;
		else if( _stricmp(phonem->getAttribute("value",""), "s")==0 ||
			_stricmp(phonem->getAttribute("value",""), "z")==0 ) index=15;
		else if( _stricmp(phonem->getAttribute("value",""), "SH")==0 ||
			_stricmp(phonem->getAttribute("value",""), "CH")==0 ||
			_stricmp(phonem->getAttribute("value",""), "j")==0 ||
			_stricmp(phonem->getAttribute("value",""), "ZH")==0 ) index=16;
		else if( _stricmp(phonem->getAttribute("value",""), "TH")==0 ||
			_stricmp(phonem->getAttribute("value",""), "DH")==0 ) index=17;
		else if( _stricmp(phonem->getAttribute("value",""), "f")==0 ||
			_stricmp(phonem->getAttribute("value",""), "v")==0 ) index=18;
		else if( _stricmp(phonem->getAttribute("value",""), "d")==0 ||
			_stricmp(phonem->getAttribute("value",""), "t")==0 ||
			_stricmp(phonem->getAttribute("value",""), "n")==0 ) index=19;
		else if( _stricmp(phonem->getAttribute("value",""), "k")==0 ||
			_stricmp(phonem->getAttribute("value",""), "g")==0 ||
			_stricmp(phonem->getAttribute("value",""), "NG")==0 ) index=20;
		else if( _stricmp(phonem->getAttribute("value",""), "p")==0 ||
			_stricmp(phonem->getAttribute("value",""), "b")==0 ||
			_stricmp(phonem->getAttribute("value",""), "m")==0 ) index=21;

		Viseme vis = Viseme(start, end, index);
		container->push_back(vis);
	}
}

void SoundResourceManager::getVisemes(unsigned int resourceID, std::vector<Viseme>* container)
{
	PFileIter iter = m_phonemeFiles.find(resourceID);
	if (iter != m_phonemeFiles.end())
	{
		container->insert(container->end(), iter->second.visemes.begin(), iter->second.visemes.end());
	}
}