module qt.core.QReadWriteLock_aux;

extern(C) void static_init_QReadWriteLock();
shared static this() { static_init_QReadWriteLock; }

