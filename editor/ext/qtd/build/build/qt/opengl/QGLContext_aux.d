module qt.opengl.QGLContext_aux;

extern(C) void static_init_QGLContext();
shared static this() { static_init_QGLContext; }

