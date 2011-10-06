module qt.webkit.QWebHistoryItem;

public import qt.webkit.QWebHistoryItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.core.QDateTime;
public import qt.core.QVariant;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWebHistoryItem : QtdObject
{

// Functions

    public this(const(QWebHistoryItem) other) {
        void* ret = qtd_QWebHistoryItem_QWebHistoryItem_QWebHistoryItem(other is null ? null : (cast(QWebHistoryItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QIcon icon() const {
        void* ret = qtd_QWebHistoryItem_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final bool isValid() const {
        return qtd_QWebHistoryItem_isValid_const(qtdNativeId);
    }

    public final QDateTime lastVisited() const {
        void* ret = qtd_QWebHistoryItem_lastVisited_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QUrl originalUrl() const {
        void* ret = qtd_QWebHistoryItem_originalUrl_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final void setUserData(QVariant userData) {
        qtd_QWebHistoryItem_setUserData_QVariant(qtdNativeId, userData is null ? null : userData.qtdNativeId);
    }

    public final string title() const {
        string res;
        qtd_QWebHistoryItem_title_const(qtdNativeId, &res);
        return res;
    }

    public final QUrl url() const {
        void* ret = qtd_QWebHistoryItem_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final QVariant userData() const {
        void* ret = qtd_QWebHistoryItem_userData_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QWebHistoryItem;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QWebHistoryItem_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QWebHistoryItem_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QWebHistoryItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QWebHistoryItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QWebHistoryItem_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QWebHistoryItem_QTypeInfo_isComplex();
        isStatic = qtd_QWebHistoryItem_QTypeInfo_isStatic();
        isLarge = qtd_QWebHistoryItem_QTypeInfo_isLarge();
        isPointer = qtd_QWebHistoryItem_QTypeInfo_isPointer();
        isDummy = qtd_QWebHistoryItem_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QWebHistoryItem_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QWebHistoryItem_native_copy(const void* orig);
extern (C) void qtd_QWebHistoryItem_delete(void *ptr);
extern (C) void qtd_QWebHistoryItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWebHistoryItem_QWebHistoryItem_QWebHistoryItem(void* other0);
private extern(C) void*  qtd_QWebHistoryItem_icon_const(void* __this_nativeId);
private extern(C) bool  qtd_QWebHistoryItem_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistoryItem_lastVisited_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistoryItem_originalUrl_const(void* __this_nativeId);
private extern(C) void  qtd_QWebHistoryItem_setUserData_QVariant(void* __this_nativeId,
 void* userData0);
private extern(C) void  qtd_QWebHistoryItem_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWebHistoryItem_url_const(void* __this_nativeId);
private extern(C) void*  qtd_QWebHistoryItem_userData_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QWebHistoryItem() {
    QWebHistoryItem.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QWebHistoryItem_QTypeInfo_isComplex();
private extern (C) bool qtd_QWebHistoryItem_QTypeInfo_isStatic();
private extern (C) bool qtd_QWebHistoryItem_QTypeInfo_isLarge();
private extern (C) bool qtd_QWebHistoryItem_QTypeInfo_isPointer();
private extern (C) bool qtd_QWebHistoryItem_QTypeInfo_isDummy();
