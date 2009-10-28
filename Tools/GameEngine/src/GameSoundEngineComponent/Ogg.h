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

#ifndef _OGG_H_
#define _OGG_H_

#if defined ( WIN32 ) || defined( _WINDOWS )
#	include <windows.h>
#endif

#include "Ogg\vorbisfile.h"
#include <stdio.h>

#define MAX_NUM_OGGID			1024

typedef struct
{
		char  *pDecodeBuffer;

		OggVorbis_File	sOggVorbisFile;

		unsigned long	ulBufferSize;

		unsigned long	ulFrequency;
		unsigned long	ulFormat;
		unsigned long	ulChannels;
} OGGFILEINFO, *LPOGGFILEINFO;


typedef int	OGGID;

// Function pointers
typedef int (*LPOVCLEAR)(OggVorbis_File *vf);
typedef long (*LPOVREAD)(OggVorbis_File *vf,char *buffer,int length,int bigendianp,int word,int sgned,int *bitstream);
typedef ogg_int64_t (*LPOVPCMTOTAL)(OggVorbis_File *vf,int i);
typedef vorbis_info * (*LPOVINFO)(OggVorbis_File *vf,int link);
typedef vorbis_comment * (*LPOVCOMMENT)(OggVorbis_File *vf,int link);
typedef int (*LPOVOPENCALLBACKS)(void *datasource, OggVorbis_File *vf,char *initial, long ibytes, ov_callbacks callbacks);


/** unsigned 32-bit integer */
typedef unsigned int ALuint;

enum OGGRESULT
{
	OR_OK = 0,
	OR_OUTOF_MAX_NUM_OGGID				= -1,
	OR_OUTOF_MEMORY						= -2,
	OR_INITIALIZATION_ERROR				= -3,
	OR_INVALIDFILENAME					= -4,
	OR_INVALIDOGGID						= -5,
	OR_UNKNOWN_ERROR					= -6
};


// Callback functions
size_t ov_read_func(void *ptr, size_t size, size_t nmemb, void *datasource);
int ov_seek_func(void *datasource, ogg_int64_t offset, int whence);
int ov_close_func(void *datasource);
long ov_tell_func(void *datasource);



class Ogg
{
	public:
		Ogg();

		OGGRESULT LoadOggFile(const char *szFilename, OGGID *pOggID);
		OGGRESULT DeleteOggFile(OGGID OggID);

		unsigned long DecodeOggVorbis(OGGID OggID);

		char * getDecodeBuffer(OGGID OggID);

		unsigned long getFrequency(OGGID OggID);
		unsigned long getFormat(OGGID OggID);
		unsigned long getChannels(OGGID OggID);

	private:

		// OGG Files
		LPOGGFILEINFO	m_OggIDs[MAX_NUM_OGGID];

		// Ogg Vorbis DLL Handle
		HINSTANCE g_hVorbisFileDLL;

		bool g_bVorbisInit;

		LPOVCLEAR			fn_ov_clear;
		LPOVREAD			fn_ov_read;
		LPOVPCMTOTAL		fn_ov_pcm_total;
		LPOVINFO			fn_ov_info;
		LPOVCOMMENT			fn_ov_comment;
		LPOVOPENCALLBACKS	fn_ov_open_callbacks;

		void InitVorbisFile();
		void ShutdownVorbisFile();

		bool IsOggID(OGGID OggID);

		void Swap(short &s1, short &s2);
};

#endif // _OGG_H_