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
// ****************************************************************************************
//

// ****************************************************************************************
//
// GameEngine Socket Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2010
// authors: Ionut Damian, Nikolaus Bee, Felix Kistler
// 
// ****************************************************************************************
#ifndef SOCKETADDRESS_H
#define SOCKETADDRESS_H


#ifndef _WINSOCKAPI_
	#include <winsock2.h>
#endif

#include <string>

/**
 * Class sotring socket addresses
 */
class SocketAddress
{
public:
	SocketAddress(const char *addressString, int port);
	///function for comparing two socket adresses
	bool operator<(const SocketAddress& other) const
	{
		return memcmp(&m_address, &other.m_address, sizeof(sockaddr_in)) < 0;
	}

	///member adress
	sockaddr_in m_address;
	std::string m_addressString;
};



#endif