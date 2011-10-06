module qt.network.QUdpSocket_aux;

extern(C) void static_init_QUdpSocket();
shared static this() { static_init_QUdpSocket; }

