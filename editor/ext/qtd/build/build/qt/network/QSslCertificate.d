module qt.network.QSslCertificate;

public import qt.network.QSslCertificate_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QCryptographicHash;
public import qt.core.QRegExp;
public import qt.network.QSsl;
public import qt.network.QSslKey;
public import qt.core.QIODevice;
public import qt.core.QList;
public import qt.core.QDateTime;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSslCertificate : QtdObject
{
    public enum SubjectInfo {
        Organization = 0,
        CommonName = 1,
        LocalityName = 2,
        OrganizationalUnitName = 3,
        CountryName = 4,
        StateOrProvinceName = 5
    }

    alias SubjectInfo.Organization Organization;
    alias SubjectInfo.CommonName CommonName;
    alias SubjectInfo.LocalityName LocalityName;
    alias SubjectInfo.OrganizationalUnitName OrganizationalUnitName;
    alias SubjectInfo.CountryName CountryName;
    alias SubjectInfo.StateOrProvinceName StateOrProvinceName;


// Functions

    public this(QIODevice device, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem) {
        void* ret = qtd_QSslCertificate_QSslCertificate_QIODevice_EncodingFormat(device is null ? null : device.qtdNativeId, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) encoded = new QByteArray(), QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem) {
        void* ret = qtd_QSslCertificate_QSslCertificate_QByteArray_EncodingFormat(encoded is null ? null : (cast(QByteArray)encoded).qtdNativeId, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSslCertificate) other) {
        void* ret = qtd_QSslCertificate_QSslCertificate_QSslCertificate(other is null ? null : (cast(QSslCertificate)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clear() {
        qtd_QSslCertificate_clear(qtdNativeId);
    }

    public final QByteArray digest(QCryptographicHash.Algorithm algorithm = QCryptographicHash.Algorithm.Md5) const {
        void* ret = qtd_QSslCertificate_digest_Algorithm_const(qtdNativeId, algorithm);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QDateTime effectiveDate() const {
        void* ret = qtd_QSslCertificate_effectiveDate_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime expiryDate() const {
        void* ret = qtd_QSslCertificate_expiryDate_const(qtdNativeId);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final long handle() const {
        return qtd_QSslCertificate_handle_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QSslCertificate_isNull_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QSslCertificate_isValid_const(qtdNativeId);
    }

    public final string issuerInfo(QSslCertificate.SubjectInfo info) const {
        string res;
        qtd_QSslCertificate_issuerInfo_SubjectInfo_const(qtdNativeId, &res, info);
        return res;
    }

    public final string issuerInfo(const(QByteArray) tag) const {
        string res;
        qtd_QSslCertificate_issuerInfo_QByteArray_const(qtdNativeId, &res, tag is null ? null : (cast(QByteArray)tag).qtdNativeId);
        return res;
    }

    private final bool operator_equal(const(QSslCertificate) other) const {
        return qtd_QSslCertificate_operator_equal_QSslCertificate_const(qtdNativeId, other is null ? null : (cast(QSslCertificate)other).qtdNativeId);
    }

    public final QSslKey publicKey() const {
        void* ret = qtd_QSslCertificate_publicKey_const(qtdNativeId);
        QSslKey __d_return_value = new QSslKey(ret);
        return __d_return_value;
    }

    public final QByteArray serialNumber() const {
        void* ret = qtd_QSslCertificate_serialNumber_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final string subjectInfo(QSslCertificate.SubjectInfo info) const {
        string res;
        qtd_QSslCertificate_subjectInfo_SubjectInfo_const(qtdNativeId, &res, info);
        return res;
    }

    public final string subjectInfo(const(QByteArray) tag) const {
        string res;
        qtd_QSslCertificate_subjectInfo_QByteArray_const(qtdNativeId, &res, tag is null ? null : (cast(QByteArray)tag).qtdNativeId);
        return res;
    }

    public final QByteArray toDer() const {
        void* ret = qtd_QSslCertificate_toDer_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray toPem() const {
        void* ret = qtd_QSslCertificate_toPem_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray version_() const {
        void* ret = qtd_QSslCertificate_version__const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QList!(QSslCertificate) fromData(const(QByteArray) data, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem) {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslCertificate_fromData_QByteArray_EncodingFormat(&res, data is null ? null : (cast(QByteArray)data).qtdNativeId, format);
        return res;
    }

    public static QList!(QSslCertificate) fromDevice(QIODevice device, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem) {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslCertificate_fromDevice_QIODevice_EncodingFormat(&res, device is null ? null : device.qtdNativeId, format);
        return res;
    }

    public static QList!(QSslCertificate) fromPath(string path, QSsl.EncodingFormat format = QSsl.EncodingFormat.Pem, QRegExp.PatternSyntax syntax = QRegExp.PatternSyntax.FixedString) {
        auto res = QList!(QSslCertificate).opCall();
        qtd_QSslCertificate_fromPath_string_EncodingFormat_PatternSyntax(&res, path, format, syntax);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QSslCertificate;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QSslCertificate_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QSslCertificate_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSslCertificate_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSslCertificate_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSslCertificate_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QSslCertificate_QTypeInfo_isComplex();
        isStatic = qtd_QSslCertificate_QTypeInfo_isStatic();
        isLarge = qtd_QSslCertificate_QTypeInfo_isLarge();
        isPointer = qtd_QSslCertificate_QTypeInfo_isPointer();
        isDummy = qtd_QSslCertificate_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QSslCertificate_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QSslCertificate_native_copy(const void* orig);
extern (C) void qtd_QSslCertificate_delete(void *ptr);
extern (C) void qtd_QSslCertificate_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSslCertificate_QSslCertificate_QIODevice_EncodingFormat(void* device0,
 int format1);
private extern(C) void* qtd_QSslCertificate_QSslCertificate_QByteArray_EncodingFormat(void* encoded0,
 int format1);
private extern(C) void* qtd_QSslCertificate_QSslCertificate_QSslCertificate(void* other0);
private extern(C) void  qtd_QSslCertificate_clear(void* __this_nativeId);
private extern(C) void*  qtd_QSslCertificate_digest_Algorithm_const(void* __this_nativeId,
 int algorithm0);
private extern(C) void*  qtd_QSslCertificate_effectiveDate_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslCertificate_expiryDate_const(void* __this_nativeId);
private extern(C) long  qtd_QSslCertificate_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslCertificate_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QSslCertificate_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QSslCertificate_issuerInfo_SubjectInfo_const(void* __this_nativeId,
 void* __d_return_value,
 int info0);
private extern(C) void  qtd_QSslCertificate_issuerInfo_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* tag0);
private extern(C) bool  qtd_QSslCertificate_operator_equal_QSslCertificate_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QSslCertificate_publicKey_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslCertificate_serialNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QSslCertificate_subjectInfo_SubjectInfo_const(void* __this_nativeId,
 void* __d_return_value,
 int info0);
private extern(C) void  qtd_QSslCertificate_subjectInfo_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* tag0);
private extern(C) void*  qtd_QSslCertificate_toDer_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslCertificate_toPem_const(void* __this_nativeId);
private extern(C) void*  qtd_QSslCertificate_version__const(void* __this_nativeId);
private extern(C) void  qtd_QSslCertificate_fromData_QByteArray_EncodingFormat(void* __d_return_value,
 void* data0,
 int format1);
private extern(C) void  qtd_QSslCertificate_fromDevice_QIODevice_EncodingFormat(void* __d_return_value,
 void* device0,
 int format1);
private extern(C) void  qtd_QSslCertificate_fromPath_string_EncodingFormat_PatternSyntax(void* __d_return_value,
 string path0,
 int format1,
 int syntax2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSslCertificate() {
    QSslCertificate.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QSslCertificate_QTypeInfo_isComplex();
private extern (C) bool qtd_QSslCertificate_QTypeInfo_isStatic();
private extern (C) bool qtd_QSslCertificate_QTypeInfo_isLarge();
private extern (C) bool qtd_QSslCertificate_QTypeInfo_isPointer();
private extern (C) bool qtd_QSslCertificate_QTypeInfo_isDummy();
