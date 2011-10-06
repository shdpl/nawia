module qt.core.QThreadPool_aux;

extern(C) void static_init_QThreadPool();
shared static this() { static_init_QThreadPool; }

