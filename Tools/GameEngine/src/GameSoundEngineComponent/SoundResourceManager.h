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
#include <map>

#define SOUNDRESOURCE_NUMBUFFERS 4

/**
* Includes the viseme timings
*/
struct Viseme
{
	Viseme::Viseme(int start, int end, int index) : m_start(start), m_end(end), m_index(index)
	{
		m_duration = end-start;
	}
	int m_start, m_end, m_duration;
	int m_index;
};

class CWaves;
class Ogg;
struct XMLNode;
struct XMLResults;

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

	unsigned int addPhonemesFile(const char* fileName);
	unsigned int removePhonemesFile(unsigned int resourceID);
	void getVisemes(unsigned int resourceID, std::vector<Viseme>* container);

	// This function would release all sound resources that are not currently playing
	// Notice that using it would destroy all tagged, preloaded sound files.
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

	static bool checkXMLParseResult(const XMLResults& results);

	int loadWave(const char *szWaveFile, unsigned int * uiBuffer, int bufferCount );
	bool loadWaveToBuffer(const char *szWaveFile, unsigned int * uiBufferID, int bufferCount );

	int loadOgg(const char *szOggFile, unsigned int * uiBuffer, int bufferCount, int *pOggFileID, bool forceNoStream = false);
	bool loadOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int bufferCount, int *pOggFileID);
	bool loadCompleteOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int *pOggFileID);

	// Add phonemes to an arbitrary viseme container
	bool loadPhonemesFile(const char* fileName, std::vector<Viseme>* container);
	void addPhonem(const XMLNode* phonem, std::vector<Viseme>* container);

	/// Resource directory for sound files
	std::string				 m_directory;

	struct SoundFile
	{
		SoundFile()
		{
			refCount = 0;
			numBuffers = 0;
		}
		std::string  filename;
		unsigned int refCount;
		unsigned int buffers[SOUNDRESOURCE_NUMBUFFERS];
		int numBuffers;
		SOUNDRESOURCE_FILETYPE fileType;
		bool stream;
		int oggID;
	};

	struct PhonemeFile
	{
		PhonemeFile()
		{
			refCount = 0;
		}
		std::vector<Viseme> visemes;
		std::string fileName;
		unsigned int refCount;
	};

	typedef std::map<unsigned int, PhonemeFile>::iterator PFileIter;
	std::map<unsigned int, PhonemeFile> m_phonemeFiles;

	/// all loaded sound files
	typedef std::map<unsigned int, SoundFile>::iterator SFileIter;
	std::map<unsigned int, SoundFile>  m_files;

	void DisplayALError(char *szText, int errorcode);
	
	CWaves*	m_wavLoader;

	Ogg*	m_oggLoader;

	unsigned int m_resourceCount, m_nextPResID;
	
};
#endif