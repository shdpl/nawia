package qt.webkit;

class QtJambi_LibraryInitializer
{
    static {

    qt.Utilities.loadQtLibrary("QtGui");
    qt.Utilities.loadQtLibrary("QtNetwork");
    qt.Utilities.loadQtLibrary("QtWebKit");
            qt.Utilities.loadJambiLibrary("qt_webkit");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

