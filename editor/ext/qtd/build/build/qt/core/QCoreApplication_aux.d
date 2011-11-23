module qt.core.QCoreApplication_aux;

extern(C) void static_init_QCoreApplication();
shared static this() { static_init_QCoreApplication; }

