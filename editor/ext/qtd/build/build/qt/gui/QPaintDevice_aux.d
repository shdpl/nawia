module qt.gui.QPaintDevice_aux;

extern(C) void static_init_QPaintDevice();
shared static this() { static_init_QPaintDevice; }

