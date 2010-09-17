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
#ifndef SoundResourceManager_H_
#define SoundResourceManager_H_

#include <vector>
#include <string>

#define SOUNDRESOURCE_NUMBUFFERS 4

class CWaves;
class Ogg;
class SoundResourceManager
{
public:
	static SoundResourceManager* instance();
	static void release();

	~SoundResourceManager();

	void setResourceDirectory(const char* directory);
	const char* getResourceDirectory() {return m_directory.c_str();}
	unsigned int addResource(const char* filename, bool forceNoStream = false);
	unsigned int addUserResource(const char* data, int dataSize, int samplesPerSec, int bitsPerSample, int numChannels);
	int removeResource(unsigned int resourceID);
	unsigned int * getBuffer(unsigned int resourceID);
	int getBufferCount(unsigned int resourceID);
	bool isStream(unsigned int resourceID);
	void updateBuffer(unsigned int uiSource, unsigned int resourceID);

	// This function would release all sound resources that are not currently playing
	// It is currently not used. Notice that using it would destroy all tagged, preloaded sound files.
	void releaseUnusedResources();
	
	const char* getResourceFileName(unsigned int resourceID);
	void reloadResource(unsigned int resourceID);

protected:

	enum SOUNDRESOURCE_FILETYPE
	{
		SRESFT_UNKNOWN					= 0,
		SRESFT_OGG						= 2,
		SRESFT_PCM_WAV					= 3
	};

	static SoundResourceManager* m_instance;
	SoundResourceManager();

	int loadWave(const char *szWaveFile, unsigned int * uiBuffer, int bufferCount );
	bool loadWaveToBuffer(const char *szWaveFile, unsigned int * uiBufferID, int bufferCount );

	int loadOgg(const char *szOggFile, unsigned int * uiBuffer, int bufferCount, int *pOggFileID, bool forceNoStream = false);
	bool loadOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int bufferCount, int *pOggFileID);
	bool loadCompleteOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int *pOggFileID);

	/// Resource directory for sound files
	std::string				 m_directory;

	struct SoundFile
	{
		std::string  filename;
		unsigned int refCount;
		unsigned int buffers[SOUNDRESOURCE_NUMBUFFERS];
		int numBuffers;
		SOUNDRESOURCE_FILETYPE fileType;
		unsigned int resourceID;
		bool stream;
		int oggID;
	};

	/// all loaded sound files
	std::vector<SoundFile>  m_files;

	void DisplayALError(char *szText, int errorcode);
	
	CWaves*	m_wavLoader;

	Ogg*	m_oggLoader;

	unsigned int m_resourceCount;
	
};
#endif