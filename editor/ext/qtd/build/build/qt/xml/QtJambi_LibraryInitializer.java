package qt.xml;

class QtJambi_LibraryInitializer
{
    static {

        com.trolltech.qt.Utilities.loadQtLibrary("QtXml");
            qt.Utilities.loadJambiLibrary("qt_xml");
        __qt_initLibrary();
    }
    private native static void __qt_initLibrary();
    static void init() { };
}

