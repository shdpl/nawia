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
// GameEngine Video Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010 Felix Kistler
// based on: http://nehe.gamedev.net/data/lessons/lesson.asp?lesson=35
// 
// ****************************************************************************************
    
#include "VideoComponent.h"

#include "VideoManager.h"

#include <GameEngine/GameEngine.h>
#include <GameEngine/GameEntity.h>
#include <GameEngine/GameLog.h>
#include <GameEngine/GameModules.h>
#include <GameEngine/GameWorld.h>

#include <XMLParser/utXMLParser.h>

#include <Horde3D/Horde3D.h>
#include <Horde3D/Horde3DUtils.h>

#ifndef CDS_FULLSCREEN							// CDS_FULLSCREEN Is Not Defined By Some
#define CDS_FULLSCREEN 4						// Compilers. By Defining It This Way,
#endif

GameComponent* VideoComponent::createComponent( GameEntity* owner )
{
	return new VideoComponent( owner );
}

VideoComponent::VideoComponent(GameEntity* owner) : GameComponent(owner, "VideoComponent"), m_startTime(0), m_data(0x0), m_playing(false), 
	m_material(0), m_resize(false), m_bgraData(0x0), m_pgf(0x0), m_videoTexture(0), m_samplerIndex(-1), m_originalSampler(0), 
	m_autoStart(false), m_loop(false), m_startNextFrame(false), m_newData(false), m_hasAudio(false), m_camId(0)
{
	VideoManager::instance()->addComponent(this);
	// We need our own access to the com library for not disturbing others (like the SapiComponent)
	CoInitializeEx(NULL, COINIT_MULTITHREADED);

	// Listen to cam changes
	owner->addListener(GameEvent::E_ACTIVE_CAM_CHANGE, this);
	// And get the current one
	// First the GameEngine id
	int camID = 0;
	GameEvent camEvent(GameEvent::E_GET_ACTIVE_CAM, &GameEventData(&camID), this);
	GameModules::gameWorld()->executeEvent(&camEvent);
	// Then the entity
	GameEntity* camEntity = GameModules::gameWorld()->entity(camID);
	if (camEntity)
	{
		// And finally the horde id, puh!
		GameEvent getHordeID(GameEvent::E_GET_SCENEGRAPH_ID, &m_camId, this);
		camEntity->executeEvent(&getHordeID);
	}

	m_hdd = DrawDibOpen();
	m_hdc = CreateCompatibleDC(0);
}

VideoComponent::~VideoComponent()
{
	VideoManager::instance()->removeComponent(this);
	closeAvi();
	DrawDibClose(m_hdd);			// Closes The DrawDib Device Context
	DeleteDC(m_hdc);				// Delete the Dc
	CoUninitialize();
}

void VideoComponent::executeEvent(GameEvent* event)
{
	switch (event->id())
	{
		case GameEvent::E_ACTIVE_CAM_CHANGE:
			{
				const unsigned int* id = static_cast<const unsigned int*>(event->data());
				if (id)
				{
					// Get the entity
					GameEntity* camEntity = GameModules::gameWorld()->entity(*id);
					if (camEntity)
					{
						// And it's scenegraph id
						GameEvent getHordeID(GameEvent::E_GET_SCENEGRAPH_ID, &m_camId, this);
						camEntity->executeEvent(&getHordeID);
					}
				}
			}
			break;
	}
}

void VideoComponent::loadFromXml(const XMLNode* node)
{
	const char* rWidth = node->getAttribute("resizeWidth");
	const char* rHeight = node->getAttribute("resizeHeight");
	if (rWidth || rHeight)
	{
		m_resize = true;
	}
	if (rWidth)
		m_resizeWidth = atoi(rWidth);
	if (rHeight)
		m_resizeHeight = atoi(rHeight);
	
	m_isOverlay = _stricmp(node->getAttribute("isOverlay", "0"), "true") == 0 
		|| _stricmp(node->getAttribute("isOverlay", "0"), "1") == 0;

	m_loop = _stricmp(node->getAttribute("loop", "0"), "true") == 0 
		|| _stricmp(node->getAttribute("loop", "0"), "1") == 0;

	m_x = (float) atof(node->getAttribute("x", "0"));
	m_y = (float) atof(node->getAttribute("y", "0"));
	m_w = (float) atof(node->getAttribute("w", "1"));
	m_h = (float) atof(node->getAttribute("h", "1"));
	m_stretchToAspect = _strcmpi(node->getAttribute("stretchToAspect", "1"), "0") != 0 && _strcmpi(node->getAttribute("stretchToAspect", "1"), "false") != 0;

	// Get material name and load it (must be before openAvi)
	const char* mat = node->getAttribute("material", "materials/video.material.xml");
	if (mat)
	{
		m_material = h3dAddResource(H3DResTypes::Material, mat, 0x0);
		h3dutLoadResourcesFromDisk(".");
		// Clone the original material with the original sampler texture, so the texture won't be released if a new one is setted
		h3dCloneResource(m_material, 0x0);
	}

	const char* cFile = node->getAttribute("file");
	if (cFile)
	{
		// Directly open the configured avi
		openAvi(cFile);
	}

	// Set autostart after openavi() as we only get a correct start time stamp at the first update call
	// m_startNextFrame indicates that the video has to be started in the first (next) coming update call
	m_startNextFrame = m_autoStart = _stricmp(node->getAttribute("autoStart", "0"), "true") == 0 
		|| _stricmp(node->getAttribute("autoStart", "0"), "1") == 0;
}

void VideoComponent::run()
{
	if (m_playing)
	{
		float currentTime = GameEngine::currentTimeStamp();
		m_currentFrame = int(((currentTime - m_startTime) / m_timePerFrame) + 0.5f);
		if (m_currentFrame >= m_lastframe && m_loop)
		{
			// Reset video to start and keep playing
			m_startTime = GameEngine::currentTimeStamp();
			m_currentFrame = 0;
		}
		m_newData = grabAviFrame(m_currentFrame);
	}
}

void VideoComponent::update()
{
	if (m_playing)
	{
		if (m_newData)
		{
			// Map texture stream for writing
			void *mappedData = h3dMapResStream(m_videoTexture, H3DTexRes::ImageElem, 0, H3DTexRes::ImgPixelStream, false, true );
			// Copy image data over to horde's internal buffer
			memcpy(mappedData, m_bgraData, m_resizeWidth*m_resizeHeight*4);
			// Tell horde to upload data to GL
			h3dUnmapResStream(m_videoTexture);
			// We have used all new data...
			m_newData = false;
		}
		else
			stopAvi();
	}
	if (m_startNextFrame)
	{
		// We shall start the video in this frame
		playAvi();
		m_startNextFrame = false;
	}
}

void VideoComponent::render()
{
	if (m_playing && m_isOverlay)
	{
		// Render the overlay
		const float ww = (float)h3dGetNodeParamI( m_camId, H3DCamera::ViewportWidthI ) /
	                 (float)h3dGetNodeParamI( m_camId, H3DCamera::ViewportHeightI );

		//take the aspectRation into account for the x pos
		float x = m_x*ww;
		float w = m_w;
		if(m_stretchToAspect)
		{
			// and for the width if this is wanted
			w *= ww;
		}
						
		const float coords[] = 
		{
			x, m_y, 0, 1.0f,
			x, m_y+m_h, 0, 0,
			x+w, m_y+m_h, 1.0f, 0,
			x+w, m_y, 1.0f, 1.0f
		};
		h3dShowOverlays(coords, sizeof(coords), 1.0f,1.0f,1.0f,1.0f, m_material, 0);
	}
}

void VideoComponent::playAvi()
{
	if (m_playing)
	{
		// Already playing, so stop first to restart
		stopAvi();
		// And start the next frame (so the Sound Component will be able to stop the sound before)
		m_startNextFrame = true;
	}
	else if (m_pgf != 0x0 && m_material != 0 && m_videoTexture != 0 && m_samplerIndex != -1)
	{
		// And apply the new video texture as sampler to the material
		h3dSetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI, m_videoTexture);

		m_startTime = GameEngine::currentTimeStamp();
		m_playing = true;

		if (m_hasAudio)
		{
			// Play the previously loaded sound
			GameEvent enableSound(GameEvent::E_SET_ENABLED, &GameEventData(true), this);
			m_owner->executeEvent(&enableSound);
		}
	}
}

void VideoComponent::convertFrameData(unsigned char* src, unsigned char* dst)
{
	// sizeof(dst) must be 4/3 * sizeof(src) and dst must be initialized with 255 (at least the Alpha-Channel)
	const int lastDstIndex = (m_resizeWidth*m_resizeHeight-1)*4;
	const int lineSize = m_resizeWidth*4;
	const int lineEnd = (m_resizeWidth - 1) * 4;
	// Start destination index with the last pixel for flipping it horizontally
	for (int dI = lastDstIndex, sI = 0; dI > -1; dI -=4, sI +=3)
	{
		// Also flip it vertically, by reversing each line
		int rest = dI % lineSize;
		int dstIndex = dI - 2 * rest + lineEnd;
		// Copy RGB and leave A as it is (255)
		dst[dstIndex] = src[sI];
		dst[dstIndex+1] = src[sI+1];
		dst[dstIndex+2] = src[sI+2];
	}
}

bool VideoComponent::openAvi(const std::string& filename)
{
	// Stop any currently loaded avi
	closeAvi();

	AVIFileInit();							// Opens The AVIFile Library
	// Opens The AVI Stream
	if (AVIStreamOpenFromFile(&m_pavi, filename.c_str(), streamtypeVIDEO, 0, OF_READ, NULL) !=0)
	{
		GameLog::errorMessage("Error opening avi: %s", filename.c_str());
		// An Error Occurred Opening The Stream
		AVIFileExit();								// Release The File
		return false;
	}
	AVIStreamInfo(m_pavi, &m_psi, sizeof(m_psi));						// Reads Information About The Stream Into psi
	m_width = m_psi.rcFrame.right-m_psi.rcFrame.left;					// Width Is Right Side Of Frame Minus Left
	m_height = m_psi.rcFrame.bottom-m_psi.rcFrame.top;					// Height Is Bottom Of Frame Minus Top
	if (!m_resize)
	{
		// Size should be kept
		m_resizeWidth = m_width;
		m_resizeHeight = m_height;
	}
	m_lastframe = AVIStreamLength(m_pavi);								// The Last Frame Of The Stream
	m_timePerFrame = ((float)AVIStreamSampleToTime(m_pavi, m_lastframe) / (float) m_lastframe) / 1000.0f;	// Calculate Rough Seconds Per Frame
	m_bmih.biSize		= sizeof (BITMAPINFOHEADER);					// Size Of The BitmapInfoHeader
	m_bmih.biPlanes		= 1;					// Bitplanes
	m_bmih.biBitCount	= 24;					// Bits Format We Want 24 / 8  = 3 bytes
	m_bmih.biWidth		= m_resizeWidth;		// Width We Want
	m_bmih.biHeight		= m_resizeHeight;		// Height We Want
	m_bmih.biCompression= BI_RGB;				// Requested Mode = RGB
	m_hBitmap = CreateDIBSection (m_hdc, (BITMAPINFO*)(&m_bmih), DIB_RGB_COLORS, (void**)(&m_data), NULL, NULL);	
	SelectObject (m_hdc, m_hBitmap);					// Select hBitmap Into Our Device Context (hdc)
	// Bitmapinfo header for decoding (needed for xvid)
	m_bmiavih.biSize = sizeof(BITMAPINFOHEADER);
	m_bmiavih.biPlanes			= 1;					// Bitplanes
	m_bmiavih.biBitCount		= 24;					// Bits Format We Want 24 / 8  = 3 bytes
	m_bmiavih.biWidth			= m_width;				// Width We Want
	m_bmiavih.biHeight			= m_height;				// Height We Want
	m_bmiavih.biCompression		= BI_RGB;				// Requested Mode = RGB
	// And some more infos
	m_bmiavih.biClrImportant	= 0;
	m_bmiavih.biClrUsed			= 0;
	m_bmiavih.biXPelsPerMeter	= 0;
	m_bmiavih.biYPelsPerMeter	= 0;
	m_bmiavih.biSizeImage = (((m_bmiavih.biWidth * 3) + 3) & 0xFFFC) * m_bmiavih.biHeight;
	m_pgf=AVIStreamGetFrameOpen(m_pavi, &m_bmiavih);// Create The PGETFRAME Using Our Request Mode
	if (m_pgf==0x0)
	{
		GameLog::errorMessage("Error opening first frame of avi: %s", filename.c_str());
		// An Error Occurred Opening The Frame
		DeleteObject(m_hBitmap);					// Delete The Device Dependant Bitmap Object
		AVIStreamRelease(m_pavi);					// Release The Stream
		AVIFileExit();								// Release The File
		return false;
	}
	m_fileName = filename;

	// Create buffer for converted data
	// width*height = count pixel; each pixel has 4 channels for rgba with each one byte
	int dataSize = 4*m_resizeWidth*m_resizeHeight;
	m_bgraData = new unsigned char[dataSize];
	// Initialize with 255 (black screen with full alpha)
	memset(m_bgraData, 255, dataSize);

	// Prepare horde texture stream named like the video file name, to get a unique name
	m_videoTexture = h3dCreateTexture(filename.c_str(), m_resizeWidth, m_resizeHeight, H3DFormats::TEX_BGRA8, H3DResFlags::NoTexMipmaps);
	if (m_videoTexture == 0)
	{
		GameLog::errorMessage("Error creating texture for playing avi: %s", filename.c_str());
		// Failure creating the dynamic texture
		closeAvi();
		return false;
	}

	// Find the sampler index within the material
	m_samplerIndex = h3dFindResElem(m_material, H3DMatRes::SamplerElem, H3DMatRes::SampNameStr, "albedoMap");	
	if (m_samplerIndex == -1)
	{
		GameLog::errorMessage("Error preparing material with resID %d for playing avi: %s", m_material, filename.c_str());
		// No sampler found in material
		closeAvi();
		return false;
	}

	// Store old sampler
	m_originalSampler = h3dGetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI);

	
	// Now open the audio stream
	PAVISTREAM audioStream;
	if (AVIStreamOpenFromFile(&audioStream, filename.c_str(), streamtypeAUDIO, 0, OF_READ, NULL) == 0)
	{
		// Audio stream found
		// Get format info
		PCMWAVEFORMAT audioFormat;
		long formatSize = sizeof(audioFormat);
		int start = AVIStreamStart(audioStream);
		// TODO get channelsmask and use it
		AVIStreamReadFormat(audioStream, start, &audioFormat, &formatSize);
		long numSamples = AVIStreamLength(audioStream);
		int bitsPerSample = (audioFormat.wf.nAvgBytesPerSec * 8) / (audioFormat.wf.nSamplesPerSec * audioFormat.wf.nChannels);
		/*if (audioFormat.wf.wFormatTag == WAVE_FORMAT_MPEGLAYER3)
		{
			// TODO
			MPEGLAYER3WAVEFORMAT mp3Format;
			formatSize = sizeof(mp3Format);
			AVIStreamReadFormat(audioStream, start, &mp3Format, &formatSize);
		}*/

		// Create buffer with appropriate size
		long bufferSize = (bitsPerSample * numSamples) / 8;
		char* buffer = new char[bufferSize];
		// Read the audio data
		long bytesWritten = 0;
		AVIStreamRead(audioStream, start, numSamples, buffer, bufferSize, &bytesWritten, 0x0);

		if (bytesWritten > 0)
		{
			// Send the audio data to the sound component
			SoundResourceData eventData(buffer, bytesWritten, audioFormat.wf.nSamplesPerSec, bitsPerSample, audioFormat.wf.nChannels);
			GameEvent event(GameEvent::E_SET_SOUND_WITH_USER_DATA, &eventData, this);
			m_owner->executeEvent(&event);
			m_hasAudio = true;
		}

		// Delete the buffer data
		delete[] buffer;
	}

	if (m_autoStart)
		// Play video directly
		playAvi();

	return true;
}

bool VideoComponent::grabAviFrame(int frame)
{
	if (m_pgf != 0x0 && frame >= 0 && frame < m_lastframe && m_hdd && m_hdc)
	{
		LPBITMAPINFOHEADER lpbi;					// Holds The Bitmap Header Information
		lpbi = (LPBITMAPINFOHEADER)AVIStreamGetFrame(m_pgf, frame);	// Grab Data From The AVI Stream
		// Convert Data To Requested Bitmap Format
		if (m_resize)
		{
			// Temporarly get the frame in m_pdata
			// (Skip The Header Info To Get To The Data)
			m_pdata=(unsigned char *)lpbi+lpbi->biSize+lpbi->biClrUsed * sizeof(RGBQUAD);	// Pointer To Data Returned By AVIStreamGetFrame
			if (!DrawDibDraw (m_hdd, m_hdc, 0, 0, m_resizeWidth, m_resizeHeight, lpbi, m_pdata, 0, 0, m_width, m_height, 0))
			{
				GameLog::errorMessage("Error resizing video to requested size: %d x %d", m_resizeWidth, m_resizeHeight);
				return false;
			}
		}
		else
		{
			// Directly get the frame in m_data
			// (Skip The Header Info To Get To The Data)
			m_data=(unsigned char *)lpbi+lpbi->biSize+lpbi->biClrUsed * sizeof(RGBQUAD);	// Pointer To Data Returned By AVIStreamGetFrame
		}
		convertFrameData(m_data, m_bgraData);							// convert to horde format
		return true;
	}
	return false;
}

void VideoComponent::stopAvi()
{
	if (m_playing)
	{
		if (m_originalSampler != 0 && m_samplerIndex != -1 && m_material != 0)
			// Reset original sampler texture
			h3dSetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI, m_originalSampler);

		if (m_hasAudio)
		{
			// Stopping a sound is done by setting the gain to 0
			GameEvent stopSound(GameEvent::E_SET_SOUND_GAIN, &GameEventData(0.0f), this);
			m_owner->executeEvent(&stopSound);
		}
		m_playing = false;
	}
}

void VideoComponent::closeAvi()
{
	// Stop it first as it might still be playing
	stopAvi();

	// Unload the video if there is already one
	if (m_pgf)
	{
		delete[] m_bgraData;
		m_bgraData = 0x0;
		if (m_hBitmap)
			DeleteObject(m_hBitmap);					// Delete The Device Dependant Bitmap Object
		if (m_pgf)
			AVIStreamGetFrameClose(m_pgf);				// Deallocates The GetFrame Resources
		m_pgf = 0x0;
		if (m_pavi)
			AVIStreamRelease(m_pavi);					// Release The Stream
		AVIFileExit();								// Release The File
		if (m_videoTexture)
		{
			// Remove video texture
			h3dRemoveResource(m_videoTexture);
			// And release it if unused now (should be, else we can't create the same again)
			h3dReleaseUnusedResources();		
			m_videoTexture = 0;
			m_originalSampler = 0;
			m_samplerIndex = 0;
		}
		if (m_hasAudio)
		{
			// Set an empty sound for releasing the old one
			GameEvent clearSound(GameEvent::E_SET_SOUND_FILE, &GameEventData(""), this);
			m_owner->executeEvent(&clearSound);
			m_hasAudio = false;
		}
	}
}