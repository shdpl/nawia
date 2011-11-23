module qt.gui.QPaintEngine_aux;

extern(C) void static_init_QPaintEngine();
shared static this() { static_init_QPaintEngine; }

