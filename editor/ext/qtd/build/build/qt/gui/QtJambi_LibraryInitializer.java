package qt.gui;

class QtJambi_LibraryInitializer
{
    static {

        qt.Utilities.loadQtLibrary("QtGui");
        qt.Utilities.loadJambiLibrary("qt_gui");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

