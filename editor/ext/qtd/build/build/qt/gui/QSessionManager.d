module qt.gui.QSessionManager;

public import qt.gui.QSessionManager_aux;
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


public final class QSessionManager : QObject
{
    public enum RestartHint {
        RestartIfRunning = 0,
        RestartAnyway = 1,
        RestartImmediately = 2,
        RestartNever = 3
    }

    alias RestartHint.RestartIfRunning RestartIfRunning;
    alias RestartHint.RestartAnyway RestartAnyway;
    alias RestartHint.RestartImmediately RestartImmediately;
    alias RestartHint.RestartNever RestartNever;


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

    public final bool allowsErrorInteraction() {
        return qtd_QSessionManager_allowsErrorInteraction(qtdNativeId);
    }

    public final bool allowsInteraction() {
        return qtd_QSessionManager_allowsInteraction(qtdNativeId);
    }

    public final void cancel() {
        qtd_QSessionManager_cancel(qtdNativeId);
    }

    public final QList!(string) discardCommand() const {
        auto res = QList!(string).opCall();
        qtd_QSessionManager_discardCommand_const(qtdNativeId, &res);
        return res;
    }

    public final bool isPhase2() const {
        return qtd_QSessionManager_isPhase2_const(qtdNativeId);
    }

    public final void release() {
        qtd_QSessionManager_release(qtdNativeId);
    }

    public final void requestPhase2() {
        qtd_QSessionManager_requestPhase2(qtdNativeId);
    }

    public final QList!(string) restartCommand() const {
        auto res = QList!(string).opCall();
        qtd_QSessionManager_restartCommand_const(qtdNativeId, &res);
        return res;
    }

    public final QSessionManager.RestartHint restartHint() const {
        return cast(QSessionManager.RestartHint) qtd_QSessionManager_restartHint_const(qtdNativeId);
    }

    public final string sessionId() const {
        string res;
        qtd_QSessionManager_sessionId_const(qtdNativeId, &res);
        return res;
    }

    public final string sessionKey() const {
        string res;
        qtd_QSessionManager_sessionKey_const(qtdNativeId, &res);
        return res;
    }

    public final void setDiscardCommand(QList!(string) arg__1) {
        qtd_QSessionManager_setDiscardCommand_QList(qtdNativeId, &arg__1);
    }

    public final void setManagerProperty(string name, string value) {
        qtd_QSessionManager_setManagerProperty_string_string(qtdNativeId, name, value);
    }

    public final void setManagerProperty(string name, QList!(string) value) {
        qtd_QSessionManager_setManagerProperty_string_QList(qtdNativeId, name, &value);
    }

    public final void setRestartCommand(QList!(string) arg__1) {
        qtd_QSessionManager_setRestartCommand_QList(qtdNativeId, &arg__1);
    }

    public final void setRestartHint(QSessionManager.RestartHint arg__1) {
        qtd_QSessionManager_setRestartHint_RestartHint(qtdNativeId, arg__1);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSessionManager);
    }

    static QSessionManager __getObject(void* nativeId) {
        return static_cast!(QSessionManager)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSessionManager_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSessionManager_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSessionManager(nativeId, initFlags);
        QSessionManager.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QSessionManager;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) bool  qtd_QSessionManager_allowsErrorInteraction(void* __this_nativeId);
private extern(C) bool  qtd_QSessionManager_allowsInteraction(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_cancel(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_discardCommand_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSessionManager_isPhase2_const(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_release(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_requestPhase2(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_restartCommand_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSessionManager_restartHint_const(void* __this_nativeId);
private extern(C) void  qtd_QSessionManager_sessionId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSessionManager_sessionKey_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSessionManager_setDiscardCommand_QList(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSessionManager_setManagerProperty_string_string(void* __this_nativeId,
 string name0,
 string value1);
private extern(C) void  qtd_QSessionManager_setManagerProperty_string_QList(void* __this_nativeId,
 string name0,
 void* value1);
private extern(C) void  qtd_QSessionManager_setRestartCommand_QList(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSessionManager_setRestartHint_RestartHint(void* __this_nativeId,
 int arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QSessionManager() {
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QSessionManager_staticMetaObject();

extern(C) void qtd_QSessionManager_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSessionManager_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
