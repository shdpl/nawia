module qt.network.QTcpServer_aux;

extern(C) void static_init_QTcpServer();
shared static this() { static_init_QTcpServer; }

