module qt.core.QMutex_aux;

extern(C) void static_init_QMutex();
shared static this() { static_init_QMutex; }

