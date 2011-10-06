package qt.core;

class QtJambi_LibraryInitializer
{
    static {

    qt.Utilities.loadQtLibrary("QtCore");
            qt.Utilities.loadJambiLibrary("qt_core");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

