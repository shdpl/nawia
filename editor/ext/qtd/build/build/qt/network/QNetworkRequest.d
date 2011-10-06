module qt.network.QNetworkRequest;

public import qt.network.QNetworkRequest_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.network.QSslConfiguration;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QByteArray;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkRequest : QtdObject
{
    public enum CacheLoadControl {
        AlwaysNetwork = 0,
        PreferNetwork = 1,
        PreferCache = 2,
        AlwaysCache = 3
    }

    alias CacheLoadControl.AlwaysNetwork AlwaysNetwork;
    alias CacheLoadControl.PreferNetwork PreferNetwork;
    alias CacheLoadControl.PreferCache PreferCache;
    alias CacheLoadControl.AlwaysCache AlwaysCache;

    public enum KnownHeaders {
        ContentTypeHeader = 0,
        ContentLengthHeader = 1,
        LocationHeader = 2,
        LastModifiedHeader = 3,
        CookieHeader = 4,
        SetCookieHeader = 5
    }

    alias KnownHeaders.ContentTypeHeader ContentTypeHeader;
    alias KnownHeaders.ContentLengthHeader ContentLengthHeader;
    alias KnownHeaders.LocationHeader LocationHeader;
    alias KnownHeaders.LastModifiedHeader LastModifiedHeader;
    alias KnownHeaders.CookieHeader CookieHeader;
    alias KnownHeaders.SetCookieHeader SetCookieHeader;

    public enum Attribute {
        HttpStatusCodeAttribute = 0,
        HttpReasonPhraseAttribute = 1,
        RedirectionTargetAttribute = 2,
        ConnectionEncryptedAttribute = 3,
        CacheLoadControlAttribute = 4,
        CacheSaveControlAttribute = 5,
        SourceIsFromCacheAttribute = 6,
        DoNotBufferUploadDataAttribute = 7,
        HttpPipeliningAllowedAttribute = 8,
        HttpPipeliningWasUsedAttribute = 9,
        CustomVerbAttribute = 10,
        CookieLoadControlAttribute = 11,
        AuthenticationReuseAttribute = 12,
        CookieSaveControlAttribute = 13,
        MaximumDownloadBufferSizeAttribute = 14,
        DownloadBufferAttribute = 15,
        User = 1000,
        UserMax = 32767
    }

    alias Attribute.HttpStatusCodeAttribute HttpStatusCodeAttribute;
    alias Attribute.HttpReasonPhraseAttribute HttpReasonPhraseAttribute;
    alias Attribute.RedirectionTargetAttribute RedirectionTargetAttribute;
    alias Attribute.ConnectionEncryptedAttribute ConnectionEncryptedAttribute;
    alias Attribute.CacheLoadControlAttribute CacheLoadControlAttribute;
    alias Attribute.CacheSaveControlAttribute CacheSaveControlAttribute;
    alias Attribute.SourceIsFromCacheAttribute SourceIsFromCacheAttribute;
    alias Attribute.DoNotBufferUploadDataAttribute DoNotBufferUploadDataAttribute;
    alias Attribute.HttpPipeliningAllowedAttribute HttpPipeliningAllowedAttribute;
    alias Attribute.HttpPipeliningWasUsedAttribute HttpPipeliningWasUsedAttribute;
    alias Attribute.CustomVerbAttribute CustomVerbAttribute;
    alias Attribute.CookieLoadControlAttribute CookieLoadControlAttribute;
    alias Attribute.AuthenticationReuseAttribute AuthenticationReuseAttribute;
    alias Attribute.CookieSaveControlAttribute CookieSaveControlAttribute;
    alias Attribute.MaximumDownloadBufferSizeAttribute MaximumDownloadBufferSizeAttribute;
    alias Attribute.DownloadBufferAttribute DownloadBufferAttribute;
    alias Attribute.User User;
    alias Attribute.UserMax UserMax;


// Functions

    public this(const(QNetworkRequest) other) {
        void* ret = qtd_QNetworkRequest_QNetworkRequest_QNetworkRequest(other is null ? null : (cast(QNetworkRequest)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrl) url = new QUrl()) {
        void* ret = qtd_QNetworkRequest_QNetworkRequest_QUrl(url is null ? null : (cast(QUrl)url).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QVariant attribute(QNetworkRequest.Attribute code, QVariant defaultValue = null) const {
        void* ret = qtd_QNetworkRequest_attribute_Attribute_QVariant_const(qtdNativeId, code, defaultValue is null ? null : defaultValue.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final bool hasRawHeader(const(QByteArray) headerName) const {
        return qtd_QNetworkRequest_hasRawHeader_QByteArray_const(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId);
    }

    public final QVariant header(QNetworkRequest.KnownHeaders header) const {
        void* ret = qtd_QNetworkRequest_header_KnownHeaders_const(qtdNativeId, header);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QNetworkRequest) other) const {
        return qtd_QNetworkRequest_operator_equal_QNetworkRequest_const(qtdNativeId, other is null ? null : (cast(QNetworkRequest)other).qtdNativeId);
    }

    public final QObject originatingObject() const {
        void *ret = qtd_QNetworkRequest_originatingObject_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final QByteArray rawHeader(const(QByteArray) headerName) const {
        void* ret = qtd_QNetworkRequest_rawHeader_QByteArray_const(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QList!(QByteArray) rawHeaderList() const {
        auto res = QList!(QByteArray).opCall();
        qtd_QNetworkRequest_rawHeaderList_const(qtdNativeId, &res);
        return res;
    }

    public final void setAttribute(QNetworkRequest.Attribute code, QVariant value) {
        qtd_QNetworkRequest_setAttribute_Attribute_QVariant(qtdNativeId, code, value is null ? null : value.qtdNativeId);
    }

    public final void setHeader(QNetworkRequest.KnownHeaders header, QVariant value) {
        qtd_QNetworkRequest_setHeader_KnownHeaders_QVariant(qtdNativeId, header, value is null ? null : value.qtdNativeId);
    }

    public final void setOriginatingObject(QObject object) {
        qtd_QNetworkRequest_setOriginatingObject_QObject(qtdNativeId, object is null ? null : object.qtdNativeId);
    }

    public final void setRawHeader(const(QByteArray) headerName, const(QByteArray) value) {
        qtd_QNetworkRequest_setRawHeader_QByteArray_QByteArray(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId, value is null ? null : (cast(QByteArray)value).qtdNativeId);
    }

    public final void setSslConfiguration(const(QSslConfiguration) configuration) {
        qtd_QNetworkRequest_setSslConfiguration_QSslConfiguration(qtdNativeId, configuration is null ? null : (cast(QSslConfiguration)configuration).qtdNativeId);
    }

    public final void setUrl(const(QUrl) url) {
        qtd_QNetworkRequest_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QSslConfiguration sslConfiguration() const {
        void* ret = qtd_QNetworkRequest_sslConfiguration_const(qtdNativeId);
        QSslConfiguration __d_return_value = new QSslConfiguration(ret);
        return __d_return_value;
    }

    public final QUrl url() const {
        void* ret = qtd_QNetworkRequest_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkRequest;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkRequest_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkRequest_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkRequest_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkRequest_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkRequest_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkRequest_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkRequest_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkRequest_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkRequest_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkRequest_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkRequest_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkRequest_native_copy(const void* orig);
extern (C) void qtd_QNetworkRequest_delete(void *ptr);
extern (C) void qtd_QNetworkRequest_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkRequest_QNetworkRequest_QNetworkRequest(void* other0);
private extern(C) void* qtd_QNetworkRequest_QNetworkRequest_QUrl(void* url0);
private extern(C) void*  qtd_QNetworkRequest_attribute_Attribute_QVariant_const(void* __this_nativeId,
 int code0,
 void* defaultValue1);
private extern(C) bool  qtd_QNetworkRequest_hasRawHeader_QByteArray_const(void* __this_nativeId,
 void* headerName0);
private extern(C) void*  qtd_QNetworkRequest_header_KnownHeaders_const(void* __this_nativeId,
 int header0);
private extern(C) bool  qtd_QNetworkRequest_operator_equal_QNetworkRequest_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QNetworkRequest_originatingObject_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkRequest_rawHeader_QByteArray_const(void* __this_nativeId,
 void* headerName0);
private extern(C) void  qtd_QNetworkRequest_rawHeaderList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QNetworkRequest_setAttribute_Attribute_QVariant(void* __this_nativeId,
 int code0,
 void* value1);
private extern(C) void  qtd_QNetworkRequest_setHeader_KnownHeaders_QVariant(void* __this_nativeId,
 int header0,
 void* value1);
private extern(C) void  qtd_QNetworkRequest_setOriginatingObject_QObject(void* __this_nativeId,
 void* object0);
private extern(C) void  qtd_QNetworkRequest_setRawHeader_QByteArray_QByteArray(void* __this_nativeId,
 void* headerName0,
 void* value1);
private extern(C) void  qtd_QNetworkRequest_setSslConfiguration_QSslConfiguration(void* __this_nativeId,
 void* configuration0);
private extern(C) void  qtd_QNetworkRequest_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QNetworkRequest_sslConfiguration_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkRequest_url_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkRequest() {
    QNetworkRequest.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkRequest_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkRequest_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkRequest_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkRequest_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkRequest_QTypeInfo_isDummy();
