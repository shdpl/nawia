module qt.gui.QPainter_aux;

extern(C) void static_init_QPainter();
shared static this() { static_init_QPainter; }

