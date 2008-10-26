// ****************************************************************************************
//
// Horde3D Scene Editor 
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the Horde3D Scene Editor.
//
// The Horde3D Scene Editor is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 3 of the License 
//
// The Horde3D Scene Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// ****************************************************************************************

#include "QStdOutListener.h"



QStdOutListener::QStdOutListener(const QString& pipeName /*= QString("stdoutredirection")*/, QObject* parent /*= 0*/) : QObject(parent), m_timerID(0)
{
#ifdef _WIN32
#ifdef UNICODE	
	m_pipe = CreateNamedPipe((LPCWSTR) (QString("\\\\.\\pipe\\")+pipeName).utf16(),	PIPE_ACCESS_INBOUND, 0,	1,	2048, 2048,	500, NULL); 	
#else
	m_pipe = CreateNamedPipe(qPrintable(pipeName),	PIPE_ACCESS_INBOUND, 0,	1,	2048, 2048,	500, NULL); 	
#endif
#if _MSC_VER > 1300
	FILE* file = 0;
	freopen_s(&file, qPrintable(QString("\\\\.\\pipe\\")+pipeName), "w", stdout); 
#else
	freopen(qPrintable(QString("\\\\.\\pipe\\")+pipeName), "w", stdout); 
#endif
	// This call is necessary and will FAIL. This is NORMAL. GetLastError() should
	// return ERROR_PIPE_CONNECTED
	ConnectNamedPipe(m_pipe, NULL);
#else
//	int	fdOut[2]={-1, -1};
//	pipe(fdOut)
//	dup2(fdOut[1], STDOUT_FILENO)
	//... call the library
//	fcntl(fdOut[0], F_SETFL, fileFlags | O_NONBLOCK)
	//... read from fdOut[0]
#endif
}


QStdOutListener::~QStdOutListener()
{
#ifdef _WIN32
	CloseHandle(m_pipe);
#endif
}

void QStdOutListener::start(int msecs)
{
	if (m_timerID == 0)
		m_timerID = startTimer(msecs);
}

void QStdOutListener::stop()
{
	if (m_timerID != 0)
		killTimer(m_timerID);
	m_timerID = 0;
}

void QStdOutListener::timerEvent(QTimerEvent* event)
{
	char buf[256];
	unsigned long bytesRead = 0;		
	do {
		fflush(stdout); // necessary, or you could wait long before seeing lines
		bytesRead = 0;		
#ifdef _WIN32
		// look first in the pipe to prevent ReadFile from blocking
		if (PeekNamedPipe(m_pipe, buf, sizeof(buf)-1, &bytesRead, NULL, NULL) && bytesRead) 
		{
			ReadFile(m_pipe, buf, bytesRead, &bytesRead, NULL);
			buf[bytesRead] = 0;
			emit received(QString(buf));
		}
#endif
	} while (bytesRead);	 
}



