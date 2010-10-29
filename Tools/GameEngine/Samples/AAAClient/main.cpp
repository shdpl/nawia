/**Sample socket client
*Connects to the scoket server from SERVER_ADDR through the port SERVER_PORT
*The server should be the DemoAnimRC SocketServer
*/


//#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <process.h>


//Definitions ================================
#define SERVER_ADDR "127.0.0.1"		//Address of the socket server (computer where the DemoAnimRC is running)
#define SERVER_PORT 343				//Connection Port of the socket server
//============================================

int startWinsock(void);
void startListening(void* param);

int main()
{
	long rc;
	SOCKET s;
	SOCKADDR_IN addr;
	char buffer_send[256];

	//** init
	rc = startWinsock();

	if(rc!=0)
	{
		printf("[AAAClient]ERROR: startWinsock %d\n",rc);
		//Shutting down
		WSACleanup();
		return -1;
	}

	//** Creating the socket
	s = socket( AF_INET, SOCK_DGRAM, 0);
	if(s==INVALID_SOCKET)
	{
		printf("[AAAClient]ERROR: Couldn't create socket %d\n",WSAGetLastError());
		//Shutting down
		closesocket(s);
		WSACleanup();
		return -1;
	}
	
	memset(&addr,0,sizeof(SOCKADDR_IN));
	addr.sin_family = AF_INET;
	addr.sin_port = htons( SERVER_PORT );
	addr.sin_addr.s_addr = inet_addr( SERVER_ADDR );
	//addr.sin_addr.s_addr = INADDR_ANY;

	//Connecting to the server
	//rc = connect( s, (SOCKADDR *)&addr, sizeof( SOCKADDR_IN ) );
	//rc = bind( s, (SOCKADDR *)&addr, sizeof(SOCKADDR_IN) );
	
	//send one message
	rc = sendto(s, "hello", 6, 0, (struct sockaddr *)&addr, sizeof(addr));
	if(rc==SOCKET_ERROR)
	{
		printf("[AAAClient]ERROR: Connection failed %d\n",WSAGetLastError());
		//Shutting down
		closesocket(s);
		WSACleanup();
		gets( buffer_send );
		return -5;
	} 
	else
	{
		printf("[AAAClient]Connected to Advanced Agent Animations on %s\nFor help please read the readme.txt file\n\n",SERVER_ADDR);
	}


	//Start listening thread
	if( _beginthread( startListening, 0, &s ) <= 0 )
	{
		printf( "[AAAClient] Couldn't start listening thread\n" );
		return false;
	}

	//Sening information
	while(rc!=SOCKET_ERROR)
	{
		//Determinig what string should be sent
		//Example of String input
		//printf(""); 
		gets( buffer_send );
		/////////////////////////

		//Send
		//send( s, buffer_send, strlen(buffer_send), 0 );
		sendto(s, buffer_send, (int)strlen(buffer_send), 0, (struct sockaddr *)&addr, sizeof(addr));

		if(rc==SOCKET_ERROR)
		{
			printf("[AAAClient]ERROR: send %d\n",WSAGetLastError());
			break;
		}
	}
	//Shutting down
	closesocket(s);
	WSACleanup();
	return 0;
}

int startWinsock(void)
{
	WSADATA wsa;
	return WSAStartup(MAKEWORD(2,0),&wsa);
}

void startListening(void* param)
{
	SOCKET s = *(SOCKET *)param;
	long rc = 0;
	char buffer_recv[256];
	SOCKADDR_IN addr;

	memset(&addr,0,sizeof(SOCKADDR_IN));
	addr.sin_family = AF_INET;
	addr.sin_port = htons( SERVER_PORT );
	addr.sin_addr.s_addr = inet_addr( SERVER_ADDR );
	//addr.sin_addr.s_addr = INADDR_ANY;

	//rc = connect( s, (SOCKADDR *)&addr, sizeof( SOCKADDR_IN ) );
	
	while(rc!=SOCKET_ERROR)
	{
		//Receive
		//rc=recv( s, buffer_recv, 256, 0 );
		//int addrlen = sizeof(SOCKADDR_IN);
		int addrlen = sizeof(addr);
		rc = recvfrom(s, buffer_recv, 256, 0, (SOCKADDR*)&addr, &addrlen);
		
		if(rc==SOCKET_ERROR)
		{
			printf("[AAAClient]ERROR: receive %d\n",WSAGetLastError());
			break;
		}
		buffer_recv[rc]='\0';
		printf("%s\n",buffer_recv);
	}
}