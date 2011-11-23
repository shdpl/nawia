module qt.core.QMimeData;

public import qt.core.QMimeData_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QVariant;
public import qt.core.QByteArray;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMimeData : QObject
{

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

    public this() {
        void* ret = qtd_QMimeData_QMimeData(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clear() {
        qtd_QMimeData_clear(qtdNativeId);
    }

    public final QVariant colorData() const {
        void* ret = qtd_QMimeData_colorData_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QByteArray data(string mimetype) const {
        void* ret = qtd_QMimeData_data_string_const(qtdNativeId, mimetype);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final bool hasColor() const {
        return qtd_QMimeData_hasColor_const(qtdNativeId);
    }

    public final bool hasHtml() const {
        return qtd_QMimeData_hasHtml_const(qtdNativeId);
    }

    public final bool hasImage() const {
        return qtd_QMimeData_hasImage_const(qtdNativeId);
    }

    public final bool hasText() const {
        return qtd_QMimeData_hasText_const(qtdNativeId);
    }

    public final bool hasUrls() const {
        return qtd_QMimeData_hasUrls_const(qtdNativeId);
    }

    public final string html() const {
        string res;
        qtd_QMimeData_html_const(qtdNativeId, &res);
        return res;
    }

    public final QVariant imageData() const {
        void* ret = qtd_QMimeData_imageData_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void removeFormat(string mimetype) {
        qtd_QMimeData_removeFormat_string(qtdNativeId, mimetype);
    }

    public final void setColorData(QVariant color) {
        qtd_QMimeData_setColorData_QVariant(qtdNativeId, color is null ? null : color.qtdNativeId);
    }

    public final void setData(string mimetype, const(QByteArray) data) {
        qtd_QMimeData_setData_string_QByteArray(qtdNativeId, mimetype, data is null ? null : (cast(QByteArray)data).qtdNativeId);
    }

    public final void setHtml(string html) {
        qtd_QMimeData_setHtml_string(qtdNativeId, html);
    }

    public final void setImageData(QVariant image) {
        qtd_QMimeData_setImageData_QVariant(qtdNativeId, image is null ? null : image.qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QMimeData_setText_string(qtdNativeId, text);
    }

    public final void setUrls(QList!(QUrl) urls) {
        qtd_QMimeData_setUrls_QList(qtdNativeId, &urls);
    }

    public final string text() const {
        string res;
        qtd_QMimeData_text_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QUrl) urls() const {
        auto res = QList!(QUrl).opCall();
        qtd_QMimeData_urls_const(qtdNativeId, &res);
        return res;
    }

    public QList!(string) formats() const {
        auto res = QList!(string).opCall();
        qtd_QMimeData_formats_const(qtdNativeId, &res);
        return res;
    }

    public bool hasFormat(string mimetype) const {
        return qtd_QMimeData_hasFormat_string_const(qtdNativeId, mimetype);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMimeData_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMimeData);
    }

    static QMimeData __getObject(void* nativeId) {
        return static_cast!(QMimeData)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMimeData_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMimeData_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMimeData(nativeId, initFlags);
        QMimeData.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QMimeData;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMimeData_QMimeData(void *d_ptr);
private extern(C) void  qtd_QMimeData_clear(void* __this_nativeId);
private extern(C) void*  qtd_QMimeData_colorData_const(void* __this_nativeId);
private extern(C) void*  qtd_QMimeData_data_string_const(void* __this_nativeId,
 string mimetype0);
private extern(C) bool  qtd_QMimeData_hasColor_const(void* __this_nativeId);
private extern(C) bool  qtd_QMimeData_hasHtml_const(void* __this_nativeId);
private extern(C) bool  qtd_QMimeData_hasImage_const(void* __this_nativeId);
private extern(C) bool  qtd_QMimeData_hasText_const(void* __this_nativeId);
private extern(C) bool  qtd_QMimeData_hasUrls_const(void* __this_nativeId);
private extern(C) void  qtd_QMimeData_html_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QMimeData_imageData_const(void* __this_nativeId);
private extern(C) void  qtd_QMimeData_removeFormat_string(void* __this_nativeId,
 string mimetype0);
private extern(C) void  qtd_QMimeData_setColorData_QVariant(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QMimeData_setData_string_QByteArray(void* __this_nativeId,
 string mimetype0,
 void* data1);
private extern(C) void  qtd_QMimeData_setHtml_string(void* __this_nativeId,
 string html0);
private extern(C) void  qtd_QMimeData_setImageData_QVariant(void* __this_nativeId,
 void* image0);
private extern(C) void  qtd_QMimeData_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QMimeData_setUrls_QList(void* __this_nativeId,
 void* urls0);
private extern(C) void  qtd_QMimeData_text_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QMimeData_urls_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QMimeData_formats_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QMimeData_hasFormat_string_const(void* __this_nativeId,
 string mimetype0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QMimeData_formats_const_dispatch; }
extern(C) void qtd_export_QMimeData_formats_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(QMimeData) dId;
    auto return_value = d_object.formats();
    *__d_arr = return_value;
}

extern(C){ extern bool function(void *dId, wchar* mimetype0, int mimetype0_size) qtd_QMimeData_hasFormat_string_const_dispatch; }
extern(C) bool qtd_export_QMimeData_hasFormat_string_const_dispatch(void *dId, wchar* mimetype0, int mimetype0_size){
    auto d_object = cast(QMimeData) dId;
    string mimetype0_d_ref = toUTF8(mimetype0[0..mimetype0_size]);
    auto return_value = d_object.hasFormat(mimetype0_d_ref);
    return return_value;
}

private extern (C) void qtd_QMimeData_initCallBacks(void* virtuals);

extern(C) void static_init_QMimeData() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QMimeData_formats_const_dispatch;
    virt_arr[1] = &qtd_export_QMimeData_hasFormat_string_const_dispatch;
    qtd_QMimeData_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QMimeData_staticMetaObject();

extern(C) void qtd_QMimeData_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMimeData_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
