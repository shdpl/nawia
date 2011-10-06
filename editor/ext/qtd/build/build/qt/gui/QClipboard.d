module qt.gui.QClipboard;

public import qt.gui.QClipboard_aux;
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
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.QMimeData;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.gui.QPixmap;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QImage;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public final class QClipboard : QObject
{
    public enum Mode {
        Clipboard = 0,
        Selection = 1,
        FindBuffer = 2
    }

    alias Mode.Clipboard Clipboard;
    alias Mode.Selection Selection;
    alias Mode.FindBuffer FindBuffer;


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

    public final void clear(QClipboard.Mode mode = QClipboard.Mode.Clipboard) {
        qtd_QClipboard_clear_Mode(qtdNativeId, mode);
    }

    public final QImage image(QClipboard.Mode mode = QClipboard.Mode.Clipboard) const {
        void* ret = qtd_QClipboard_image_Mode_const(qtdNativeId, mode);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QMimeData mimeData(QClipboard.Mode mode = QClipboard.Mode.Clipboard) const {
        void *ret = qtd_QClipboard_mimeData_Mode_const(qtdNativeId, mode);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public final bool ownsClipboard() const {
        return qtd_QClipboard_ownsClipboard_const(qtdNativeId);
    }

    public final bool ownsFindBuffer() const {
        return qtd_QClipboard_ownsFindBuffer_const(qtdNativeId);
    }

    public final bool ownsSelection() const {
        return qtd_QClipboard_ownsSelection_const(qtdNativeId);
    }

    public final QPixmap pixmap(QClipboard.Mode mode = QClipboard.Mode.Clipboard) const {
        void* ret = qtd_QClipboard_pixmap_Mode_const(qtdNativeId, mode);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void setImage(const(QImage) arg__1, QClipboard.Mode mode = QClipboard.Mode.Clipboard) {
        qtd_QClipboard_setImage_QImage_Mode(qtdNativeId, arg__1 is null ? null : (cast(QImage)arg__1).qtdNativeId, mode);
    }

    public final void setMimeData(QMimeData data, QClipboard.Mode mode = QClipboard.Mode.Clipboard) {
        if (data !is null) {
            data.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QClipboard_setMimeData_QMimeData_Mode(qtdNativeId, data is null ? null : data.qtdNativeId, mode);
    }

    public final void setPixmap(const(QPixmap) arg__1, QClipboard.Mode mode = QClipboard.Mode.Clipboard) {
        qtd_QClipboard_setPixmap_QPixmap_Mode(qtdNativeId, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId, mode);
    }

    public final void setText(string arg__1, QClipboard.Mode mode = QClipboard.Mode.Clipboard) {
        qtd_QClipboard_setText_string_Mode(qtdNativeId, arg__1, mode);
    }

    public final bool supportsFindBuffer() const {
        return qtd_QClipboard_supportsFindBuffer_const(qtdNativeId);
    }

    public final bool supportsSelection() const {
        return qtd_QClipboard_supportsSelection_const(qtdNativeId);
    }

    public final string text(QClipboard.Mode mode = QClipboard.Mode.Clipboard) const {
        string res;
        qtd_QClipboard_text_Mode_const(qtdNativeId, &res, mode);
        return res;
    }

    public final string text(ref string subtype, QClipboard.Mode mode = QClipboard.Mode.Clipboard) const {
        string res;
        qtd_QClipboard_text_nativepointerstring_Mode_const(qtdNativeId, &res, subtype, mode);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QClipboard);
    }

    static QClipboard __getObject(void* nativeId) {
        return static_cast!(QClipboard)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QClipboard_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QClipboard_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QClipboard(nativeId, initFlags);
        QClipboard.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QClipboard;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public static class Text {
    public String text;
    public String subtype;
    }

    public final Text text(String subtype, Mode mode) {
    QNativePointer np = new QNativePointer(QNativePointer.Type.String);
    np.setStringValue(subtype != null ? subtype : "");

    Text returned = new Text();
    returned.text = text(np, mode);
    returned.subtype = np.stringValue();
    return returned;
    }

    public final Text text(String subtype) {
    return text(subtype, Mode.Clipboard);
    }
     */

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void  qtd_QClipboard_clear_Mode(void* __this_nativeId,
 int mode0);
private extern(C) void*  qtd_QClipboard_image_Mode_const(void* __this_nativeId,
 int mode0);
private extern(C) void*  qtd_QClipboard_mimeData_Mode_const(void* __this_nativeId,
 int mode0);
private extern(C) bool  qtd_QClipboard_ownsClipboard_const(void* __this_nativeId);
private extern(C) bool  qtd_QClipboard_ownsFindBuffer_const(void* __this_nativeId);
private extern(C) bool  qtd_QClipboard_ownsSelection_const(void* __this_nativeId);
private extern(C) void*  qtd_QClipboard_pixmap_Mode_const(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QClipboard_setImage_QImage_Mode(void* __this_nativeId,
 void* arg__1,
 int mode1);
private extern(C) void  qtd_QClipboard_setMimeData_QMimeData_Mode(void* __this_nativeId,
 void* data0,
 int mode1);
private extern(C) void  qtd_QClipboard_setPixmap_QPixmap_Mode(void* __this_nativeId,
 void* arg__1,
 int mode1);
private extern(C) void  qtd_QClipboard_setText_string_Mode(void* __this_nativeId,
 string arg__1,
 int mode1);
private extern(C) bool  qtd_QClipboard_supportsFindBuffer_const(void* __this_nativeId);
private extern(C) bool  qtd_QClipboard_supportsSelection_const(void* __this_nativeId);
private extern(C) void  qtd_QClipboard_text_Mode_const(void* __this_nativeId,
 void* __d_return_value,
 int mode0);
private extern(C) void  qtd_QClipboard_text_nativepointerstring_Mode_const(void* __this_nativeId,
 void* __d_return_value,
 string subtype0,
 int mode1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QClipboard() {
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QClipboard_staticMetaObject();

extern(C) void qtd_QClipboard_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QClipboard_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
