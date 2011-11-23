module qt.core.QSocketNotifier;

public import qt.core.QSocketNotifier_aux;
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


public class QSocketNotifier : QObject
{
    public enum Type {
        Read = 0,
        Write = 1,
        Exception = 2
    }

    alias Type.Read Read;
    alias Type.Write Write;
    alias Type.Exception Exception;


    private static const string[] __signalSignatures = [
            "activated(int)"    ];

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

    protected final void activated(int socket) {
        qtd_QSocketNotifier_activated_int(qtdNativeId, socket);
    }
// Functions

    public this(int socket, QSocketNotifier.Type arg__2, QObject parent_ = null) {
        void* ret = qtd_QSocketNotifier_QSocketNotifier_int_Type_QObject(cast(void*) this, socket, arg__2, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isEnabled() const {
        return qtd_QSocketNotifier_isEnabled_const(qtdNativeId);
    }

    public final void setEnabled(bool arg__1) {
        qtd_QSocketNotifier_setEnabled_bool(qtdNativeId, arg__1);
    }

    public final int socket() const {
        return qtd_QSocketNotifier_socket_const(qtdNativeId);
    }

    public final QSocketNotifier.Type type() const {
        return cast(QSocketNotifier.Type) qtd_QSocketNotifier_type_const(qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QSocketNotifier_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setEnabled(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSocketNotifier_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSocketNotifier);
    }

    static QSocketNotifier __getObject(void* nativeId) {
        return static_cast!(QSocketNotifier)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSocketNotifier_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSocketNotifier_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSocketNotifier(nativeId, initFlags);
        QSocketNotifier.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("activated"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setEnabled"), index));

    }

    public alias void __isQtType_QSocketNotifier;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSocketNotifier_activated_int(void* __this_nativeId,
 int socket0);

// C wrappers
private extern(C) void* qtd_QSocketNotifier_QSocketNotifier_int_Type_QObject(void *d_ptr,
 int socket0,
 int arg__2,
 void* parent2);
private extern(C) bool  qtd_QSocketNotifier_isEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QSocketNotifier_setEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) int  qtd_QSocketNotifier_socket_const(void* __this_nativeId);
private extern(C) int  qtd_QSocketNotifier_type_const(void* __this_nativeId);
private extern(C) bool  qtd_QSocketNotifier_event_QEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSocketNotifier_initCallBacks(void* virtuals);

extern(C) void static_init_QSocketNotifier() {
    qtd_QSocketNotifier_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSocketNotifier_activated_handle(void* dId, void** args) {
        auto d_object = cast(QSocketNotifier) dId;
        auto socket0 = *(cast(int*)args[1]);
        //d_object.activated_emit(socket0);
}*/

extern(C) QMetaObjectNative* qtd_QSocketNotifier_staticMetaObject();

extern(C) void qtd_QSocketNotifier_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSocketNotifier_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
