module qt.gui.QDesktopServices;

public import qt.gui.QDesktopServices_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDesktopServices : QtdObject
{
    public enum StandardLocation {
        DesktopLocation = 0,
        DocumentsLocation = 1,
        FontsLocation = 2,
        ApplicationsLocation = 3,
        MusicLocation = 4,
        MoviesLocation = 5,
        PicturesLocation = 6,
        TempLocation = 7,
        HomeLocation = 8,
        DataLocation = 9,
        CacheLocation = 10
    }

    alias StandardLocation.DesktopLocation DesktopLocation;
    alias StandardLocation.DocumentsLocation DocumentsLocation;
    alias StandardLocation.FontsLocation FontsLocation;
    alias StandardLocation.ApplicationsLocation ApplicationsLocation;
    alias StandardLocation.MusicLocation MusicLocation;
    alias StandardLocation.MoviesLocation MoviesLocation;
    alias StandardLocation.PicturesLocation PicturesLocation;
    alias StandardLocation.TempLocation TempLocation;
    alias StandardLocation.HomeLocation HomeLocation;
    alias StandardLocation.DataLocation DataLocation;
    alias StandardLocation.CacheLocation CacheLocation;


// Functions

    public this() {
        void* ret = qtd_QDesktopServices_QDesktopServices(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static string displayName(QDesktopServices.StandardLocation type) {
        string res;
        qtd_QDesktopServices_displayName_StandardLocation(&res, type);
        return res;
    }

    public static bool openUrl(const(QUrl) url) {
        return qtd_QDesktopServices_openUrl_QUrl(url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    private static void setUrlHandler(string scheme, QObject receiver, const(char*) method) {
        qtd_QDesktopServices_setUrlHandler_string_QObject_nativepointerchar(scheme, receiver is null ? null : receiver.qtdNativeId, method);
    }

    public static string storageLocation(QDesktopServices.StandardLocation type) {
        string res;
        qtd_QDesktopServices_storageLocation_StandardLocation(&res, type);
        return res;
    }

    public static void unsetUrlHandler(string scheme) {
        qtd_QDesktopServices_unsetUrlHandler_string(scheme);
    }
// Field accessors
    static QDesktopServices __getObject(void* nativeId) {
        return qtd_QDesktopServices_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QDesktopServices;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDesktopServices_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDesktopServices_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDesktopServices_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    private static UrlHandler[string] __rcUrlHandlers;
    public static void setUrlHandler(string scheme, void delegate(QUrl) dg) {
    UrlHandler receiver = dg !is null ? new UrlHandler(dg) : null;

    if (receiver is null)
    __rcUrlHandlers.remove(scheme);
    else
    __rcUrlHandlers[scheme] = receiver;

    setUrlHandler(scheme, receiver, "handleUrl");
    }*/

}
QDesktopServices qtd_QDesktopServices_from_ptr(void* ret) {
    auto return_value = new QDesktopServices(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QDesktopServices_delete(void *ptr);
extern (C) void qtd_QDesktopServices_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDesktopServices_QDesktopServices(void *d_ptr);
private extern(C) void  qtd_QDesktopServices_displayName_StandardLocation(void* __d_return_value,
 int type0);
private extern(C) bool  qtd_QDesktopServices_openUrl_QUrl(void* url0);
private extern(C) void  qtd_QDesktopServices_setUrlHandler_string_QObject_nativepointerchar(string scheme0,
 void* receiver1,
 const (char*) method2);
private extern(C) void  qtd_QDesktopServices_storageLocation_StandardLocation(void* __d_return_value,
 int type0);
private extern(C) void  qtd_QDesktopServices_unsetUrlHandler_string(string scheme0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDesktopServices_initCallBacks(void* virtuals);

extern(C) void static_init_QDesktopServices() {
    qtd_QDesktopServices_initCallBacks(null);
}

// signal handlers

