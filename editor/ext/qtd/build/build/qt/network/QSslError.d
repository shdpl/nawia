module qt.network.QSslError;

public import qt.network.QSslError_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QSslCertificate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslError : QtdObject
{
    public enum SslError {
        NoError = 0,
        UnableToGetIssuerCertificate = 1,
        UnableToDecryptCertificateSignature = 2,
        UnableToDecodeIssuerPublicKey = 3,
        CertificateSignatureFailed = 4,
        CertificateNotYetValid = 5,
        CertificateExpired = 6,
        InvalidNotBeforeField = 7,
        InvalidNotAfterField = 8,
        SelfSignedCertificate = 9,
        SelfSignedCertificateInChain = 10,
        UnableToGetLocalIssuerCertificate = 11,
        UnableToVerifyFirstCertificate = 12,
        CertificateRevoked = 13,
        InvalidCaCertificate = 14,
        PathLengthExceeded = 15,
        InvalidPurpose = 16,
        CertificateUntrusted = 17,
        CertificateRejected = 18,
        SubjectIssuerMismatch = 19,
        AuthorityIssuerSerialNumberMismatch = 20,
        NoPeerCertificate = 21,
        HostNameMismatch = 22,
        NoSslSupport = 23,
        UnspecifiedError = -1
    }

    alias SslError.NoError NoError;
    alias SslError.UnableToGetIssuerCertificate UnableToGetIssuerCertificate;
    alias SslError.UnableToDecryptCertificateSignature UnableToDecryptCertificateSignature;
    alias SslError.UnableToDecodeIssuerPublicKey UnableToDecodeIssuerPublicKey;
    alias SslError.CertificateSignatureFailed CertificateSignatureFailed;
    alias SslError.CertificateNotYetValid CertificateNotYetValid;
    alias SslError.CertificateExpired CertificateExpired;
    alias SslError.InvalidNotBeforeField InvalidNotBeforeField;
    alias SslError.InvalidNotAfterField InvalidNotAfterField;
    alias SslError.SelfSignedCertificate SelfSignedCertificate;
    alias SslError.SelfSignedCertificateInChain SelfSignedCertificateInChain;
    alias SslError.UnableToGetLocalIssuerCertificate UnableToGetLocalIssuerCertificate;
    alias SslError.UnableToVerifyFirstCertificate UnableToVerifyFirstCertificate;
    alias SslError.CertificateRevoked CertificateRevoked;
    alias SslError.InvalidCaCertificate InvalidCaCertificate;
    alias SslError.PathLengthExceeded PathLengthExceeded;
    alias SslError.InvalidPurpose InvalidPurpose;
    alias SslError.CertificateUntrusted CertificateUntrusted;
    alias SslError.CertificateRejected CertificateRejected;
    alias SslError.SubjectIssuerMismatch SubjectIssuerMismatch;
    alias SslError.AuthorityIssuerSerialNumberMismatch AuthorityIssuerSerialNumberMismatch;
    alias SslError.NoPeerCertificate NoPeerCertificate;
    alias SslError.HostNameMismatch HostNameMismatch;
    alias SslError.NoSslSupport NoSslSupport;
    alias SslError.UnspecifiedError UnspecifiedError;


// Functions

    public this() {
        void* ret = qtd_QSslError_QSslError();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSslError.SslError error) {
        void* ret = qtd_QSslError_QSslError_SslError(error);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSslError.SslError error, const(QSslCertificate) certificate) {
        void* ret = qtd_QSslError_QSslError_SslError_QSslCertificate(error, certificate is null ? null : (cast(QSslCertificate)certificate).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSslError) other) {
        void* ret = qtd_QSslError_QSslError_QSslError(other is null ? null : (cast(QSslError)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QSslCertificate certificate() const {
        void* ret = qtd_QSslError_certificate_const(qtdNativeId);
        QSslCertificate __d_return_value = new QSslCertificate(ret);
        return __d_return_value;
    }

    public final QSslError.SslError error() const {
        return cast(QSslError.SslError) qtd_QSslError_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QSslError_errorString_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QSslError) other) const {
        return qtd_QSslError_operator_equal_QSslError_const(qtdNativeId, other is null ? null : (cast(QSslError)other).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSslError;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSslError_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSslError_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSslError_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSslError_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSslError_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSslError_QTypeInfo_isComplex();
        isStatic = qtd_QSslError_QTypeInfo_isStatic();
        isLarge = qtd_QSslError_QTypeInfo_isLarge();
        isPointer = qtd_QSslError_QTypeInfo_isPointer();
        isDummy = qtd_QSslError_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSslError_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSslError_native_copy(const void* orig);
extern (C) void qtd_QSslError_delete(void *ptr);
extern (C) void qtd_QSslError_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSslError_QSslError();
private extern(C) void* qtd_QSslError_QSslError_SslError(int error0);
private extern(C) void* qtd_QSslError_QSslError_SslError_QSslCertificate(int error0,
 void* certificate1);
private extern(C) void* qtd_QSslError_QSslError_QSslError(void* other0);
private extern(C) void*  qtd_QSslError_certificate_const(void* __this_nativeId);
private extern(C) int  qtd_QSslError_error_const(void* __this_nativeId);
private extern(C) void  qtd_QSslError_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSslError_operator_equal_QSslError_const(void* __this_nativeId,
 void* other0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSslError() {
    QSslError.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSslError_QTypeInfo_isComplex();
private extern (C) bool qtd_QSslError_QTypeInfo_isStatic();
private extern (C) bool qtd_QSslError_QTypeInfo_isLarge();
private extern (C) bool qtd_QSslError_QTypeInfo_isPointer();
private extern (C) bool qtd_QSslError_QTypeInfo_isDummy();
