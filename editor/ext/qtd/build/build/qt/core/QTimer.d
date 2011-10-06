module qt.core.QTimer;

public import qt.core.QTimer_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTimer : QObject
{

    private static const string[] __signalSignatures = [
            "timeout()"    ];

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

    protected final void timeout() {
        qtd_QTimer_timeout(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QTimer_QTimer_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int interval() const {
        return qtd_QTimer_interval_const(qtdNativeId);
    }

    public final bool isActive() const {
        return qtd_QTimer_isActive_const(qtdNativeId);
    }

    public final bool isSingleShot() const {
        return qtd_QTimer_isSingleShot_const(qtdNativeId);
    }

    public final void setInterval(int msec) {
        qtd_QTimer_setInterval_int(qtdNativeId, msec);
    }

    public final void setSingleShot(bool singleShot) {
        qtd_QTimer_setSingleShot_bool(qtdNativeId, singleShot);
    }

    public final void start() {
        qtd_QTimer_start(qtdNativeId);
    }

    public final void start(int msec) {
        qtd_QTimer_start_int(qtdNativeId, msec);
    }

    public final void stop() {
        qtd_QTimer_stop(qtdNativeId);
    }

    public final int timerId() const {
        return qtd_QTimer_timerId_const(qtdNativeId);
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QTimer_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static void singleShot(int msec, QObject receiver, const(char*) member) {
        qtd_QTimer_singleShot_int_QObject_nativepointerchar(msec, receiver is null ? null : receiver.qtdNativeId, member);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "start()", 
            "start(int)", 
            "stop()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTimer_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTimer);
    }

    static QTimer __getObject(void* nativeId) {
        return static_cast!(QTimer)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTimer_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTimer_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTimer(nativeId, initFlags);
        QTimer.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("timeout"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("start"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(int)("start"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("stop"), index));

    }

    public alias void __isQtType_QTimer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTimer_timeout(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QTimer_QTimer_QObject(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QTimer_interval_const(void* __this_nativeId);
private extern(C) bool  qtd_QTimer_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QTimer_isSingleShot_const(void* __this_nativeId);
private extern(C) void  qtd_QTimer_setInterval_int(void* __this_nativeId,
 int msec0);
private extern(C) void  qtd_QTimer_setSingleShot_bool(void* __this_nativeId,
 bool singleShot0);
private extern(C) void  qtd_QTimer_start(void* __this_nativeId);
private extern(C) void  qtd_QTimer_start_int(void* __this_nativeId,
 int msec0);
private extern(C) void  qtd_QTimer_stop(void* __this_nativeId);
private extern(C) int  qtd_QTimer_timerId_const(void* __this_nativeId);
private extern(C) void  qtd_QTimer_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTimer_singleShot_int_QObject_nativepointerchar(int msec0,
 void* receiver1,
 const (char*) member2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTimer_initCallBacks(void* virtuals);

extern(C) void static_init_QTimer() {
    qtd_QTimer_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QTimer_timeout_handle(void* dId, void** args) {
        auto d_object = cast(QTimer) dId;
        //d_object.timeout_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTimer_staticMetaObject();

extern(C) void qtd_QTimer_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTimer_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
