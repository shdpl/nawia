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
    
#ifndef VIDEOCOMPONENT_H_
#define VIDEOCOMPONENT_H_

#include <GameEngine/config.h>
#include <GameEngine/GameComponent.h>

#include <vfw.h>

#include <string>

class VideoComponent : public GameComponent
{
public:
	static GameComponent*  createComponent( GameEntity* owner );

	VideoComponent(GameEntity* owner);
	virtual ~VideoComponent();

	bool checkEvent(GameEvent* event) { return true; }

	void executeEvent(GameEvent* event);

	void loadFromXml(const XMLNode* description);

	void update();
	void render();
	void run();

	void playAvi();											// Start the current avi file
	bool openAvi(const std::string& filename);				// Opens an avi file
	void stopAvi();											// Stops playing the current avi

private:
	bool grabAviFrame(int frame);									// Grabs a frame from the video stream
	void convertFrameData(unsigned char* src, unsigned char* dst);	// Reverses the data and adds an alpha channel

	void closeAvi();												// Closes the avi file
	
	// Video for windows data
	AVISTREAMINFO		m_psi;								// Pointer To A Structure Containing Stream Info
	PAVISTREAM			m_pavi;								// Handle To An Open Stream
	BITMAPINFOHEADER	m_bmiavih;							// Header Information For opening the avi stream (needed for xvid)
	PGETFRAME			m_pgf;								// Pointer To A GetFrame Object
	BITMAPINFOHEADER	m_bmih;								// Header Information For DrawDibDraw Decoding
	HDRAWDIB			m_hdd;								// Handle For Our Dib
	HBITMAP				m_hBitmap;							// Handle To A Device Dependant Bitmap
	HDC					m_hdc;								// Creates A Compatible Device Context

	// Pointers to the data (converted or not)
	unsigned char*		m_pdata;							// Pointer To Raw Texture Data
	unsigned char*		m_data;								// Pointer To Resized Image
	unsigned char*		m_bgraData;							// Pointer to the completely converted image

	// Video properties
	long				m_width;							// Width of video
	long				m_height;							// Height of video
	long				m_lastframe;						// Last frame of video = length
	float				m_timePerFrame;						// Will Hold Rough Seconds Per Frame
	std::string			m_fileName;							// Filename of the video
	bool				m_hasAudio;							// Whether we have succesfully decoded an audio stream

	// And current settings for playing it
	int					m_currentFrame;						// The currently displayed frame number
	float				m_startTime;						// When the file was started playing
	bool				m_playing;							// Whether we are currently playing an avi
	bool				m_newData;							// True if we have just decompressed new video data in the last run call
	bool				m_autoStart;						// Automatically start the video after loading
	bool				m_startNextFrame;					// True if the video should be started the next frame (update-call)
	bool				m_loop;								// Restart video after finishing
	
	int					m_videoTexture;						// The texture where we stream our video data to
	int					m_originalSampler;					// The original sampler texture
	int					m_material;							// The used material
	int					m_samplerIndex;						// And the sampler index

	int					m_resizeWidth;						// Width for resizing
	int					m_resizeHeight;						// Height for resizing
	bool				m_resize;							// Whether we have to resize

	bool				m_isOverlay;						// Whether this video should be rendered as an overlay

	int					m_camId;							// Current horde camera id

	float				m_x, m_y, m_w, m_h;					// The overlay position and extent
	bool				m_stretchToAspect;					// Wether the overlay width should be stretched to the aspect

};

#endif
        