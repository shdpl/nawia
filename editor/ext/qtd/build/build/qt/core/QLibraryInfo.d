module qt.core.QLibraryInfo;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QLibraryInfo : QtdObject
{
    public enum LibraryLocation {
        PrefixPath = 0,
        DocumentationPath = 1,
        HeadersPath = 2,
        LibrariesPath = 3,
        BinariesPath = 4,
        PluginsPath = 5,
        DataPath = 6,
        TranslationsPath = 7,
        SettingsPath = 8,
        DemosPath = 9,
        ExamplesPath = 10,
        ImportsPath = 11
    }

    alias LibraryLocation.PrefixPath PrefixPath;
    alias LibraryLocation.DocumentationPath DocumentationPath;
    alias LibraryLocation.HeadersPath HeadersPath;
    alias LibraryLocation.LibrariesPath LibrariesPath;
    alias LibraryLocation.BinariesPath BinariesPath;
    alias LibraryLocation.PluginsPath PluginsPath;
    alias LibraryLocation.DataPath DataPath;
    alias LibraryLocation.TranslationsPath TranslationsPath;
    alias LibraryLocation.SettingsPath SettingsPath;
    alias LibraryLocation.DemosPath DemosPath;
    alias LibraryLocation.ExamplesPath ExamplesPath;
    alias LibraryLocation.ImportsPath ImportsPath;


// Functions

    public static QDate buildDate() {
        void* ret = qtd_QLibraryInfo_buildDate();
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public static string buildKey() {
        string res;
        qtd_QLibraryInfo_buildKey(&res);
        return res;
    }

    public static string licensedProducts() {
        string res;
        qtd_QLibraryInfo_licensedProducts(&res);
        return res;
    }

    public static string licensee() {
        string res;
        qtd_QLibraryInfo_licensee(&res);
        return res;
    }

    public static string location(QLibraryInfo.LibraryLocation arg__1) {
        string res;
        qtd_QLibraryInfo_location_LibraryLocation(&res, arg__1);
        return res;
    }
// Field accessors
    static QLibraryInfo __getObject(void* nativeId) {
        return qtd_QLibraryInfo_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QLibraryInfo;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QLibraryInfo qtd_QLibraryInfo_from_ptr(void* ret) {
    auto return_value = new QLibraryInfo(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void*  qtd_QLibraryInfo_buildDate();
private extern(C) void  qtd_QLibraryInfo_buildKey(void* __d_return_value);
private extern(C) void  qtd_QLibraryInfo_licensedProducts(void* __d_return_value);
private extern(C) void  qtd_QLibraryInfo_licensee(void* __d_return_value);
private extern(C) void  qtd_QLibraryInfo_location_LibraryLocation(void* __d_return_value,
 int arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

