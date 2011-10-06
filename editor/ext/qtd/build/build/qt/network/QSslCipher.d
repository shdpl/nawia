module qt.network.QSslCipher;

public import qt.network.QSslCipher_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QSsl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslCipher : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QSslCipher_QSslCipher();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSslCipher) other) {
        void* ret = qtd_QSslCipher_QSslCipher_QSslCipher(other is null ? null : (cast(QSslCipher)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name, QSsl.SslProtocol protocol) {
        void* ret = qtd_QSslCipher_QSslCipher_string_SslProtocol(name, protocol);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string authenticationMethod() const {
        string res;
        qtd_QSslCipher_authenticationMethod_const(qtdNativeId, &res);
        return res;
    }

    public final string encryptionMethod() const {
        string res;
        qtd_QSslCipher_encryptionMethod_const(qtdNativeId, &res);
        return res;
    }

    public final bool isNull() const {
        return qtd_QSslCipher_isNull_const(qtdNativeId);
    }

    public final string keyExchangeMethod() const {
        string res;
        qtd_QSslCipher_keyExchangeMethod_const(qtdNativeId, &res);
        return res;
    }

    public final string name() const {
        string res;
        qtd_QSslCipher_name_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QSslCipher) other) const {
        return qtd_QSslCipher_operator_equal_QSslCipher_const(qtdNativeId, other is null ? null : (cast(QSslCipher)other).qtdNativeId);
    }

    public final QSsl.SslProtocol protocol() const {
        return cast(QSsl.SslProtocol) qtd_QSslCipher_protocol_const(qtdNativeId);
    }

    public final string protocolString() const {
        string res;
        qtd_QSslCipher_protocolString_const(qtdNativeId, &res);
        return res;
    }

    public final int supportedBits() const {
        return qtd_QSslCipher_supportedBits_const(qtdNativeId);
    }

    public final int usedBits() const {
        return qtd_QSslCipher_usedBits_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSslCipher;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSslCipher_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSslCipher_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSslCipher_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSslCipher_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSslCipher_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSslCipher_QTypeInfo_isComplex();
        isStatic = qtd_QSslCipher_QTypeInfo_isStatic();
        isLarge = qtd_QSslCipher_QTypeInfo_isLarge();
        isPointer = qtd_QSslCipher_QTypeInfo_isPointer();
        isDummy = qtd_QSslCipher_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSslCipher_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSslCipher_native_copy(const void* orig);
extern (C) void qtd_QSslCipher_delete(void *ptr);
extern (C) void qtd_QSslCipher_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSslCipher_QSslCipher();
private extern(C) void* qtd_QSslCipher_QSslCipher_QSslCipher(void* other0);
private extern(C) void* qtd_QSslCipher_QSslCipher_string_SslProtocol(string name0,
 int protocol1);
private extern(C) void  qtd_QSslCipher_authenticationMethod_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslCipher_encryptionMethod_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSslCipher_isNull_const(void* __this_nativeId);
private extern(C) void  qtd_QSslCipher_keyExchangeMethod_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSslCipher_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSslCipher_operator_equal_QSslCipher_const(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QSslCipher_protocol_const(void* __this_nativeId);
private extern(C) void  qtd_QSslCipher_protocolString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSslCipher_supportedBits_const(void* __this_nativeId);
private extern(C) int  qtd_QSslCipher_usedBits_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSslCipher() {
    QSslCipher.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSslCipher_QTypeInfo_isComplex();
private extern (C) bool qtd_QSslCipher_QTypeInfo_isStatic();
private extern (C) bool qtd_QSslCipher_QTypeInfo_isLarge();
private extern (C) bool qtd_QSslCipher_QTypeInfo_isPointer();
private extern (C) bool qtd_QSslCipher_QTypeInfo_isDummy();
