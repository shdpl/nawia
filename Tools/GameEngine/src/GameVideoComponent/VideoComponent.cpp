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
	m_autoStart(false), m_loop(false), m_initialStart(false), m_newData(false)
{
	VideoManager::instance()->addComponent(this);
	// We need our own access to the com library for not disturbing others (like the SapiComponent)
	CoInitializeEx(NULL, COINIT_MULTITHREADED);

	m_hdd = DrawDibOpen();
	m_hdc = CreateCompatibleDC(0);
}

VideoComponent::~VideoComponent()
{
	VideoManager::instance()->removeComponent(this);
	if (m_pgf)
		closeAvi();
	DrawDibClose(m_hdd);			// Closes The DrawDib Device Context
	DeleteDC(m_hdc);				// Delete the Dc
	CoUninitialize();
}

void VideoComponent::loadFromXml(const XMLNode* node)
{
	// TODO: load these from xml
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

	// TODO: get overlay positions from xml?

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
	// m_initialStart indicates that the video has to be started in the first (next) coming update call
	m_initialStart = m_autoStart = _stricmp(node->getAttribute("autoStart", "0"), "true") == 0 
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
	if (m_initialStart)
	{
		// This is the first update() call and we shall start the avi initally here
		// Important: We have to do this at the end of the first update call, as we don't have decoded any data yet
		playAvi();
		// But never again at this place
		m_initialStart = false;
	}
}

void VideoComponent::render()
{
	if (m_playing && m_isOverlay)
	{
		// Render the overlay (currently in fullscreen)
		const float ww = h3dGetViewportParams( 0x0, 0x0, 0x0, 0x0 );
		const float coords[] = 
		{
			0, 0, 0, 1.0f,
			0, 1.0f, 0, 0,
			ww, 1.0f, 1.0f, 0,
			ww, 0, 1.0f, 1.0f
		};
		h3dShowOverlays(coords, sizeof(coords), 1.0f,1.0f,1.0f,1.0f, m_material, 0);
	}
}

void VideoComponent::playAvi()
{
	if (m_pgf != 0x0 && m_material != 0 && m_videoTexture != 0 && m_samplerIndex != -1)
	{
		// And apply the new video texture as sampler to the material
		h3dSetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI, m_videoTexture);

		m_startTime = GameEngine::currentTimeStamp();
		m_playing = true;
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
	if (m_playing)
	{
		// Still playing, so stop it
		stopAvi();
	}
	if (m_pgf)
	{
		// Already opened a video so close it first
		closeAvi();
	}
	AVIFileInit();							// Opens The AVIFile Library
	// Opens The AVI Stream
	if (AVIStreamOpenFromFile(&m_pavi, filename.c_str(), streamtypeVIDEO, 0, OF_READ, NULL) !=0)
	{
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
		// Failure creating the dynamic texture
		closeAvi();
		return false;
	}

	// Find the sampler index within the material
	m_samplerIndex = h3dFindResElem(m_material, H3DMatRes::SamplerElem, H3DMatRes::SampNameStr, "albedoMap");	
	if (m_samplerIndex == -1)
	{
		// No sampler found in material
		closeAvi();
		return false;
	}

	// Store old sampler
	m_originalSampler = h3dGetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI);

	/*
	// TODO open the audio stream if there is one, create sound resource through the sound component (type=user defined)
	// And get pointer to the buffer
	// Then update the buffer every frame

	// Now open the audio stream
	PAVISTREAM audioStream;
	if (!AVIStreamOpenFromFile(&audioStream, filename.c_str(), streamtypeAUDIO, 0, OF_READ, NULL) !=0)
	{
		// Audio stream found
		AVISTREAMINFO audioInfo;
		AVIStreamInfo(audioStream, &audioInfo, sizeof(audioInfo));			// Reads Information About The Stream Into psi
		PCMWAVEFORMAT audioFormat;
		long formatSize = sizeof(audioFormat);
		AVIStreamReadFormat(audioStream, 0, &audioFormat, &formatSize);
		long bufferSize = audioFormat.wBitsPerSample / 8;
		unsigned long bytesPerSec = audioFormat.wf.nAvgBytesPerSec;
		char* buffer = new char[bufferSize];		
		long bytesWritten = 0;
		AVIStreamRead(audioStream, 0, 1, buffer, bufferSize, &bytesWritten, 0x0);
		delete[] buffer;		
	}*/

	if (m_autoStart)
		// Play video directly
		playAvi();

	return true;
}

bool VideoComponent::grabAviFrame(int frame)
{
	if (m_pgf != 0x0 && frame >= 0 && frame < m_lastframe && m_hdd && m_hdd)
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
				return false;
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
	if (m_originalSampler != 0 && m_samplerIndex != -1 && m_material != 0)
		// Reset original sampler texture
		h3dSetResParamI(m_material, H3DMatRes::SamplerElem, m_samplerIndex, H3DMatRes::SampTexResI, m_originalSampler);
	m_playing = false;
}

void VideoComponent::closeAvi()
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
}