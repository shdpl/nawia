module qt.core.QEventLoop_aux;

extern(C) void static_init_QEventLoop();
shared static this() { static_init_QEventLoop; }

