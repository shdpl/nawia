module qt.network.QAuthenticator;

public import qt.network.QAuthenticator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAuthenticator : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAuthenticator_QAuthenticator();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QAuthenticator) other) {
        void* ret = qtd_QAuthenticator_QAuthenticator_QAuthenticator(other is null ? null : (cast(QAuthenticator)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isNull() const {
        return qtd_QAuthenticator_isNull_const(qtdNativeId);
    }

    private final bool operator_equal(const(QAuthenticator) other) const {
        return qtd_QAuthenticator_operator_equal_QAuthenticator_const(qtdNativeId, other is null ? null : (cast(QAuthenticator)other).qtdNativeId);
    }

    public final QVariant option(string opt) const {
        void* ret = qtd_QAuthenticator_option_string_const(qtdNativeId, opt);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final string password() const {
        string res;
        qtd_QAuthenticator_password_const(qtdNativeId, &res);
        return res;
    }

    public final string realm() const {
        string res;
        qtd_QAuthenticator_realm_const(qtdNativeId, &res);
        return res;
    }

    public final void setOption(string opt, QVariant value) {
        qtd_QAuthenticator_setOption_string_QVariant(qtdNativeId, opt, value is null ? null : value.qtdNativeId);
    }

    public final void setPassword(string password) {
        qtd_QAuthenticator_setPassword_string(qtdNativeId, password);
    }

    public final void setUser(string user) {
        qtd_QAuthenticator_setUser_string(qtdNativeId, user);
    }

    public final string user() const {
        string res;
        qtd_QAuthenticator_user_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QAuthenticator;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QAuthenticator_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QAuthenticator_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAuthenticator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAuthenticator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAuthenticator_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QAuthenticator_QTypeInfo_isComplex();
        isStatic = qtd_QAuthenticator_QTypeInfo_isStatic();
        isLarge = qtd_QAuthenticator_QTypeInfo_isLarge();
        isPointer = qtd_QAuthenticator_QTypeInfo_isPointer();
        isDummy = qtd_QAuthenticator_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QAuthenticator_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QAuthenticator_native_copy(const void* orig);
extern (C) void qtd_QAuthenticator_delete(void *ptr);
extern (C) void qtd_QAuthenticator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAuthenticator_QAuthenticator();
private extern(C) void* qtd_QAuthenticator_QAuthenticator_QAuthenticator(void* other0);
private extern(C) bool  qtd_QAuthenticator_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QAuthenticator_operator_equal_QAuthenticator_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QAuthenticator_option_string_const(void* __this_nativeId,
 string opt0);
private extern(C) void  qtd_QAuthenticator_password_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAuthenticator_realm_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAuthenticator_setOption_string_QVariant(void* __this_nativeId,
 string opt0,
 void* value1);
private extern(C) void  qtd_QAuthenticator_setPassword_string(void* __this_nativeId,
 string password0);
private extern(C) void  qtd_QAuthenticator_setUser_string(void* __this_nativeId,
 string user0);
private extern(C) void  qtd_QAuthenticator_user_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QAuthenticator() {
    QAuthenticator.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QAuthenticator_QTypeInfo_isComplex();
private extern (C) bool qtd_QAuthenticator_QTypeInfo_isStatic();
private extern (C) bool qtd_QAuthenticator_QTypeInfo_isLarge();
private extern (C) bool qtd_QAuthenticator_QTypeInfo_isPointer();
private extern (C) bool qtd_QAuthenticator_QTypeInfo_isDummy();
