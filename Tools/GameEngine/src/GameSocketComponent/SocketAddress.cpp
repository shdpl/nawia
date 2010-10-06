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
#include "SocketAddress.h"


SocketAddress::SocketAddress(const char *servername, int port)
{
	memset(&m_address, 0, sizeof(sockaddr_in));

	m_address.sin_family = AF_INET;
	m_address.sin_port = htons(port);
	m_address.sin_addr.s_addr = inet_addr(servername);
}

//bool SocketAddress::compareTo( SocketAddress* addr )
//{
//	int ret = memcmp(&this->m_address, &addr->m_address, sizeof(sockaddr_in));
//	
//	return (ret == 0);
//}