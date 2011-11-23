module qt.gui.QToolBox;

public import qt.gui.QToolBox_aux;
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
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QFrame;
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
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QToolBox : QFrame
{

    private static const string[] __signalSignatures = [
            "currentChanged(int)"    ];

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

    protected final void currentChanged(int index) {
        qtd_QToolBox_currentChanged_int(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QToolBox_QToolBox_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addItem(QWidget widget, const(QIcon) icon, string text) {
        return qtd_QToolBox_addItem_QWidget_QIcon_string(qtdNativeId, widget is null ? null : widget.qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
    }

    public final int addItem(QWidget widget, string text) {
        return qtd_QToolBox_addItem_QWidget_string(qtdNativeId, widget is null ? null : widget.qtdNativeId, text);
    }

    public final int count() const {
        return qtd_QToolBox_count_const(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QToolBox_currentIndex_const(qtdNativeId);
    }

    public final QWidget currentWidget() const {
        void *ret = qtd_QToolBox_currentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int indexOf(QWidget widget) const {
        return qtd_QToolBox_indexOf_QWidget_const(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final int insertItem(int index, QWidget widget, const(QIcon) icon, string text) {
        return qtd_QToolBox_insertItem_int_QWidget_QIcon_string(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
    }

    public final int insertItem(int index, QWidget widget, string text) {
        return qtd_QToolBox_insertItem_int_QWidget_string(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, text);
    }

    public final bool isItemEnabled(int index) const {
        return qtd_QToolBox_isItemEnabled_int_const(qtdNativeId, index);
    }

    public final QIcon itemIcon(int index) const {
        void* ret = qtd_QToolBox_itemIcon_int_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final string itemText(int index) const {
        string res;
        qtd_QToolBox_itemText_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string itemToolTip(int index) const {
        string res;
        qtd_QToolBox_itemToolTip_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final void removeItem(int index) {
        qtd_QToolBox_removeItem_int(qtdNativeId, index);
    }

    public final void setCurrentIndex(int index) {
        qtd_QToolBox_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setCurrentWidget(QWidget widget) {
        qtd_QToolBox_setCurrentWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setItemEnabled(int index, bool enabled) {
        qtd_QToolBox_setItemEnabled_int_bool(qtdNativeId, index, enabled);
    }

    public final void setItemIcon(int index, const(QIcon) icon) {
        qtd_QToolBox_setItemIcon_int_QIcon(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setItemText(int index, string text) {
        qtd_QToolBox_setItemText_int_string(qtdNativeId, index, text);
    }

    public final void setItemToolTip(int index, string toolTip) {
        qtd_QToolBox_setItemToolTip_int_string(qtdNativeId, index, toolTip);
    }

    public final QWidget widget(int index) const {
        void *ret = qtd_QToolBox_widget_int_const(qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QToolBox_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QToolBox_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void itemInserted(int index) {
        qtd_QToolBox_itemInserted_int(qtdNativeId, index);
    }

    protected void itemRemoved(int index) {
        qtd_QToolBox_itemRemoved_int(qtdNativeId, index);
    }

    protected void showEvent(QShowEvent e) {
        qtd_QToolBox_showEvent_QShowEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentIndex(int)", 
            "setCurrentWidget(QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QToolBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QToolBox);
    }

    static QToolBox __getObject(void* nativeId) {
        return static_cast!(QToolBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QToolBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QToolBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QToolBox(nativeId, initFlags);
        QToolBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setCurrentWidget"), index));

    }

    public alias void __isQtType_QToolBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QToolBox_currentChanged_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QToolBox_QToolBox_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) int  qtd_QToolBox_addItem_QWidget_QIcon_string(void* __this_nativeId,
 void* widget0,
 void* icon1,
 string text2);
private extern(C) int  qtd_QToolBox_addItem_QWidget_string(void* __this_nativeId,
 void* widget0,
 string text1);
private extern(C) int  qtd_QToolBox_count_const(void* __this_nativeId);
private extern(C) int  qtd_QToolBox_currentIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QToolBox_currentWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QToolBox_indexOf_QWidget_const(void* __this_nativeId,
 void* widget0);
private extern(C) int  qtd_QToolBox_insertItem_int_QWidget_QIcon_string(void* __this_nativeId,
 int index0,
 void* widget1,
 void* icon2,
 string text3);
private extern(C) int  qtd_QToolBox_insertItem_int_QWidget_string(void* __this_nativeId,
 int index0,
 void* widget1,
 string text2);
private extern(C) bool  qtd_QToolBox_isItemEnabled_int_const(void* __this_nativeId,
 int index0);
private extern(C) void*  qtd_QToolBox_itemIcon_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_itemText_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QToolBox_itemToolTip_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QToolBox_removeItem_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_setCurrentWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QToolBox_setItemEnabled_int_bool(void* __this_nativeId,
 int index0,
 bool enabled1);
private extern(C) void  qtd_QToolBox_setItemIcon_int_QIcon(void* __this_nativeId,
 int index0,
 void* icon1);
private extern(C) void  qtd_QToolBox_setItemText_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) void  qtd_QToolBox_setItemToolTip_int_string(void* __this_nativeId,
 int index0,
 string toolTip1);
private extern(C) void*  qtd_QToolBox_widget_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QToolBox_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QToolBox_itemInserted_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_itemRemoved_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QToolBox_showEvent_QShowEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int index0) qtd_QToolBox_itemInserted_int_dispatch; }
extern(C) void qtd_export_QToolBox_itemInserted_int_dispatch(void *dId, int index0){
    auto d_object = cast(QToolBox) dId;
    d_object.itemInserted(index0);
}

extern(C){ extern void function(void *dId, int index0) qtd_QToolBox_itemRemoved_int_dispatch; }
extern(C) void qtd_export_QToolBox_itemRemoved_int_dispatch(void *dId, int index0){
    auto d_object = cast(QToolBox) dId;
    d_object.itemRemoved(index0);
}

private extern (C) void qtd_QToolBox_initCallBacks(void* virtuals);

extern(C) void static_init_QToolBox() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QToolBox_itemInserted_int_dispatch;
    virt_arr[1] = &qtd_export_QToolBox_itemRemoved_int_dispatch;
    qtd_QToolBox_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QToolBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QToolBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QToolBox_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBox) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentChanged_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QToolBox_staticMetaObject();

extern(C) void qtd_QToolBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QToolBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
