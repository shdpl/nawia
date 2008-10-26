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
	unsigned int addResource(const char* filename);
	int removeResource(unsigned int resourceID);
	unsigned int * getBuffer(unsigned int resourceID);
	int getBufferCount(unsigned int resourceID);
	bool isStream(unsigned int resourceID);
	void updateBuffer(unsigned int uiSource, unsigned int resourceID);
	void releaseUnusedResources();

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

	int loadOgg(const char *szOggFile, unsigned int * uiBuffer, int bufferCount, int *pOggFileID);
	bool loadOggToBuffer(const char *szOggFile, unsigned int * uiBufferID, int bufferCount, int *pOggFileID);

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