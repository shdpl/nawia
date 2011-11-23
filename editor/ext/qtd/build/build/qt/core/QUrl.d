module qt.core.QUrl;

public import qt.core.QUrl_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QDataStream;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUrl : QtdObject
{
    public enum ParsingMode {
        TolerantMode = 0,
        StrictMode = 1
    }

    alias ParsingMode.TolerantMode TolerantMode;
    alias ParsingMode.StrictMode StrictMode;

    public enum FormattingOption {
        None = 0,
        RemoveScheme = 1,
        RemovePassword = 2,
        RemoveUserInfo = 6,
        RemovePort = 8,
        RemoveAuthority = 30,
        RemovePath = 32,
        RemoveQuery = 64,
        RemoveFragment = 128,
        StripTrailingSlash = 65536
    }

    alias FormattingOption.None None;
    alias FormattingOption.RemoveScheme RemoveScheme;
    alias FormattingOption.RemovePassword RemovePassword;
    alias FormattingOption.RemoveUserInfo RemoveUserInfo;
    alias FormattingOption.RemovePort RemovePort;
    alias FormattingOption.RemoveAuthority RemoveAuthority;
    alias FormattingOption.RemovePath RemovePath;
    alias FormattingOption.RemoveQuery RemoveQuery;
    alias FormattingOption.RemoveFragment RemoveFragment;
    alias FormattingOption.StripTrailingSlash StripTrailingSlash;


// Functions

    public this() {
        void* ret = qtd_QUrl_QUrl();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string url) {
        void* ret = qtd_QUrl_QUrl_string(url);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string url, QUrl.ParsingMode mode) {
        void* ret = qtd_QUrl_QUrl_string_ParsingMode(url, mode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QUrl) copy) {
        void* ret = qtd_QUrl_QUrl_QUrl(copy is null ? null : (cast(QUrl)copy).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addEncodedQueryItem(const(QByteArray) key, const(QByteArray) value) {
        qtd_QUrl_addEncodedQueryItem_QByteArray_QByteArray(qtdNativeId, key is null ? null : (cast(QByteArray)key).qtdNativeId, value is null ? null : (cast(QByteArray)value).qtdNativeId);
    }

    public final void addQueryItem(string key, string value) {
        qtd_QUrl_addQueryItem_string_string(qtdNativeId, key, value);
    }

    public final QList!(QByteArray) allEncodedQueryItemValues(const(QByteArray) key) const {
        auto res = QList!(QByteArray).opCall();
        qtd_QUrl_allEncodedQueryItemValues_QByteArray_const(qtdNativeId, &res, key is null ? null : (cast(QByteArray)key).qtdNativeId);
        return res;
    }

    public final QList!(string) allQueryItemValues(string key) const {
        auto res = QList!(string).opCall();
        qtd_QUrl_allQueryItemValues_string_const(qtdNativeId, &res, key);
        return res;
    }

    public final string authority() const {
        string res;
        qtd_QUrl_authority_const(qtdNativeId, &res);
        return res;
    }

    public final void clear() {
        qtd_QUrl_clear(qtdNativeId);
    }

    public final QByteArray encodedFragment() const {
        void* ret = qtd_QUrl_encodedFragment_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedHost() const {
        void* ret = qtd_QUrl_encodedHost_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedPassword() const {
        void* ret = qtd_QUrl_encodedPassword_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedPath() const {
        void* ret = qtd_QUrl_encodedPath_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedQuery() const {
        void* ret = qtd_QUrl_encodedQuery_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedQueryItemValue(const(QByteArray) key) const {
        void* ret = qtd_QUrl_encodedQueryItemValue_QByteArray_const(qtdNativeId, key is null ? null : (cast(QByteArray)key).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray encodedUserName() const {
        void* ret = qtd_QUrl_encodedUserName_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final string errorString() const {
        string res;
        qtd_QUrl_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string fragment() const {
        string res;
        qtd_QUrl_fragment_const(qtdNativeId, &res);
        return res;
    }

    public final bool hasEncodedQueryItem(const(QByteArray) key) const {
        return qtd_QUrl_hasEncodedQueryItem_QByteArray_const(qtdNativeId, key is null ? null : (cast(QByteArray)key).qtdNativeId);
    }

    public final bool hasFragment() const {
        return qtd_QUrl_hasFragment_const(qtdNativeId);
    }

    public final bool hasQuery() const {
        return qtd_QUrl_hasQuery_const(qtdNativeId);
    }

    public final bool hasQueryItem(string key) const {
        return qtd_QUrl_hasQueryItem_string_const(qtdNativeId, key);
    }

    public final string host() const {
        string res;
        qtd_QUrl_host_const(qtdNativeId, &res);
        return res;
    }

    public final bool isEmpty() const {
        return qtd_QUrl_isEmpty_const(qtdNativeId);
    }

    public final bool isParentOf(const(QUrl) url) const {
        return qtd_QUrl_isParentOf_QUrl_const(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final bool isRelative() const {
        return qtd_QUrl_isRelative_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QUrl_isValid_const(qtdNativeId);
    }

    private final bool operator_less(const(QUrl) url) const {
        return qtd_QUrl_operator_less_QUrl_const(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QUrl_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QUrl) url) const {
        return qtd_QUrl_operator_equal_QUrl_const(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QUrl_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final string password() const {
        string res;
        qtd_QUrl_password_const(qtdNativeId, &res);
        return res;
    }

    public final string path() const {
        string res;
        qtd_QUrl_path_const(qtdNativeId, &res);
        return res;
    }

    public final int port() const {
        return qtd_QUrl_port_const(qtdNativeId);
    }

    public final int port(int defaultPort) const {
        return qtd_QUrl_port_int_const(qtdNativeId, defaultPort);
    }

    public final string queryItemValue(string key) const {
        string res;
        qtd_QUrl_queryItemValue_string_const(qtdNativeId, &res, key);
        return res;
    }

    public final char queryPairDelimiter() const {
        return qtd_QUrl_queryPairDelimiter_const(qtdNativeId);
    }

    public final char queryValueDelimiter() const {
        return qtd_QUrl_queryValueDelimiter_const(qtdNativeId);
    }

    public final void removeAllEncodedQueryItems(const(QByteArray) key) {
        qtd_QUrl_removeAllEncodedQueryItems_QByteArray(qtdNativeId, key is null ? null : (cast(QByteArray)key).qtdNativeId);
    }

    public final void removeAllQueryItems(string key) {
        qtd_QUrl_removeAllQueryItems_string(qtdNativeId, key);
    }

    public final void removeEncodedQueryItem(const(QByteArray) key) {
        qtd_QUrl_removeEncodedQueryItem_QByteArray(qtdNativeId, key is null ? null : (cast(QByteArray)key).qtdNativeId);
    }

    public final void removeQueryItem(string key) {
        qtd_QUrl_removeQueryItem_string(qtdNativeId, key);
    }

    public final QUrl resolved(const(QUrl) relative) const {
        void* ret = qtd_QUrl_resolved_QUrl_const(qtdNativeId, relative is null ? null : (cast(QUrl)relative).qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public final string scheme() const {
        string res;
        qtd_QUrl_scheme_const(qtdNativeId, &res);
        return res;
    }

    public final void setAuthority(string authority) {
        qtd_QUrl_setAuthority_string(qtdNativeId, authority);
    }

    public final void setEncodedFragment(const(QByteArray) fragment) {
        qtd_QUrl_setEncodedFragment_QByteArray(qtdNativeId, fragment is null ? null : (cast(QByteArray)fragment).qtdNativeId);
    }

    public final void setEncodedHost(const(QByteArray) host) {
        qtd_QUrl_setEncodedHost_QByteArray(qtdNativeId, host is null ? null : (cast(QByteArray)host).qtdNativeId);
    }

    public final void setEncodedPassword(const(QByteArray) password) {
        qtd_QUrl_setEncodedPassword_QByteArray(qtdNativeId, password is null ? null : (cast(QByteArray)password).qtdNativeId);
    }

    public final void setEncodedPath(const(QByteArray) path) {
        qtd_QUrl_setEncodedPath_QByteArray(qtdNativeId, path is null ? null : (cast(QByteArray)path).qtdNativeId);
    }

    public final void setEncodedQuery(const(QByteArray) query) {
        qtd_QUrl_setEncodedQuery_QByteArray(qtdNativeId, query is null ? null : (cast(QByteArray)query).qtdNativeId);
    }

    public final void setEncodedUrl(const(QByteArray) url) {
        qtd_QUrl_setEncodedUrl_QByteArray(qtdNativeId, url is null ? null : (cast(QByteArray)url).qtdNativeId);
    }

    public final void setEncodedUrl(const(QByteArray) url, QUrl.ParsingMode mode) {
        qtd_QUrl_setEncodedUrl_QByteArray_ParsingMode(qtdNativeId, url is null ? null : (cast(QByteArray)url).qtdNativeId, mode);
    }

    public final void setEncodedUserName(const(QByteArray) userName) {
        qtd_QUrl_setEncodedUserName_QByteArray(qtdNativeId, userName is null ? null : (cast(QByteArray)userName).qtdNativeId);
    }

    public final void setFragment(string fragment) {
        qtd_QUrl_setFragment_string(qtdNativeId, fragment);
    }

    public final void setHost(string host) {
        qtd_QUrl_setHost_string(qtdNativeId, host);
    }

    public final void setPassword(string password) {
        qtd_QUrl_setPassword_string(qtdNativeId, password);
    }

    public final void setPath(string path) {
        qtd_QUrl_setPath_string(qtdNativeId, path);
    }

    public final void setPort(int port) {
        qtd_QUrl_setPort_int(qtdNativeId, port);
    }

    public final void setQueryDelimiters(char valueDelimiter, char pairDelimiter) {
        qtd_QUrl_setQueryDelimiters_char_char(qtdNativeId, valueDelimiter, pairDelimiter);
    }

    public final void setScheme(string scheme) {
        qtd_QUrl_setScheme_string(qtdNativeId, scheme);
    }

    public final void setUrl(string url) {
        qtd_QUrl_setUrl_string(qtdNativeId, url);
    }

    public final void setUrl(string url, QUrl.ParsingMode mode) {
        qtd_QUrl_setUrl_string_ParsingMode(qtdNativeId, url, mode);
    }

    public final void setUserInfo(string userInfo) {
        qtd_QUrl_setUserInfo_string(qtdNativeId, userInfo);
    }

    public final void setUserName(string userName) {
        qtd_QUrl_setUserName_string(qtdNativeId, userName);
    }

    public final QByteArray toEncoded(int options = 0) const {
        void* ret = qtd_QUrl_toEncoded_FormattingOptions_const(qtdNativeId, options);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final string toLocalFile() const {
        string res;
        qtd_QUrl_toLocalFile_const(qtdNativeId, &res);
        return res;
    }

    public final string toString(int options = 0) const {
        string res;
        qtd_QUrl_toString_FormattingOptions_const(qtdNativeId, &res, options);
        return res;
    }

    public final string userInfo() const {
        string res;
        qtd_QUrl_userInfo_const(qtdNativeId, &res);
        return res;
    }

    public final string userName() const {
        string res;
        qtd_QUrl_userName_const(qtdNativeId, &res);
        return res;
    }

    public static string fromAce(const(QByteArray) arg__1) {
        string res;
        qtd_QUrl_fromAce_QByteArray(&res, arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        return res;
    }

    public static QUrl fromEncoded(const(QByteArray) url) {
        void* ret = qtd_QUrl_fromEncoded_QByteArray(url is null ? null : (cast(QByteArray)url).qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public static QUrl fromEncoded(const(QByteArray) url, QUrl.ParsingMode mode) {
        void* ret = qtd_QUrl_fromEncoded_QByteArray_ParsingMode(url is null ? null : (cast(QByteArray)url).qtdNativeId, mode);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public static QUrl fromLocalFile(string localfile) {
        void* ret = qtd_QUrl_fromLocalFile_string(localfile);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public static string fromPercentEncoding(const(QByteArray) arg__1) {
        string res;
        qtd_QUrl_fromPercentEncoding_QByteArray(&res, arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        return res;
    }

    public static QUrl fromUserInput(string userInput) {
        void* ret = qtd_QUrl_fromUserInput_string(userInput);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public static QList!(string) idnWhitelist() {
        auto res = QList!(string).opCall();
        qtd_QUrl_idnWhitelist(&res);
        return res;
    }

    public static void setIdnWhitelist(QList!(string) arg__1) {
        qtd_QUrl_setIdnWhitelist_QList(&arg__1);
    }

    public static QByteArray toAce(string arg__1) {
        void* ret = qtd_QUrl_toAce_string(arg__1);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray toPercentEncoding(string arg__1, const(QByteArray) exclude = new QByteArray(), const(QByteArray) include = new QByteArray()) {
        void* ret = qtd_QUrl_toPercentEncoding_string_QByteArray_QByteArray(arg__1, exclude is null ? null : (cast(QByteArray)exclude).qtdNativeId, include is null ? null : (cast(QByteArray)include).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QUrl;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QUrl_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QUrl_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QUrl_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QUrl_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QUrl_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QUrl_QTypeInfo_isComplex();
        isStatic = qtd_QUrl_QTypeInfo_isStatic();
        isLarge = qtd_QUrl_QTypeInfo_isLarge();
        isPointer = qtd_QUrl_QTypeInfo_isPointer();
        isDummy = qtd_QUrl_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QUrl_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QUrl_native_copy(const void* orig);
extern (C) void qtd_QUrl_delete(void *ptr);
extern (C) void qtd_QUrl_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUrl_QUrl();
private extern(C) void* qtd_QUrl_QUrl_string(string url0);
private extern(C) void* qtd_QUrl_QUrl_string_ParsingMode(string url0,
 int mode1);
private extern(C) void* qtd_QUrl_QUrl_QUrl(void* copy0);
private extern(C) void  qtd_QUrl_addEncodedQueryItem_QByteArray_QByteArray(void* __this_nativeId,
 void* key0,
 void* value1);
private extern(C) void  qtd_QUrl_addQueryItem_string_string(void* __this_nativeId,
 string key0,
 string value1);
private extern(C) void  qtd_QUrl_allEncodedQueryItemValues_QByteArray_const(void* __this_nativeId,
 void* __d_return_value,
 void* key0);
private extern(C) void  qtd_QUrl_allQueryItemValues_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QUrl_authority_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_clear(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedFragment_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedHost_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedPassword_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedPath_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedQuery_const(void* __this_nativeId);
private extern(C) void*  qtd_QUrl_encodedQueryItemValue_QByteArray_const(void* __this_nativeId,
 void* key0);
private extern(C) void*  qtd_QUrl_encodedUserName_const(void* __this_nativeId);
private extern(C) void  qtd_QUrl_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_fragment_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QUrl_hasEncodedQueryItem_QByteArray_const(void* __this_nativeId,
 void* key0);
private extern(C) bool  qtd_QUrl_hasFragment_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrl_hasQuery_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrl_hasQueryItem_string_const(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QUrl_host_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QUrl_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrl_isParentOf_QUrl_const(void* __this_nativeId,
 void* url0);
private extern(C) bool  qtd_QUrl_isRelative_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrl_isValid_const(void* __this_nativeId);
private extern(C) bool  qtd_QUrl_operator_less_QUrl_const(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QUrl_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QUrl_operator_equal_QUrl_const(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QUrl_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QUrl_password_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QUrl_port_const(void* __this_nativeId);
private extern(C) int  qtd_QUrl_port_int_const(void* __this_nativeId,
 int defaultPort0);
private extern(C) void  qtd_QUrl_queryItemValue_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) char  qtd_QUrl_queryPairDelimiter_const(void* __this_nativeId);
private extern(C) char  qtd_QUrl_queryValueDelimiter_const(void* __this_nativeId);
private extern(C) void  qtd_QUrl_removeAllEncodedQueryItems_QByteArray(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QUrl_removeAllQueryItems_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QUrl_removeEncodedQueryItem_QByteArray(void* __this_nativeId,
 void* key0);
private extern(C) void  qtd_QUrl_removeQueryItem_string(void* __this_nativeId,
 string key0);
private extern(C) void*  qtd_QUrl_resolved_QUrl_const(void* __this_nativeId,
 void* relative0);
private extern(C) void  qtd_QUrl_scheme_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_setAuthority_string(void* __this_nativeId,
 string authority0);
private extern(C) void  qtd_QUrl_setEncodedFragment_QByteArray(void* __this_nativeId,
 void* fragment0);
private extern(C) void  qtd_QUrl_setEncodedHost_QByteArray(void* __this_nativeId,
 void* host0);
private extern(C) void  qtd_QUrl_setEncodedPassword_QByteArray(void* __this_nativeId,
 void* password0);
private extern(C) void  qtd_QUrl_setEncodedPath_QByteArray(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QUrl_setEncodedQuery_QByteArray(void* __this_nativeId,
 void* query0);
private extern(C) void  qtd_QUrl_setEncodedUrl_QByteArray(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QUrl_setEncodedUrl_QByteArray_ParsingMode(void* __this_nativeId,
 void* url0,
 int mode1);
private extern(C) void  qtd_QUrl_setEncodedUserName_QByteArray(void* __this_nativeId,
 void* userName0);
private extern(C) void  qtd_QUrl_setFragment_string(void* __this_nativeId,
 string fragment0);
private extern(C) void  qtd_QUrl_setHost_string(void* __this_nativeId,
 string host0);
private extern(C) void  qtd_QUrl_setPassword_string(void* __this_nativeId,
 string password0);
private extern(C) void  qtd_QUrl_setPath_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QUrl_setPort_int(void* __this_nativeId,
 int port0);
private extern(C) void  qtd_QUrl_setQueryDelimiters_char_char(void* __this_nativeId,
 char valueDelimiter0,
 char pairDelimiter1);
private extern(C) void  qtd_QUrl_setScheme_string(void* __this_nativeId,
 string scheme0);
private extern(C) void  qtd_QUrl_setUrl_string(void* __this_nativeId,
 string url0);
private extern(C) void  qtd_QUrl_setUrl_string_ParsingMode(void* __this_nativeId,
 string url0,
 int mode1);
private extern(C) void  qtd_QUrl_setUserInfo_string(void* __this_nativeId,
 string userInfo0);
private extern(C) void  qtd_QUrl_setUserName_string(void* __this_nativeId,
 string userName0);
private extern(C) void*  qtd_QUrl_toEncoded_FormattingOptions_const(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QUrl_toLocalFile_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_toString_FormattingOptions_const(void* __this_nativeId,
 void* __d_return_value,
 int options0);
private extern(C) void  qtd_QUrl_userInfo_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_userName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QUrl_fromAce_QByteArray(void* __d_return_value,
 void* arg__1);
private extern(C) void*  qtd_QUrl_fromEncoded_QByteArray(void* url0);
private extern(C) void*  qtd_QUrl_fromEncoded_QByteArray_ParsingMode(void* url0,
 int mode1);
private extern(C) void*  qtd_QUrl_fromLocalFile_string(string localfile0);
private extern(C) void  qtd_QUrl_fromPercentEncoding_QByteArray(void* __d_return_value,
 void* arg__1);
private extern(C) void*  qtd_QUrl_fromUserInput_string(string userInput0);
private extern(C) void  qtd_QUrl_idnWhitelist(void* __d_return_value);
private extern(C) void  qtd_QUrl_setIdnWhitelist_QList(void* arg__1);
private extern(C) void*  qtd_QUrl_toAce_string(string arg__1);
private extern(C) void*  qtd_QUrl_toPercentEncoding_string_QByteArray_QByteArray(string arg__1,
 void* exclude1,
 void* include2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QUrl() {
    QUrl.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QUrl_QTypeInfo_isComplex();
private extern (C) bool qtd_QUrl_QTypeInfo_isStatic();
private extern (C) bool qtd_QUrl_QTypeInfo_isLarge();
private extern (C) bool qtd_QUrl_QTypeInfo_isPointer();
private extern (C) bool qtd_QUrl_QTypeInfo_isDummy();
