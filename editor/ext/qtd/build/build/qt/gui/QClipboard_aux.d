module qt.gui.QClipboard_aux;

extern(C) void static_init_QClipboard();
shared static this() { static_init_QClipboard; }

