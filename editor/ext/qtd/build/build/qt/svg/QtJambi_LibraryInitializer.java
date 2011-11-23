package qt.svg;

class QtJambi_LibraryInitializer
{
    static {

        qt.Utilities.loadQtLibrary("QtXml");
        qt.Utilities.loadQtLibrary("QtGui");
        qt.Utilities.loadQtLibrary("QtSvg");
            qt.Utilities.loadJambiLibrary("qt_svg");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

