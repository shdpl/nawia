module qt.core.QSemaphore_aux;

extern(C) void static_init_QSemaphore();
shared static this() { static_init_QSemaphore; }

