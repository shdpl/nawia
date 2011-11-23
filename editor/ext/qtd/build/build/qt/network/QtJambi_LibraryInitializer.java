package qt.network;

class QtJambi_LibraryInitializer
{
    static {

        qt.Utilities.loadQtLibrary("QtNetwork");
            qt.Utilities.loadJambiLibrary("qt_network");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

