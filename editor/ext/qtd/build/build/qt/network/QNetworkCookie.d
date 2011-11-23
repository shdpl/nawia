module qt.network.QNetworkCookie;

public import qt.network.QNetworkCookie_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QDateTime;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkCookie : QtdObject
{
    public enum RawForm {
        NameAndValueOnly = 0,
        Full = 1
    }

    alias RawForm.NameAndValueOnly NameAndValueOnly;
    alias RawForm.Full Full;


// Functions

    public this(const(QByteArray) name = new QByteArray(), const(QByteArray) value = new QByteArray()) {
        void* ret = qtd_QNetworkCookie_QNetworkCookie_QByteArray_QByteArray(name is null ? null : (cast(QByteArray)name).qtdNativeId, value is null ? null : (cast(QByteArray)value).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkCookie) other) {
        void* ret = qtd_QNetworkCookie_QNetworkCookie_QNetworkCookie(other is null ? null : (cast(QNetworkCookie)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string domain() const {
        string res;
        qtd_QNetworkCookie_domain_const(qtdNativeId, &res);
        return res;
    }

    public final QDateTime expirationDate() const {
        void* ret = qtd_QNetworkCookie_expirationDate_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final bool isHttpOnly() const {
        return qtd_QNetworkCookie_isHttpOnly_const(qtdNativeId);
    }

    public final bool isSecure() const {
        return qtd_QNetworkCookie_isSecure_const(qtdNativeId);
    }

    public final bool isSessionCookie() const {
        return qtd_QNetworkCookie_isSessionCookie_const(qtdNativeId);
    }

    public final QByteArray name() const {
        void* ret = qtd_QNetworkCookie_name_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QNetworkCookie) other) const {
        return qtd_QNetworkCookie_operator_equal_QNetworkCookie_const(qtdNativeId, other is null ? null : (cast(QNetworkCookie)other).qtdNativeId);
    }

    public final string path() const {
        string res;
        qtd_QNetworkCookie_path_const(qtdNativeId, &res);
        return res;
    }

    public final void setDomain(string domain) {
        qtd_QNetworkCookie_setDomain_string(qtdNativeId, domain);
    }

    public final void setExpirationDate(const(QDateTime) date) {
        qtd_QNetworkCookie_setExpirationDate_QDateTime(qtdNativeId, date is null ? null : (cast(QDateTime)date).qtdNativeId);
    }

    public final void setHttpOnly(bool enable) {
        qtd_QNetworkCookie_setHttpOnly_bool(qtdNativeId, enable);
    }

    public final void setName(const(QByteArray) cookieName) {
        qtd_QNetworkCookie_setName_QByteArray(qtdNativeId, cookieName is null ? null : (cast(QByteArray)cookieName).qtdNativeId);
    }

    public final void setPath(string path) {
        qtd_QNetworkCookie_setPath_string(qtdNativeId, path);
    }

    public final void setSecure(bool enable) {
        qtd_QNetworkCookie_setSecure_bool(qtdNativeId, enable);
    }

    public final void setValue(const(QByteArray) value) {
        qtd_QNetworkCookie_setValue_QByteArray(qtdNativeId, value is null ? null : (cast(QByteArray)value).qtdNativeId);
    }

    public final QByteArray toRawForm(QNetworkCookie.RawForm form = QNetworkCookie.RawForm.Full) const {
        void* ret = qtd_QNetworkCookie_toRawForm_RawForm_const(qtdNativeId, form);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray value() const {
        void* ret = qtd_QNetworkCookie_value_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QList!(QNetworkCookie) parseCookies(const(QByteArray) cookieString) {
        auto res = QList!(QNetworkCookie).opCall();
        qtd_QNetworkCookie_parseCookies_QByteArray(&res, cookieString is null ? null : (cast(QByteArray)cookieString).qtdNativeId);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkCookie;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkCookie_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkCookie_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkCookie_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkCookie_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkCookie_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkCookie_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkCookie_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkCookie_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkCookie_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkCookie_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkCookie_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkCookie_native_copy(const void* orig);
extern (C) void qtd_QNetworkCookie_delete(void *ptr);
extern (C) void qtd_QNetworkCookie_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkCookie_QNetworkCookie_QByteArray_QByteArray(void* name0,
 void* value1);
private extern(C) void* qtd_QNetworkCookie_QNetworkCookie_QNetworkCookie(void* other0);
private extern(C) void  qtd_QNetworkCookie_domain_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QNetworkCookie_expirationDate_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkCookie_isHttpOnly_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkCookie_isSecure_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkCookie_isSessionCookie_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkCookie_name_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkCookie_operator_equal_QNetworkCookie_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QNetworkCookie_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QNetworkCookie_setDomain_string(void* __this_nativeId,
 string domain0);
private extern(C) void  qtd_QNetworkCookie_setExpirationDate_QDateTime(void* __this_nativeId,
 void* date0);
private extern(C) void  qtd_QNetworkCookie_setHttpOnly_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QNetworkCookie_setName_QByteArray(void* __this_nativeId,
 void* cookieName0);
private extern(C) void  qtd_QNetworkCookie_setPath_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QNetworkCookie_setSecure_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QNetworkCookie_setValue_QByteArray(void* __this_nativeId,
 void* value0);
private extern(C) void*  qtd_QNetworkCookie_toRawForm_RawForm_const(void* __this_nativeId,
 int form0);
private extern(C) void*  qtd_QNetworkCookie_value_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkCookie_parseCookies_QByteArray(void* __d_return_value,
 void* cookieString0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkCookie() {
    QNetworkCookie.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkCookie_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkCookie_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkCookie_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkCookie_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkCookie_QTypeInfo_isDummy();
