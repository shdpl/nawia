module qt.network.QSslKey;

public import qt.network.QSslKey_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QSsl;
public import qt.core.QIODevice;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslKey : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QSslKey_QSslKey();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice device, QSsl.KeyAlgorithm algorithm, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, QSsl.KeyType type = QSsl.KeyType.PrivateKey, const(QByteArray) passPhrase = new QByteArray()) {
        void* ret = qtd_QSslKey_QSslKey_QIODevice_KeyAlgorithm_EncodingFormat_KeyType_QByteArray(device is null ? null : device.qtdNativeId, algorithm, format, type, passPhrase is null ? null : (cast(QByteArray)passPhrase).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) encoded, QSsl.KeyAlgorithm algorithm, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, QSsl.KeyType type = QSsl.KeyType.PrivateKey, const(QByteArray) passPhrase = new QByteArray()) {
        void* ret = qtd_QSslKey_QSslKey_QByteArray_KeyAlgorithm_EncodingFormat_KeyType_QByteArray(encoded is null ? null : (cast(QByteArray)encoded).qtdNativeId, algorithm, format, type, passPhrase is null ? null : (cast(QByteArray)passPhrase).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSslKey) other) {
        void* ret = qtd_QSslKey_QSslKey_QSslKey(other is null ? null : (cast(QSslKey)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QSsl.KeyAlgorithm algorithm() const {
        return cast(QSsl.KeyAlgorithm) qtd_QSslKey_algorithm_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QSslKey_clear(qtdNativeId);
    }

    public final long handle() const {
        return qtd_QSslKey_handle_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QSslKey_isNull_const(qtdNativeId);
    }

    public final int length() const {
        return qtd_QSslKey_length_const(qtdNativeId);
    }

    private final bool operator_equal(const(QSslKey) key) const {
        return qtd_QSslKey_operator_equal_QSslKey_const(qtdNativeId, key is null ? null : (cast(QSslKey)key).qtdNativeId);
    }

    public final QByteArray toDer(const(QByteArray) passPhrase = new QByteArray()) const {
        void* ret = qtd_QSslKey_toDer_QByteArray_const(qtdNativeId, passPhrase is null ? null : (cast(QByteArray)passPhrase).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray toPem(const(QByteArray) passPhrase = new QByteArray()) const {
        void* ret = qtd_QSslKey_toPem_QByteArray_const(qtdNativeId, passPhrase is null ? null : (cast(QByteArray)passPhrase).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QSsl.KeyType type() const {
        return cast(QSsl.KeyType) qtd_QSslKey_type_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSslKey;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSslKey_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSslKey_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSslKey_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSslKey_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSslKey_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSslKey_QTypeInfo_isComplex();
        isStatic = qtd_QSslKey_QTypeInfo_isStatic();
        isLarge = qtd_QSslKey_QTypeInfo_isLarge();
        isPointer = qtd_QSslKey_QTypeInfo_isPointer();
        isDummy = qtd_QSslKey_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSslKey_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSslKey_native_copy(const void* orig);
extern (C) void qtd_QSslKey_delete(void *ptr);
extern (C) void qtd_QSslKey_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSslKey_QSslKey();
private extern(C) void* qtd_QSslKey_QSslKey_QIODevice_KeyAlgorithm_EncodingFormat_KeyType_QByteArray(void* device0,
 int algorithm1,
 int format2,
 int type3,
 void* passPhrase4);
private extern(C) void* qtd_QSslKey_QSslKey_QByteArray_KeyAlgorithm_EncodingFormat_KeyType_QByteArray(void* encoded0,
 int algorithm1,
 int format2,
 int type3,
 void* passPhrase4);
private extern(C) void* qtd_QSslKey_QSslKey_QSslKey(void* other0);
private extern(C) int  qtd_QSslKey_algorithm_const(void* __this_nativeId);
private extern(C) void  qtd_QSslKey_clear(void* __this_nativeId);
private extern(C) long  qtd_QSslKey_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslKey_isNull_const(void* __this_nativeId);
private extern(C) int  qtd_QSslKey_length_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslKey_operator_equal_QSslKey_const(void* __this_nativeId,
 void* key0);
private extern(C) void*  qtd_QSslKey_toDer_QByteArray_const(void* __this_nativeId,
 void* passPhrase0);
private extern(C) void*  qtd_QSslKey_toPem_QByteArray_const(void* __this_nativeId,
 void* passPhrase0);
private extern(C) int  qtd_QSslKey_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSslKey() {
    QSslKey.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSslKey_QTypeInfo_isComplex();
private extern (C) bool qtd_QSslKey_QTypeInfo_isStatic();
private extern (C) bool qtd_QSslKey_QTypeInfo_isLarge();
private extern (C) bool qtd_QSslKey_QTypeInfo_isPointer();
private extern (C) bool qtd_QSslKey_QTypeInfo_isDummy();
