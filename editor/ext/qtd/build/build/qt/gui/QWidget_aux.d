module qt.gui.QWidget_aux;

extern(C) void static_init_QWidget();
shared static this() { static_init_QWidget; }

