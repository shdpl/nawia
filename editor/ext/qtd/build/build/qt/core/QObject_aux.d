module qt.core.QObject_aux;

extern(C) void static_init_QObject();
shared static this() { static_init_QObject; }

