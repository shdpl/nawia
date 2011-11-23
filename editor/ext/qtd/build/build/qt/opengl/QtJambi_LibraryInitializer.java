package qt.opengl;

class QtJambi_LibraryInitializer
{
    static {

    qt.Utilities.loadQtLibrary("QtGui");
    qt.Utilities.loadQtLibrary("QtOpenGL");
          qt.Utilities.loadJambiLibrary("qt_opengl");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

