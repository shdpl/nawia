module qt.gui.QColorDialog;

public import qt.gui.QColorDialog_aux;
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
public import qt.gui.QColor;
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
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QColorDialog : QDialog
{

    private static const string[] __signalSignatures = [
            "colorSelected(QColor)", 
            "currentColorChanged(QColor)"    ];

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

    protected final void colorSelected(const(QColor) color) {
        qtd_QColorDialog_colorSelected_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    protected final void currentColorChanged(const(QColor) color) {
        qtd_QColorDialog_currentColorChanged_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QColorDialog_QColorDialog_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) initial, QWidget parent_ = null) {
        void* ret = qtd_QColorDialog_QColorDialog_QColor_QWidget(cast(void*) this, initial is null ? null : (cast(QColor)initial).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QColor currentColor() const {
        void* ret = qtd_QColorDialog_currentColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final void open() {
        qtd_QColorDialog_open(qtdNativeId);
    }

    public final QColor selectedColor() const {
        void* ret = qtd_QColorDialog_selectedColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final void setCurrentColor(const(QColor) color) {
        qtd_QColorDialog_setCurrentColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QColorDialog_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void done(int result) {
        qtd_QColorDialog_done_int(qtdNativeId, result);
    }

    public void setVisible(bool visible) {
        qtd_QColorDialog_setVisible_bool(qtdNativeId, visible);
    }

    public static uint customColor(int index) {
        return qtd_QColorDialog_customColor_int(index);
    }

    public static int customCount() {
        return qtd_QColorDialog_customCount();
    }

    public static QColor getColor(const(QColor) initial = QColor.White, QWidget parent_ = null) {
        void* ret = qtd_QColorDialog_getColor_QColor_QWidget(initial is null ? null : (cast(QColor)initial).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static void setCustomColor(int index, uint color) {
        qtd_QColorDialog_setCustomColor_int_uint(index, color);
    }

    public static void setStandardColor(int index, uint color) {
        qtd_QColorDialog_setStandardColor_int_uint(index, color);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QColorDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QColorDialog);
    }

    static QColorDialog __getObject(void* nativeId) {
        return static_cast!(QColorDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QColorDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QColorDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QColorDialog(nativeId, initFlags);
        QColorDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QColor))("colorSelected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QColor))("currentColorChanged"), index));

    }

    public alias void __isQtType_QColorDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QColorDialog_colorSelected_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QColorDialog_currentColorChanged_QColor(void* __this_nativeId,
 void* color0);

// C wrappers
private extern(C) void* qtd_QColorDialog_QColorDialog_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QColorDialog_QColorDialog_QColor_QWidget(void *d_ptr,
 void* initial0,
 void* parent1);
private extern(C) void*  qtd_QColorDialog_currentColor_const(void* __this_nativeId);
private extern(C) void  qtd_QColorDialog_open(void* __this_nativeId);
private extern(C) void*  qtd_QColorDialog_selectedColor_const(void* __this_nativeId);
private extern(C) void  qtd_QColorDialog_setCurrentColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QColorDialog_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QColorDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QColorDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) uint  qtd_QColorDialog_customColor_int(int index0);
private extern(C) int  qtd_QColorDialog_customCount();
private extern(C) void*  qtd_QColorDialog_getColor_QColor_QWidget(void* initial0,
 void* parent1);
private extern(C) void  qtd_QColorDialog_setCustomColor_int_uint(int index0,
 uint color1);
private extern(C) void  qtd_QColorDialog_setStandardColor_int_uint(int index0,
 uint color1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QColorDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QColorDialog() {
    qtd_QColorDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QColorDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QColorDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QColorDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QColorDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QColorDialog_colorSelected_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        scope color0 = new QColor(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.colorSelected_emit(color0);
}*/
/*private extern(C) void qtd_QColorDialog_currentColorChanged_handle(void* dId, void** args) {
        auto d_object = cast(QColorDialog) dId;
        scope color0 = new QColor(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.currentColorChanged_emit(color0);
}*/

extern(C) QMetaObjectNative* qtd_QColorDialog_staticMetaObject();

extern(C) void qtd_QColorDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QColorDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
