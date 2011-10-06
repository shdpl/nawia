module qt.opengl.QGLWidget_aux;

extern(C) void static_init_QGLWidget();
shared static this() { static_init_QGLWidget; }

