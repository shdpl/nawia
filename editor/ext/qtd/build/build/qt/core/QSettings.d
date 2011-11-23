module qt.core.QSettings;

public import qt.core.QSettings_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QTextCodec;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSettings : QObject
{
    public enum Format {
        NativeFormat = 0,
        IniFormat = 1,
        InvalidFormat = 16,
        CustomFormat1 = 17,
        CustomFormat2 = 18,
        CustomFormat3 = 19,
        CustomFormat4 = 20,
        CustomFormat5 = 21,
        CustomFormat6 = 22,
        CustomFormat7 = 23,
        CustomFormat8 = 24,
        CustomFormat9 = 25,
        CustomFormat10 = 26,
        CustomFormat11 = 27,
        CustomFormat12 = 28,
        CustomFormat13 = 29,
        CustomFormat14 = 30,
        CustomFormat15 = 31,
        CustomFormat16 = 32
    }

    alias Format.NativeFormat NativeFormat;
    alias Format.IniFormat IniFormat;
    alias Format.InvalidFormat InvalidFormat;
    alias Format.CustomFormat1 CustomFormat1;
    alias Format.CustomFormat2 CustomFormat2;
    alias Format.CustomFormat3 CustomFormat3;
    alias Format.CustomFormat4 CustomFormat4;
    alias Format.CustomFormat5 CustomFormat5;
    alias Format.CustomFormat6 CustomFormat6;
    alias Format.CustomFormat7 CustomFormat7;
    alias Format.CustomFormat8 CustomFormat8;
    alias Format.CustomFormat9 CustomFormat9;
    alias Format.CustomFormat10 CustomFormat10;
    alias Format.CustomFormat11 CustomFormat11;
    alias Format.CustomFormat12 CustomFormat12;
    alias Format.CustomFormat13 CustomFormat13;
    alias Format.CustomFormat14 CustomFormat14;
    alias Format.CustomFormat15 CustomFormat15;
    alias Format.CustomFormat16 CustomFormat16;

    public enum Status {
        NoError = 0,
        AccessError = 1,
        FormatError = 2
    }

    alias Status.NoError NoError;
    alias Status.AccessError AccessError;
    alias Status.FormatError FormatError;

    public enum Scope {
        UserScope = 0,
        SystemScope = 1
    }

    alias Scope.UserScope UserScope;
    alias Scope.SystemScope SystemScope;


    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QSettings_QSettings_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSettings.Format format, QSettings.Scope scope_, string organization, string application = "", QObject parent_ = null) {
        void* ret = qtd_QSettings_QSettings_Format_Scope_string_string_QObject(cast(void*) this, format, scope_, organization, application, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QSettings.Scope scope_, string organization, string application = "", QObject parent_ = null) {
        void* ret = qtd_QSettings_QSettings_Scope_string_string_QObject(cast(void*) this, scope_, organization, application, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName, QSettings.Format format, QObject parent_ = null) {
        void* ret = qtd_QSettings_QSettings_string_Format_QObject(cast(void*) this, fileName, format, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string organization, string application = "", QObject parent_ = null) {
        void* ret = qtd_QSettings_QSettings_string_string_QObject(cast(void*) this, organization, application, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(string) allKeys() const {
        auto res = QList!(string).opCall();
        qtd_QSettings_allKeys_const(qtdNativeId, &res);
        return res;
    }

    public final string applicationName() const {
        string res;
        qtd_QSettings_applicationName_const(qtdNativeId, &res);
        return res;
    }

    public final void beginGroup(string prefix) {
        qtd_QSettings_beginGroup_string(qtdNativeId, prefix);
    }

    public final int beginReadArray(string prefix) {
        return qtd_QSettings_beginReadArray_string(qtdNativeId, prefix);
    }

    public final void beginWriteArray(string prefix, int size = -1) {
        qtd_QSettings_beginWriteArray_string_int(qtdNativeId, prefix, size);
    }

    public final QList!(string) childGroups() const {
        auto res = QList!(string).opCall();
        qtd_QSettings_childGroups_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) childKeys() const {
        auto res = QList!(string).opCall();
        qtd_QSettings_childKeys_const(qtdNativeId, &res);
        return res;
    }

    public final void clear() {
        qtd_QSettings_clear(qtdNativeId);
    }

    public final bool contains(string key) const {
        return qtd_QSettings_contains_string_const(qtdNativeId, key);
    }

    public final void endArray() {
        qtd_QSettings_endArray(qtdNativeId);
    }

    public final void endGroup() {
        qtd_QSettings_endGroup(qtdNativeId);
    }

    public final bool fallbacksEnabled() const {
        return qtd_QSettings_fallbacksEnabled_const(qtdNativeId);
    }

    public final string fileName() const {
        string res;
        qtd_QSettings_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final QSettings.Format format() const {
        return cast(QSettings.Format) qtd_QSettings_format_const(qtdNativeId);
    }

    public final string group() const {
        string res;
        qtd_QSettings_group_const(qtdNativeId, &res);
        return res;
    }

    public final QTextCodec iniCodec() const {
        void* ret = qtd_QSettings_iniCodec_const(qtdNativeId);
        QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

        return __d_return_value;
    }

    public final bool isWritable() const {
        return qtd_QSettings_isWritable_const(qtdNativeId);
    }

    public final string organizationName() const {
        string res;
        qtd_QSettings_organizationName_const(qtdNativeId, &res);
        return res;
    }

    public final void remove(string key) {
        qtd_QSettings_remove_string(qtdNativeId, key);
    }

    public final QSettings.Scope scope_() const {
        return cast(QSettings.Scope) qtd_QSettings_scope__const(qtdNativeId);
    }

    public final void setArrayIndex(int i) {
        qtd_QSettings_setArrayIndex_int(qtdNativeId, i);
    }

    public final void setFallbacksEnabled(bool b) {
        qtd_QSettings_setFallbacksEnabled_bool(qtdNativeId, b);
    }

    public final void setIniCodec(QTextCodec codec) {
        qtd_QSettings_setIniCodec_QTextCodec(qtdNativeId, codec is null ? null : codec.qtdNativeId);
    }

    public final void setIniCodec(const(char*) codecName) {
        qtd_QSettings_setIniCodec_nativepointerchar(qtdNativeId, codecName);
    }

    public final void setValue(string key, QVariant value) {
        qtd_QSettings_setValue_string_QVariant(qtdNativeId, key, value is null ? null : value.qtdNativeId);
    }

    public final QSettings.Status status() const {
        return cast(QSettings.Status) qtd_QSettings_status_const(qtdNativeId);
    }

    public final void sync() {
        qtd_QSettings_sync(qtdNativeId);
    }

    public final QVariant value(string key, QVariant defaultValue = null) const {
        void* ret = qtd_QSettings_value_string_QVariant_const(qtdNativeId, key, defaultValue is null ? null : defaultValue.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool event(QEvent event) {
        return qtd_QSettings_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public static QSettings.Format defaultFormat() {
        return cast(QSettings.Format) qtd_QSettings_defaultFormat();
    }

    public static void setDefaultFormat(QSettings.Format format) {
        qtd_QSettings_setDefaultFormat_Format(format);
    }

    public static void setPath(QSettings.Format format, QSettings.Scope scope_, string path) {
        qtd_QSettings_setPath_Format_Scope_string(format, scope_, path);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSettings_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSettings);
    }

    static QSettings __getObject(void* nativeId) {
        return static_cast!(QSettings)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSettings_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSettings_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSettings(nativeId, initFlags);
        QSettings.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QSettings;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSettings_QSettings_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSettings_QSettings_Format_Scope_string_string_QObject(void *d_ptr,
 int format0,
 int scope1,
 string organization2,
 string application3,
 void* parent4);
private extern(C) void* qtd_QSettings_QSettings_Scope_string_string_QObject(void *d_ptr,
 int scope0,
 string organization1,
 string application2,
 void* parent3);
private extern(C) void* qtd_QSettings_QSettings_string_Format_QObject(void *d_ptr,
 string fileName0,
 int format1,
 void* parent2);
private extern(C) void* qtd_QSettings_QSettings_string_string_QObject(void *d_ptr,
 string organization0,
 string application1,
 void* parent2);
private extern(C) void  qtd_QSettings_allKeys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSettings_applicationName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSettings_beginGroup_string(void* __this_nativeId,
 string prefix0);
private extern(C) int  qtd_QSettings_beginReadArray_string(void* __this_nativeId,
 string prefix0);
private extern(C) void  qtd_QSettings_beginWriteArray_string_int(void* __this_nativeId,
 string prefix0,
 int size1);
private extern(C) void  qtd_QSettings_childGroups_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSettings_childKeys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSettings_clear(void* __this_nativeId);
private extern(C) bool  qtd_QSettings_contains_string_const(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QSettings_endArray(void* __this_nativeId);
private extern(C) void  qtd_QSettings_endGroup(void* __this_nativeId);
private extern(C) bool  qtd_QSettings_fallbacksEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QSettings_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSettings_format_const(void* __this_nativeId);
private extern(C) void  qtd_QSettings_group_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QSettings_iniCodec_const(void* __this_nativeId);
private extern(C) bool  qtd_QSettings_isWritable_const(void* __this_nativeId);
private extern(C) void  qtd_QSettings_organizationName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSettings_remove_string(void* __this_nativeId,
 string key0);
private extern(C) int  qtd_QSettings_scope__const(void* __this_nativeId);
private extern(C) void  qtd_QSettings_setArrayIndex_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QSettings_setFallbacksEnabled_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QSettings_setIniCodec_QTextCodec(void* __this_nativeId,
 void* codec0);
private extern(C) void  qtd_QSettings_setIniCodec_nativepointerchar(void* __this_nativeId,
 const (char*) codecName0);
private extern(C) void  qtd_QSettings_setValue_string_QVariant(void* __this_nativeId,
 string key0,
 void* value1);
private extern(C) int  qtd_QSettings_status_const(void* __this_nativeId);
private extern(C) void  qtd_QSettings_sync(void* __this_nativeId);
private extern(C) void*  qtd_QSettings_value_string_QVariant_const(void* __this_nativeId,
 string key0,
 void* defaultValue1);
private extern(C) bool  qtd_QSettings_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) int  qtd_QSettings_defaultFormat();
private extern(C) void  qtd_QSettings_setDefaultFormat_Format(int format0);
private extern(C) void  qtd_QSettings_setPath_Format_Scope_string(int format0,
 int scope1,
 string path2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSettings_initCallBacks(void* virtuals);

extern(C) void static_init_QSettings() {
    qtd_QSettings_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QSettings_staticMetaObject();

extern(C) void qtd_QSettings_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSettings_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
