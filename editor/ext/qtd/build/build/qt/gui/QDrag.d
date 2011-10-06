module qt.gui.QDrag;

public import qt.gui.QDrag_aux;
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
public import qt.core.QMimeData;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.gui.QPixmap;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDrag : QObject
{

    private static const string[] __signalSignatures = [
            "actionChanged(Qt::DropAction)", 
            "targetChanged(QWidget*)"    ];

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

    protected final void actionChanged(Qt.DropAction action) {
        qtd_QDrag_actionChanged_DropAction(qtdNativeId, action);
    }

    protected final void targetChanged(QWidget newTarget) {
        qtd_QDrag_targetChanged_QWidget(qtdNativeId, newTarget is null ? null : newTarget.qtdNativeId);
    }
// Functions

    public this(QWidget dragSource) {
        void* ret = qtd_QDrag_QDrag_QWidget(cast(void*) this, dragSource is null ? null : dragSource.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.DropAction exec(int supportedActions = 2) {
        return cast(Qt.DropAction) qtd_QDrag_exec_DropActions(qtdNativeId, supportedActions);
    }

    public final Qt.DropAction exec(int supportedActions, Qt.DropAction defaultAction) {
        return cast(Qt.DropAction) qtd_QDrag_exec_DropActions_DropAction(qtdNativeId, supportedActions, defaultAction);
    }

    public final QPoint hotSpot() const {
        QPoint res;
        qtd_QDrag_hotSpot_const(qtdNativeId, &res);
        return res;
    }

    public final QMimeData mimeData() const {
        void *ret = qtd_QDrag_mimeData_const(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public final QPixmap pixmap() const {
        void* ret = qtd_QDrag_pixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void setDragCursor(const(QPixmap) cursor, Qt.DropAction action) {
        qtd_QDrag_setDragCursor_QPixmap_DropAction(qtdNativeId, cursor is null ? null : (cast(QPixmap)cursor).qtdNativeId, action);
    }

    public final void setHotSpot(const(QPoint) hotspot) {
        qtd_QDrag_setHotSpot_QPoint(qtdNativeId, hotspot);
    }

    public final void setMimeData(QMimeData data) {
        if (data !is null) {
            data.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QDrag_setMimeData_QMimeData(qtdNativeId, data is null ? null : data.qtdNativeId);
    }

    public final void setPixmap(const(QPixmap) arg__1) {
        qtd_QDrag_setPixmap_QPixmap(qtdNativeId, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId);
    }

    public final QWidget source() const {
        void *ret = qtd_QDrag_source_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget target() const {
        void *ret = qtd_QDrag_target_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDrag_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDrag);
    }

    static QDrag __getObject(void* nativeId) {
        return static_cast!(QDrag)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDrag_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDrag_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDrag(nativeId, initFlags);
        QDrag.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(Qt.DropAction)("actionChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QWidget)("targetChanged"), index));

    }

    public alias void __isQtType_QDrag;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDrag_actionChanged_DropAction(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QDrag_targetChanged_QWidget(void* __this_nativeId,
 void* newTarget0);

// C wrappers
private extern(C) void* qtd_QDrag_QDrag_QWidget(void *d_ptr,
 void* dragSource0);
private extern(C) int  qtd_QDrag_exec_DropActions(void* __this_nativeId,
 int supportedActions0);
private extern(C) int  qtd_QDrag_exec_DropActions_DropAction(void* __this_nativeId,
 int supportedActions0,
 int defaultAction1);
private extern(C) void  qtd_QDrag_hotSpot_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void*  qtd_QDrag_mimeData_const(void* __this_nativeId);
private extern(C) void*  qtd_QDrag_pixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QDrag_setDragCursor_QPixmap_DropAction(void* __this_nativeId,
 void* cursor0,
 int action1);
private extern(C) void  qtd_QDrag_setHotSpot_QPoint(void* __this_nativeId,
 QPoint hotspot0);
private extern(C) void  qtd_QDrag_setMimeData_QMimeData(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QDrag_setPixmap_QPixmap(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QDrag_source_const(void* __this_nativeId);
private extern(C) void*  qtd_QDrag_target_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDrag_initCallBacks(void* virtuals);

extern(C) void static_init_QDrag() {
    qtd_QDrag_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDrag_actionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDrag) dId;
        auto action0 = *(cast(Qt.DropAction*)args[1]);
        //d_object.actionChanged_emit(action0);
}*/
/*private extern(C) void qtd_QDrag_targetChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDrag) dId;
        scope newTarget0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.targetChanged_emit(newTarget0);
}*/

extern(C) QMetaObjectNative* qtd_QDrag_staticMetaObject();

extern(C) void qtd_QDrag_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDrag_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
