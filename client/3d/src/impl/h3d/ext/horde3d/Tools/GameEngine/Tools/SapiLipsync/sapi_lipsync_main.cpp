/* 
sapi_lipsync_main.h

Copyright (C) 2005 Annosoft, LLC. Richardson, Texas. 
All rights reserved.  
	
Permission is hereby granted, free of charge, to use and distribute
this software and its documentation without restriction, including   
without limitation the rights to use, copy, modify, merge, publish,  
distribute, sublicense, and/or sell copies of this work, and to      
permit persons to whom this work is furnished to do so, subject to   
the following conditions:                                            
1. The code must retain the above copyright notice, this list of    
	conditions and the following disclaimer.                        
2. Any modifications must be clearly marked as such.                
3. Original authors' names are not deleted.                         
4. The name "Annosoft" and the authors' names can be not used to endorse or 
   promote products derived from this software without specific prior written       
   permission.                                            

ANNOSOFT AND THE CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES 
WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS, IN NO EVENT ANNOSOFT NOR THE CONTRIBUTORS 
BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY 
DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   
AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING 
OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. 

*/	


/**
@file sapi_lipsync_main.cpp
@brief main entry point and command line argument processing

This file implements the main entry point for the sapi_lipsync program.
It also implements functionality to process the command line arguments
*/

/**
@defgroup sapi_lipsync_args sapi_lipsync.exe command line arguments.

@brief this section documents the program arguments

The command line arguments to the sapi lipsync program consist of
specifying a single .wav audio file and an optional text file.

The program looks for a file with extension *.wav in the command line 
arguments, if not found, the program punts. If found, it looks
at the rest of the arguments to determine if there is an accompanying text file.

The program can lipsync only one file at a time.

The first argument should be the audio file. The second argument,
an optional text file.

@verbatim
DOS:\>sapi_lipsync.exe my_audio.wav my_audio.txt
;; performs text based lipsync given the audio file and the text
;; transcript
@endverbatim


@verbatim
DOS:\>sapi_lipsync.exe my_audio.wav
;; performs lipsync without the text file
@endverbatim

**/

#include "stdafx.h"
#include <comdef.h>
#include <fstream>
#include "sapi_lipsync.h"
#include "sapi_util.h"
#include "phone_estimate.h"
#include <fstream>


/// prints "usage" information when incorrect arguments are supplied
void usage(std::ostream& os)
{
	os <<	"USAGE:" << std::endl << std::endl;
	os <<	"sapi_lipsync wavfile [-t textfile] [-o outputfile]" << std::endl;
	os <<	"wavfile:      Wav file for lipsync" << std::endl;
	os <<	"-t textfile:  optional textfile for lipsync with text transcription" << std::endl;
	os <<	"-o outputfile:  name of the output file (without extension)" << std::endl;
}

/// prints the program banner including copyright 
void banner(std::ostream& os, std::wstring& strAudioFile, 
			TCHAR* strTextFile)
{
	USES_CONVERSION;
	os << "SAPI Lipsync version 1.0 Copyright (C) Annosoft LLC 2005. All Rights Reserved" << std::endl;
	os << std::endl << std::endl;
	os << "This program will generate phoneme timings from an audio file using SAPI 5.1." << std::endl << 
		"It takes as input a Windows RIFF WAV and an optional text transcript" << std::endl <<
		"and generates phoneme and word markers from the results " << std::endl << std::endl;

	if (strAudioFile.size() && strTextFile)
	{
		os << "Text based Lipsync: " << std::endl;
		os << "audio: " << wstring_2_string(strAudioFile) << std::endl;
		os << "text: " << T2A(strTextFile) << std::endl;
		
	}
	else if (strAudioFile.size())
	{
		os << "Textless Lipsync: " << std::endl;
		os << "audio: " << wstring_2_string(strAudioFile) << std::endl;
	}
	os << std::endl << std::endl;
}

/**
@brief This function run a win32 message loop

It polls the specified sapi_lipsync object for completion,
while running the message loop. The message loop is necessary
for SAPI to run.
@todo add a way to stop this process (such as a key down)
@param lsp - lipsync object or subclass
**/
void
run_lipsync_message_loop(sapi_lipsync& lsp)
{
	MSG msg;
    while (!lsp.isDone())
    {
        if (GetMessage(&msg, NULL, 0, 0))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
            Sleep(100);
		}       
    }        
}


/**
@brief This function demonstrates how to perform "Text Based Lipsync"

Given an audio file and a text file, this method will generate word timings and
phoneme timings of the text file to the audio file using sapi_lipsync and
helpers.

This is the best code to look at first.

The results are printed to std::out
@param strAudioFile - [in] audio file
@param strTextFile - [in] text file
**/
void
run_sapi_textbased_lipsync(std::wstring& strAudioFile, TCHAR *strTextFile, std::string outFile)
{
	// 1. [optional] declare the SAPI 5.1 estimator. 
	// NOTE: for different phoneme sets, create a new estimator
	phoneme_estimator sapi51Estimator;

	// 2. Load the text file into memory
	WCHAR * pwszCoMem = 0;
	ULONG cch = 0;
    HRESULT hr = GetTextFile(strTextFile, &pwszCoMem, &cch);
	if (hr == S_OK)
    {
		std::wstring strText(pwszCoMem, cch);

		// 3. declare the sapi lipsync object and call the lipsync method 
		// to start the lipsync process
        sapi_textbased_lipsync lsp(&sapi51Estimator);
		if (lsp.lipsync(strAudioFile, strText))
		{

			// 4. Run the message loop and wait till the lipsync is 
			// finished
			run_lipsync_message_loop(lsp);
              
			// 5. finalize the lipsync results for printing
			// this call will estimate phoneme timings 
			lsp.finalize_phoneme_alignment();
			
			// 6. print the results to the output stream
			//lsp.print_results(std::cout);
			
			// 6'. print results in a file
			std::string strOutFile = outFile+".phonemes.xml";
			std::ofstream outstream(strOutFile.c_str());
			outstream << "<PhonemeTimings audiofile=\"" << wstring_2_string(strAudioFile) << "\" >" << std::endl;
			lsp.print_results(outstream);
			outstream << "</PhonemeTimings>" << std::endl;
			outstream.close();             
		}
		else
		{
			std::wcerr << lsp.getErrorString() << std::endl;			
		}
	}
	else
	{
		std::wcerr << L"Can't open text transcript file" << std::endl;
	}
}

/**
@brief This function demonstrates how to perform "Textless Lipsync"

Given an audio file, this method will use SAPI to guess at words
and word timings and phoneme timings in the specified audio file. 
The results are printed to std::out.

This is the best code to look at first

@param strAudioFile - [in] audio file
**/
void
run_sapi_textless_lipsync(std::wstring& strAudioFile, std::string outFile)
{
	// 1. [optional] declare the SAPI 5.1 estimator. 
	// NOTE: for different phoneme sets: create a new estimator
	phoneme_estimator sapi51Estimator;

	// 2. declare the sapi lipsync object and call the lipsync method to
	// start the lipsync process
	sapi_textless_lipsync lsp(&sapi51Estimator);
	if (lsp.lipsync(strAudioFile))
    {
		// 3. Run the message loop and wait till the lipsync is finished
        run_lipsync_message_loop(lsp);
		
		// 4. finalize the lipsync results for printing
		// this call will estimate phoneme timings 
		lsp.finalize_phoneme_alignment();

		// 5. print the results to the output stream
		//lsp.print_results(std::cout);
		
		// 5'. print results in a file
		std::string strOutFile = outFile+".phonemes.xml";
		std::ofstream outstream(strOutFile.c_str());
		outstream << "<PhonemeTimings audiofile=\"" << wstring_2_string(strAudioFile) << "\" >" << std::endl;
		lsp.print_results(outstream);
		outstream << "</PhonemeTimings>" << std::endl;
		outstream.close();            
	}
	else
	{
		std::wcerr << lsp.getErrorString() << std::endl;
	}
}


/**@brief main entry point of the program

	This program will process the command line arguments pulling the audio
	file and pulling the text transcription (if any)

	It will then use the appropriate engine to perform the lipsync.
**/
int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	CoInitialize(NULL);

	if( argc < 2 )
	{
		usage(std::cerr);
		return -1;
	}
	
	TCHAR *strTextFile = NULL;
	std::wstring strAudioFile = TCHAR_2_wstring(argv[1]);
	std::string outFile = extractFileName( argv[1], false );

	for( int i = 2; i < argc; ++i )
	{
		if( strcmp( argv[i], "-o" ) == 0 )
		{
			if( argc > i + 1 )
			{	
				outFile = argv[++i];
			}
			else
			{
				std::cout << "Invalid argument";
				return 0;
			}
		}
		else if( strcmp( argv[i], "-t" ) == 0 )
		{
			if( argc > i + 1 )
			{
				strTextFile = argv[++i];
			}
			else
			{
				std::cout << "Invalid argument";
				return 0;
			}
		}
		else
		{
			std::cout << "Invalid argument";
			return 0;
		}
	}

	banner(std::cerr, strAudioFile, strTextFile);	

	// lipsync!
	if (strAudioFile.size() && strTextFile)
	{
		run_sapi_textbased_lipsync(strAudioFile, strTextFile, outFile);
	}
	else if (strAudioFile.size())
	{
		run_sapi_textless_lipsync(strAudioFile, outFile);
	}		
	else
	{
		usage(std::cerr);
	}
	return (0);
}


