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
// GameEngine Core Library of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007-2011 Volker Wiendl, Felix Kistler
// 
// ****************************************************************************************
#include "GameLog.h"

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
#ifdef PLATFORM_WIN
		if (GetModuleFileName(NULL, buffer, (DWORD)len)<= 0)
#elif defined PLATFORM_LINUX
		if (readlink (“/proc/self/exe”, buffer, len) <= 0)
#endif
			return -1;
		/* Find the last occurrence of a backward slash, the path separator.  */
#ifdef PLATFORM_WIN
		path_end = strrchr (buffer, '\\');
#elif defined PLATFORM_LINUX
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
	string					defaultLog = "_GameEngineLog";	

	bool initLog(const string& name)
	{
		map<string, ofstream*>::iterator iter = logFiles.find(name);
		if (iter != logFiles.end() && iter->second != 0)
		{
			if (iter->second->is_open() && iter->second->good())
				return true;
			else
			{
				delete iter->second;
				iter->second = 0;
			}
		}

		char path[MAX_PATH];
		int pathLen = GetExecutablePath(path, sizeof(path));
		if (pathLen <= 0)
			return false;

		string pathStr(path);

		if (pathStr.back() != '\\' && pathStr.back() != '/')
			pathStr += "\\";

		pathStr += name + ".htm";

		ofstream* output = new ofstream(pathStr, ios::trunc);
		if (!output->is_open() || !output->good())
			return false;

		logFiles[name] = output;

		*output<< 
			"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n"
			"<html>\n"
			"<head>\n"
			"<title>";
		if (name.compare(defaultLog) != 0)
			*output << name << " - ";
		*output<<
			"GameEngine Logfile</title>\n"
			"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=iso-8859-1\">\n"
			"</head>\n"
			"<body bgcolor=\"#FAF1D3\">\n"
			"<p align=\"center\"><strong><font size=\"+2\">";
		if (name.compare(defaultLog) != 0)
			*output << name << " - ";
		*output<<
			"GameEngine Logfile</font></strong></p>\n"
			"<p align=\"center\">Created with GameEngine Log 1.1</p>\n"
			"<hr>\n"
			"<p>Debuginformation follows:</p>\n"
			"<center>\n"
			"<table width=\"75%\" border=\"0\">\n";
		return output->is_open() && output->good();
	}

	void close()
	{		
		map<string, ofstream*>::iterator iter;
		map<string, ofstream*>::iterator end = logFiles.end();
		for (iter = logFiles.begin(); iter != end; ++iter)
		{		
			ofstream* output = iter->second;
			if (output !=0 )
			{
				*output << "</table>\n"
					<< "</center>\n" 
					<< "<p><font size=\"-2\">GameLog - University of Augsburg (2011)</font></p>\n"
					<< "</body>\n"
					<< "</html>\n";
				output->close();
				delete output;
			}
		}
		logFiles.clear();
	}

	void log(const string& logFileName, const char* bgcolor, const char* msg)
	{
		if (!initLog(logFileName))
		{
			cerr << "Error writing to log file" << endl;
			return;
		}
		ofstream* output = logFiles[logFileName];

		std::string cleanMsg(msg);

		findandreplace(cleanMsg, ">", "&gt;");
		findandreplace(cleanMsg, "<", "&lt;");
		*output << "\t<tr>\n"
			<< "\t\t<td width=\"23%\" bgcolor=\"" << bgcolor << "\"><font color=\"#FFFFFF\"><strong>" << (GetTickCount() - start) * 0.001f << "s</strong></font></td>\n"
			<< "\t\t<td width=\"77%\" bgcolor=\"" << bgcolor << "\"><font color=\"#FFFFFF\"><strong>" << cleanMsg << " ";
		*output << "</strong></font></td>\n"
			<< "\t</tr>\n";
		(*output).flush();
	}

	void log(const char* bgcolor, const char* msg)
	{
		log(defaultLog, bgcolor, msg);
	}

	GAMEENGINE_API void logToCustomFile(const char* logFileName, const char* message, ...)
	{
		if (logFileName)
		{
			va_list arglist;
			va_start( arglist, message );
			int len = _vscprintf( message, arglist )+ 1;
			char* buffer = new char[len * sizeof(char)];
			#pragma warning( push )
			#pragma warning( disable:4996 )
			vsprintf( buffer, message, arglist );
			#pragma warning( pop )

			log(string(logFileName), "#009900", buffer);
			delete[] buffer;
		}
	}

	GAMEENGINE_API void logMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = new char[len * sizeof(char)];
		#pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )

		log("#009900", buffer);
		delete[] buffer;
	}

	GAMEENGINE_API void warnMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = new char[len * sizeof(char)];
		#pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )

		log("#FFCC00", buffer);
		delete[] buffer;
	}

	GAMEENGINE_API void errorMessage(const char* message, ...)
	{
		va_list arglist;
		va_start( arglist, message );
		int len = _vscprintf( message, arglist )+ 1;
		char* buffer = new char[len * sizeof(char)];
		#pragma warning( push )
		#pragma warning( disable:4996 )
		vsprintf( buffer, message, arglist );
		#pragma warning( pop )

		log("#FF0000", buffer);
		delete[] buffer;
	}
}