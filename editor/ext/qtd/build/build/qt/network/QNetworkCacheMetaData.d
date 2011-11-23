module qt.network.QNetworkCacheMetaData;

public import qt.network.QNetworkCacheMetaData_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDateTime;
public import qt.core.QDataStream;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkCacheMetaData : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QNetworkCacheMetaData_QNetworkCacheMetaData();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkCacheMetaData) other) {
        void* ret = qtd_QNetworkCacheMetaData_QNetworkCacheMetaData_QNetworkCacheMetaData(other is null ? null : (cast(QNetworkCacheMetaData)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDateTime expirationDate() const {
        void* ret = qtd_QNetworkCacheMetaData_expirationDate_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final bool isValid() const {
        return qtd_QNetworkCacheMetaData_isValid_const(qtdNativeId);
    }

    public final QDateTime lastModified() const {
        void* ret = qtd_QNetworkCacheMetaData_lastModified_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QNetworkCacheMetaData_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QNetworkCacheMetaData) other) const {
        return qtd_QNetworkCacheMetaData_operator_equal_QNetworkCacheMetaData_const(qtdNativeId, other is null ? null : (cast(QNetworkCacheMetaData)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QNetworkCacheMetaData_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool saveToDisk() const {
        return qtd_QNetworkCacheMetaData_saveToDisk_const(qtdNativeId);
    }

    public final void setExpirationDate(const(QDateTime) dateTime) {
        qtd_QNetworkCacheMetaData_setExpirationDate_QDateTime(qtdNativeId, dateTime is null ? null : (cast(QDateTime)dateTime).qtdNativeId);
    }

    public final void setLastModified(const(QDateTime) dateTime) {
        qtd_QNetworkCacheMetaData_setLastModified_QDateTime(qtdNativeId, dateTime is null ? null : (cast(QDateTime)dateTime).qtdNativeId);
    }

    public final void setSaveToDisk(bool allow) {
        qtd_QNetworkCacheMetaData_setSaveToDisk_bool(qtdNativeId, allow);
    }

    public final void setUrl(const(QUrl) url) {
        qtd_QNetworkCacheMetaData_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QUrl url() const {
        void* ret = qtd_QNetworkCacheMetaData_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkCacheMetaData;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkCacheMetaData_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkCacheMetaData_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkCacheMetaData_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkCacheMetaData_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkCacheMetaData_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkCacheMetaData_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkCacheMetaData_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkCacheMetaData_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkCacheMetaData_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkCacheMetaData_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkCacheMetaData_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkCacheMetaData_native_copy(const void* orig);
extern (C) void qtd_QNetworkCacheMetaData_delete(void *ptr);
extern (C) void qtd_QNetworkCacheMetaData_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkCacheMetaData_QNetworkCacheMetaData();
private extern(C) void* qtd_QNetworkCacheMetaData_QNetworkCacheMetaData_QNetworkCacheMetaData(void* other0);
private extern(C) void*  qtd_QNetworkCacheMetaData_expirationDate_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkCacheMetaData_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkCacheMetaData_lastModified_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkCacheMetaData_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QNetworkCacheMetaData_operator_equal_QNetworkCacheMetaData_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QNetworkCacheMetaData_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QNetworkCacheMetaData_saveToDisk_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkCacheMetaData_setExpirationDate_QDateTime(void* __this_nativeId,
 void* dateTime0);
private extern(C) void  qtd_QNetworkCacheMetaData_setLastModified_QDateTime(void* __this_nativeId,
 void* dateTime0);
private extern(C) void  qtd_QNetworkCacheMetaData_setSaveToDisk_bool(void* __this_nativeId,
 bool allow0);
private extern(C) void  qtd_QNetworkCacheMetaData_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QNetworkCacheMetaData_url_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkCacheMetaData() {
    QNetworkCacheMetaData.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkCacheMetaData_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkCacheMetaData_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkCacheMetaData_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkCacheMetaData_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkCacheMetaData_QTypeInfo_isDummy();
