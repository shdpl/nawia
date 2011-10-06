module qt.gui.QSound;

public import qt.gui.QSound_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSound : QObject
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

    public this(string filename, QObject parent_ = null) {
        void* ret = qtd_QSound_QSound_string_QObject(cast(void*) this, filename, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string fileName() const {
        string res;
        qtd_QSound_fileName_const(qtdNativeId, &res);
        return res;
    }

    public final bool isFinished() const {
        return qtd_QSound_isFinished_const(qtdNativeId);
    }

    public final int loops() const {
        return qtd_QSound_loops_const(qtdNativeId);
    }

    public final int loopsRemaining() const {
        return qtd_QSound_loopsRemaining_const(qtdNativeId);
    }

    public final void play() {
        qtd_QSound_play(qtdNativeId);
    }

    public final void setLoops(int arg__1) {
        qtd_QSound_setLoops_int(qtdNativeId, arg__1);
    }

    public final void stop() {
        qtd_QSound_stop(qtdNativeId);
    }

    public static bool isAvailable() {
        return qtd_QSound_isAvailable();
    }

    public static void play(string filename) {
        qtd_QSound_play_string(filename);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "play()", 
            "stop()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSound_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSound);
    }

    static QSound __getObject(void* nativeId) {
        return static_cast!(QSound)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSound_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSound_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSound(nativeId, initFlags);
        QSound.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("play"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("stop"), index));

    }

    public alias void __isQtType_QSound;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSound_QSound_string_QObject(void *d_ptr,
 string filename0,
 void* parent1);
private extern(C) void  qtd_QSound_fileName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSound_isFinished_const(void* __this_nativeId);
private extern(C) int  qtd_QSound_loops_const(void* __this_nativeId);
private extern(C) int  qtd_QSound_loopsRemaining_const(void* __this_nativeId);
private extern(C) void  qtd_QSound_play(void* __this_nativeId);
private extern(C) void  qtd_QSound_setLoops_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSound_stop(void* __this_nativeId);
private extern(C) bool  qtd_QSound_isAvailable();
private extern(C) void  qtd_QSound_play_string(string filename0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSound_initCallBacks(void* virtuals);

extern(C) void static_init_QSound() {
    qtd_QSound_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QSound_staticMetaObject();

extern(C) void qtd_QSound_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSound_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
