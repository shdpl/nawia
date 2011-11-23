module qt.network.QHostInfo;

public import qt.network.QHostInfo_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QObject;
public import qt.network.QHostAddress;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHostInfo : QtdObject
{
    public enum HostInfoError {
        NoError = 0,
        HostNotFound = 1,
        UnknownError = 2
    }

    alias HostInfoError.NoError NoError;
    alias HostInfoError.HostNotFound HostNotFound;
    alias HostInfoError.UnknownError UnknownError;


// Functions

    public this(const(QHostInfo) d) {
        void* ret = qtd_QHostInfo_QHostInfo_QHostInfo(d is null ? null : (cast(QHostInfo)d).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int lookupId = -1) {
        void* ret = qtd_QHostInfo_QHostInfo_int(lookupId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QHostAddress) addresses() const {
        auto res = QList!(QHostAddress).opCall();
        qtd_QHostInfo_addresses_const(qtdNativeId, &res);
        return res;
    }

    public final QHostInfo.HostInfoError error() const {
        return cast(QHostInfo.HostInfoError) qtd_QHostInfo_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QHostInfo_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string hostName() const {
        string res;
        qtd_QHostInfo_hostName_const(qtdNativeId, &res);
        return res;
    }

    public final int lookupId() const {
        return qtd_QHostInfo_lookupId_const(qtdNativeId);
    }

    public final void setAddresses(QList!(QHostAddress) addresses) {
        qtd_QHostInfo_setAddresses_QList(qtdNativeId, &addresses);
    }

    public final void setError(QHostInfo.HostInfoError error) {
        qtd_QHostInfo_setError_HostInfoError(qtdNativeId, error);
    }

    public final void setErrorString(string errorString) {
        qtd_QHostInfo_setErrorString_string(qtdNativeId, errorString);
    }

    public final void setHostName(string name) {
        qtd_QHostInfo_setHostName_string(qtdNativeId, name);
    }

    public final void setLookupId(int id) {
        qtd_QHostInfo_setLookupId_int(qtdNativeId, id);
    }

    public static void abortHostLookup(int lookupId) {
        qtd_QHostInfo_abortHostLookup_int(lookupId);
    }

    public static QHostInfo fromName(string name) {
        void* ret = qtd_QHostInfo_fromName_string(name);
        QHostInfo __d_return_value = new QHostInfo(ret);
        return __d_return_value;
    }

    public static string localDomainName() {
        string res;
        qtd_QHostInfo_localDomainName(&res);
        return res;
    }

    public static string localHostName() {
        string res;
        qtd_QHostInfo_localHostName(&res);
        return res;
    }

    public static int lookupHost(string name, QObject receiver, const(char*) member) {
        return qtd_QHostInfo_lookupHost_string_QObject_nativepointerchar(name, receiver is null ? null : receiver.qtdNativeId, member);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QHostInfo;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QHostInfo_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QHostInfo_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QHostInfo_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QHostInfo_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QHostInfo_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QHostInfo_QTypeInfo_isComplex();
        isStatic = qtd_QHostInfo_QTypeInfo_isStatic();
        isLarge = qtd_QHostInfo_QTypeInfo_isLarge();
        isPointer = qtd_QHostInfo_QTypeInfo_isPointer();
        isDummy = qtd_QHostInfo_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QHostInfo_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QHostInfo_native_copy(const void* orig);
extern (C) void qtd_QHostInfo_delete(void *ptr);
extern (C) void qtd_QHostInfo_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHostInfo_QHostInfo_QHostInfo(void* d0);
private extern(C) void* qtd_QHostInfo_QHostInfo_int(int lookupId0);
private extern(C) void  qtd_QHostInfo_addresses_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QHostInfo_error_const(void* __this_nativeId);
private extern(C) void  qtd_QHostInfo_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QHostInfo_hostName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QHostInfo_lookupId_const(void* __this_nativeId);
private extern(C) void  qtd_QHostInfo_setAddresses_QList(void* __this_nativeId,
 void* addresses0);
private extern(C) void  qtd_QHostInfo_setError_HostInfoError(void* __this_nativeId,
 int error0);
private extern(C) void  qtd_QHostInfo_setErrorString_string(void* __this_nativeId,
 string errorString0);
private extern(C) void  qtd_QHostInfo_setHostName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QHostInfo_setLookupId_int(void* __this_nativeId,
 int id0);
private extern(C) void  qtd_QHostInfo_abortHostLookup_int(int lookupId0);
private extern(C) void*  qtd_QHostInfo_fromName_string(string name0);
private extern(C) void  qtd_QHostInfo_localDomainName(void* __d_return_value);
private extern(C) void  qtd_QHostInfo_localHostName(void* __d_return_value);
private extern(C) int  qtd_QHostInfo_lookupHost_string_QObject_nativepointerchar(string name0,
 void* receiver1,
 const (char*) member2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QHostInfo() {
    QHostInfo.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QHostInfo_QTypeInfo_isComplex();
private extern (C) bool qtd_QHostInfo_QTypeInfo_isStatic();
private extern (C) bool qtd_QHostInfo_QTypeInfo_isLarge();
private extern (C) bool qtd_QHostInfo_QTypeInfo_isPointer();
private extern (C) bool qtd_QHostInfo_QTypeInfo_isDummy();
