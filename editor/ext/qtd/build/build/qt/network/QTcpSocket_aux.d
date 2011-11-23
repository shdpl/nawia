module qt.network.QTcpSocket_aux;

extern(C) void static_init_QTcpSocket();
shared static this() { static_init_QTcpSocket; }

