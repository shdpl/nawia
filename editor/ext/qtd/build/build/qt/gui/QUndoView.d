module qt.gui.QUndoView;

public import qt.gui.QUndoView_aux;
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
public import qt.gui.QAbstractItemDelegate;
public import qt.gui.QAbstractItemView;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.core.QAbstractItemModel;
public import qt.gui.QItemSelectionModel;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QModelIndex;
public import qt.core.QChildEvent;
public import qt.gui.QIcon;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QResizeEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QUndoStack;
public import qt.gui.QShowEvent;
public import qt.gui.QWheelEvent;
public import qt.gui.QItemSelection;
public import qt.gui.QCloseEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QStyleOptionViewItem;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QUndoGroup;
public import qt.gui.QRegion;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QListView;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUndoView : QListView
{

Object __rcGroupOrStack = null;

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

    public this(QUndoGroup group, QWidget parent_ = null) {
        {
            __rcGroupOrStack = cast(Object) group;
        }
        void* ret = qtd_QUndoView_QUndoView_QUndoGroup_QWidget(cast(void*) this, group is null ? null : group.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QUndoStack stack, QWidget parent_ = null) {
        {
            __rcGroupOrStack = cast(Object) stack;
        }
        void* ret = qtd_QUndoView_QUndoView_QUndoStack_QWidget(cast(void*) this, stack is null ? null : stack.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QUndoView_QUndoView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QIcon cleanIcon() const {
        void* ret = qtd_QUndoView_cleanIcon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final string emptyLabel() const {
        string res;
        qtd_QUndoView_emptyLabel_const(qtdNativeId, &res);
        return res;
    }

    public final QUndoGroup group() const {
        void *ret = qtd_QUndoView_group_const(qtdNativeId);
        QUndoGroup __d_return_value = QUndoGroup.__getObject(ret);
        return __d_return_value;
    }

    public final void setCleanIcon(const(QIcon) icon) {
        qtd_QUndoView_setCleanIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setEmptyLabel(string label) {
        qtd_QUndoView_setEmptyLabel_string(qtdNativeId, label);
    }

    public final void setGroup(QUndoGroup group) {
        {
            __rcGroupOrStack = cast(Object) group;
        }
        qtd_QUndoView_setGroup_QUndoGroup(qtdNativeId, group is null ? null : group.qtdNativeId);
    }

    public final void setStack(QUndoStack stack) {
        {
            __rcGroupOrStack = cast(Object) stack;
        }
        qtd_QUndoView_setStack_QUndoStack(qtdNativeId, stack is null ? null : stack.qtdNativeId);
    }

    public final QUndoStack stack() const {
        void *ret = qtd_QUndoView_stack_const(qtdNativeId);
        QUndoStack __d_return_value = QUndoStack.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setGroup(QUndoGroup*)", 
            "setStack(QUndoStack*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QUndoView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QUndoView);
    }

    static QUndoView __getObject(void* nativeId) {
        return static_cast!(QUndoView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QUndoView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QUndoView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QUndoView(nativeId, initFlags);
        QUndoView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QUndoGroup)("setGroup"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QUndoStack)("setStack"), index));

    }

    public alias void __isQtType_QUndoView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUndoView_QUndoView_QUndoGroup_QWidget(void *d_ptr,
 void* group0,
 void* parent1);
private extern(C) void* qtd_QUndoView_QUndoView_QUndoStack_QWidget(void *d_ptr,
 void* stack0,
 void* parent1);
private extern(C) void* qtd_QUndoView_QUndoView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QUndoView_cleanIcon_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoView_emptyLabel_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QUndoView_group_const(void* __this_nativeId);
private extern(C) void  qtd_QUndoView_setCleanIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QUndoView_setEmptyLabel_string(void* __this_nativeId,
 string label0);
private extern(C) void  qtd_QUndoView_setGroup_QUndoGroup(void* __this_nativeId,
 void* group0);
private extern(C) void  qtd_QUndoView_setStack_QUndoStack(void* __this_nativeId,
 void* stack0);
private extern(C) void*  qtd_QUndoView_stack_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QUndoView_initCallBacks(void* virtuals);

extern(C) void static_init_QUndoView() {
    qtd_QUndoView_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QUndoView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QUndoView_activated_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.activated_emit(index0);
}*/
/*private extern(C) void qtd_QUndoView_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.clicked_emit(index0);
}*/
/*private extern(C) void qtd_QUndoView_doubleClicked_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.doubleClicked_emit(index0);
}*/
/*private extern(C) void qtd_QUndoView_entered_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.entered_emit(index0);
}*/
/*private extern(C) void qtd_QUndoView_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        auto index0 = *(cast(QModelIndex*)args[1]);
        //d_object.pressed_emit(index0);
}*/
/*private extern(C) void qtd_QUndoView_viewportEntered_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        //d_object.viewportEntered_emit();
}*/
/*private extern(C) void qtd_QUndoView_indexesMoved_handle(void* dId, void** args) {
        auto d_object = cast(QUndoView) dId;
        QList!(QModelIndex) indexes0;
        qtd_qt_gui_QModelIndex_fromcpp_QList(args[1], &indexes0);

        //d_object.indexesMoved_emit(indexes0);
}*/

extern(C) QMetaObjectNative* qtd_QUndoView_staticMetaObject();

extern(C) void qtd_QUndoView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QUndoView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
