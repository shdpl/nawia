module qt.gui.QFontDialog;

public import qt.gui.QFontDialog_aux;
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
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QDialog;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QFont;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontDialog : QDialog
{

    private static const string[] __signalSignatures = [
            "currentFontChanged(QFont)", 
            "fontSelected(QFont)"    ];

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

    protected final void currentFontChanged(const(QFont) font) {
        qtd_QFontDialog_currentFontChanged_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    protected final void fontSelected(const(QFont) font) {
        qtd_QFontDialog_fontSelected_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QFontDialog_QFontDialog_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFont) initial, QWidget parent_ = null) {
        void* ret = qtd_QFontDialog_QFontDialog_QFont_QWidget(cast(void*) this, initial is null ? null : (cast(QFont)initial).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QFont currentFont() const {
        void* ret = qtd_QFontDialog_currentFont_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    deprecated     public final bool eventFilter(QObject object, QEvent event) {
        return qtd_QFontDialog_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public final void open() {
        qtd_QFontDialog_open(qtdNativeId);
    }

    public final QFont selectedFont() const {
        void* ret = qtd_QFontDialog_selectedFont_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final void setCurrentFont(const(QFont) font) {
        qtd_QFontDialog_setCurrentFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QFontDialog_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void done(int result) {
        qtd_QFontDialog_done_int(qtdNativeId, result);
    }

    public void setVisible(bool visible) {
        qtd_QFontDialog_setVisible_bool(qtdNativeId, visible);
    }

    public static QFont getFont(bool* ok, QWidget parent_ = null) {
        void* ret = qtd_QFontDialog_getFont_nativepointerbool_QWidget(ok, parent_ is null ? null : parent_.qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public static QFont getFont(bool* ok, const(QFont) initial, QWidget parent_ = null) {
        void* ret = qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget(ok, initial is null ? null : (cast(QFont)initial).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public static QFont getFont(bool* ok, const(QFont) initial, QWidget parent_, string title) {
        void* ret = qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget_string(ok, initial is null ? null : (cast(QFont)initial).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, title);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFontDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFontDialog);
    }

    static QFontDialog __getObject(void* nativeId) {
        return static_cast!(QFontDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFontDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFontDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFontDialog(nativeId, initFlags);
        QFontDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QFont))("currentFontChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QFont))("fontSelected"), index));

    }

    public alias void __isQtType_QFontDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFontDialog_currentFontChanged_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QFontDialog_fontSelected_QFont(void* __this_nativeId,
 void* font0);

// C wrappers
private extern(C) void* qtd_QFontDialog_QFontDialog_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QFontDialog_QFontDialog_QFont_QWidget(void *d_ptr,
 void* initial0,
 void* parent1);
private extern(C) void*  qtd_QFontDialog_currentFont_const(void* __this_nativeId);
    deprecated final bool  qtd_QFontDialog_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1)
    {
        throw new Exception("No Implementation Exception");
    }

private extern(C) void  qtd_QFontDialog_open(void* __this_nativeId);
private extern(C) void*  qtd_QFontDialog_selectedFont_const(void* __this_nativeId);
private extern(C) void  qtd_QFontDialog_setCurrentFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QFontDialog_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QFontDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QFontDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void*  qtd_QFontDialog_getFont_nativepointerbool_QWidget(bool* ok0,
 void* parent1);
private extern(C) void*  qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget(bool* ok0,
 void* initial1,
 void* parent2);
private extern(C) void*  qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget_string(bool* ok0,
 void* initial1,
 void* parent2,
 string title3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFontDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QFontDialog() {
    qtd_QFontDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFontDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QFontDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QFontDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QFontDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QFontDialog_currentFontChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        scope font0 = new QFont(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.currentFontChanged_emit(font0);
}*/
/*private extern(C) void qtd_QFontDialog_fontSelected_handle(void* dId, void** args) {
        auto d_object = cast(QFontDialog) dId;
        scope font0 = new QFont(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.fontSelected_emit(font0);
}*/

extern(C) QMetaObjectNative* qtd_QFontDialog_staticMetaObject();

extern(C) void qtd_QFontDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFontDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
