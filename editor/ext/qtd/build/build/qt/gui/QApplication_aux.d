module qt.gui.QApplication_aux;

extern(C) void static_init_QApplication();
shared static this() { static_init_QApplication; }

