module qt.opengl.QGLColormap_aux;

extern(C) void static_init_QGLColormap();
shared static this() { static_init_QGLColormap; }

