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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GameLog.h"

#ifdef _WIN32
#include <windows.h>
#endif

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>

using namespace std;

namespace GameLog
{
	GAMEENGINE_API int GetExecutablePath (char* buffer, unsigned int len)
	{
		char* path_end;
		/* Read the target using GetModuleFileName  */
#ifdef WIN32
		if (GetModuleFileName(NULL, buffer, (DWORD)len)<= 0)
#elif defined LINUX
		if (readlink (“/proc/self/exe”, buffer, len) <= 0)
#endif
			return -1;
		/* Find the last occurrence of a backward slash, the path separator.  */
#ifdef WIN32
		path_end = strrchr (buffer, '\\');
#elif defined LINUX
		path_end = strrchr (buffer, '/');
#endif  
		if (path_end == NULL)
			return -1;
		/* Advance to the character past the last slash.  */
		++path_end;
		/* Obtain the directory containing the program by truncating the
		path after the last slash.  */
		*path_end = '\0';
		/* The length of the path is the number of characters up through the
		last slash.  */
		return (unsigned int) (path_end - buffer);   
	}

	void findandreplace( std::string & source, const std::string & find, const std::string & replace )
	{		
		for (size_t j; (j = source.find( find )) != std::string::npos;)
		{
			source.replace( j, find.length(), replace );
		}
	}


	/// Map of all open logfiles
	map<string, ofstream*>	logFiles;	
	/// Start time when loading the application
	__int32					start = GetTickCount();
	/// Name of the current log file
	string					currentLog = "GameEngineLog";	

	bool initLog(const string& name)
	{
		char path[260];			
		if (GetExecutablePath(path, sizeof(path))<=0)
			return false;

		map<string, ofstream*>::iterator iter = logFiles.begin();
		if (iter != logFiles.end())
		{
			if (iter->second!=0 && iter->second->is_open() && iter->second->good())
				return true;
			else if (iter->second != 0)		
				delete iter->second;
			iter->second = 0;
		}
		if (path[strlen(path)-1]!='\\' && path[strlen(path)-1]!='/')
			strcat_s(path, MAX_PATH, "\\");		
		sprintf_s(path, sizeof(path), "%s%s.htm", path, name.c_str());
		ofstream* output = 0;
		if (iter != logFiles.end())
		{
			iter->second = new ofstream(path, ios::trunc);
			output = iter->second;
		}
		else
		{
			output = new ofstream(path, ios::trunc);
			logFiles.insert(make_pair<string, ofstream*>(name, output));
		}		
		*output<< 
			"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n"
			"<html>\n"
			"<head>\n"
			"<title>GameEngine Logfile</title>\n"
			"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=iso-8859-1\">\n"
			"</head>\n"
			"<body bgcolor=\"#FAF1D3\">\n"
			"<p align=\"center\"><strong><font size=\"+2\">GameEngine Logfile</font></strong></p>\n"
			"<p align=\"center\">Created with GameEngine Log 1.0</p>\n"
			"<hr>\n"
			"<p>Debuginformation follows:</p>\n"
			"<center>\n"
			"<table width=\"75%\" border=\"0\">\n";
		return output->is_open() && output->good();
	}

	void close()
	{		
		map<string, ofstream*>::iterator iter = logFiles.begin();
		while (iter != logFiles.end())
		{		
			ofstream* output = iter->second;
			iter->second = 0;
			++iter;
			if (output==0) continue;
			*output << "</table>\n"
				<< "</center>\n" 
				<< "<p><font size=\"-2\">GameLog - University of Augsburg (2007)</font></p>\n"
				<< "</body>\n"
				<< "</html>\n";
			output->close();
			delete output;
		}
		logFiles.clear();
	}

	void log(const char* msg, const char* bgcolor)
	{
		if (!initLog(currentLog))
		{
			cerr << "Error writing to log file" << endl;
			return;
		}
		ofstream* output = logFiles[currentLog];
		std::string cleanMsg = msg;
		findandreplace(cleanMsg, ">", "&gt;");
		findandreplace(cleanMsg, "<", "&lt;");
		*output << "\t<tr>\n"
			<< "\t\t<td width=\"23%\" bgcolor=\"" << bgcolor << "\"><font color=\"#FFFFFF\"><strong>" << (GetTickCount() - start) * 0.001f << "s</strong></font></td>\n"
			<< "\t\t<td width=\"77%\" bgcolor=\"" << bgcolor << "\"><font color=\"#FFFFFF\"><strong>" << cleanMsg << " ";
		*output << "</strong></font></td>\n"
			<< "\t</tr>\n";
		(*output).flush();
	}

	GAMEENGINE_API void logMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = (char*)malloc( len * sizeof(char) );
		#pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )
		log(buffer, "#009900");
	    free( buffer );	
	}

	GAMEENGINE_API void warnMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = (char*)malloc( len * sizeof(char) );
	    #pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )
		log(buffer, "#FFCC00");
	    free( buffer );
	}

	GAMEENGINE_API void errorMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = (char*)malloc( len * sizeof(char) );
	    #pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )
		log(buffer, "#FF0000");
	    free( buffer );
	}
}