module qt.core.QFutureWatcherBase;

public import qt.core.QFutureWatcherBase_aux;
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


public class QFutureWatcherBase : QObject
{

    private static const string[] __signalSignatures = [
            "canceled()", 
            "finished()", 
            "paused()", 
            "progressRangeChanged(int,int)", 
            "progressTextChanged(QString)", 
            "progressValueChanged(int)", 
            "resultReadyAt(int)", 
            "resultsReadyAt(int,int)", 
            "resumed()", 
            "started()"    ];

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

    protected final void canceled() {
        qtd_QFutureWatcherBase_canceled(qtdNativeId);
    }

    protected final void finished() {
        qtd_QFutureWatcherBase_finished(qtdNativeId);
    }

    protected final void paused() {
        qtd_QFutureWatcherBase_paused(qtdNativeId);
    }

    protected final void progressRangeChanged(int minimum, int maximum) {
        qtd_QFutureWatcherBase_progressRangeChanged_int_int(qtdNativeId, minimum, maximum);
    }

    protected final void progressTextChanged(string progressText) {
        qtd_QFutureWatcherBase_progressTextChanged_string(qtdNativeId, progressText);
    }

    protected final void progressValueChanged(int progressValue) {
        qtd_QFutureWatcherBase_progressValueChanged_int(qtdNativeId, progressValue);
    }

    protected final void resultReadyAt(int resultIndex) {
        qtd_QFutureWatcherBase_resultReadyAt_int(qtdNativeId, resultIndex);
    }

    protected final void resultsReadyAt(int beginIndex, int endIndex) {
        qtd_QFutureWatcherBase_resultsReadyAt_int_int(qtdNativeId, beginIndex, endIndex);
    }

    protected final void resumed() {
        qtd_QFutureWatcherBase_resumed(qtdNativeId);
    }

    protected final void started() {
        qtd_QFutureWatcherBase_started(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QFutureWatcherBase_QFutureWatcherBase_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void cancel() {
        qtd_QFutureWatcherBase_cancel(qtdNativeId);
    }

    protected final void connectOutputInterface() {
        qtd_QFutureWatcherBase_connectOutputInterface(qtdNativeId);
    }

    protected final void disconnectOutputInterface(bool pendingAssignment = false) {
        qtd_QFutureWatcherBase_disconnectOutputInterface_bool(qtdNativeId, pendingAssignment);
    }

    public final bool isCanceled() const {
        return qtd_QFutureWatcherBase_isCanceled_const(qtdNativeId);
    }

    public final bool isFinished() const {
        return qtd_QFutureWatcherBase_isFinished_const(qtdNativeId);
    }

    public final bool isPaused() const {
        return qtd_QFutureWatcherBase_isPaused_const(qtdNativeId);
    }

    public final bool isRunning() const {
        return qtd_QFutureWatcherBase_isRunning_const(qtdNativeId);
    }

    public final bool isStarted() const {
        return qtd_QFutureWatcherBase_isStarted_const(qtdNativeId);
    }

    public final void pause() {
        qtd_QFutureWatcherBase_pause(qtdNativeId);
    }

    public final int progressMaximum() const {
        return qtd_QFutureWatcherBase_progressMaximum_const(qtdNativeId);
    }

    public final int progressMinimum() const {
        return qtd_QFutureWatcherBase_progressMinimum_const(qtdNativeId);
    }

    public final string progressText() const {
        string res;
        qtd_QFutureWatcherBase_progressText_const(qtdNativeId, &res);
        return res;
    }

    public final int progressValue() const {
        return qtd_QFutureWatcherBase_progressValue_const(qtdNativeId);
    }

    public final void resume() {
        qtd_QFutureWatcherBase_resume(qtdNativeId);
    }

    public final void setPaused(bool paused) {
        qtd_QFutureWatcherBase_setPaused_bool(qtdNativeId, paused);
    }

    public final void setPendingResultsLimit(int limit) {
        qtd_QFutureWatcherBase_setPendingResultsLimit_int(qtdNativeId, limit);
    }

    public final void togglePaused() {
        qtd_QFutureWatcherBase_togglePaused(qtdNativeId);
    }

    public final void waitForFinished() {
        qtd_QFutureWatcherBase_waitForFinished(qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QFutureWatcherBase_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "cancel()", 
            "pause()", 
            "resume()", 
            "setPaused(bool)", 
            "togglePaused()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFutureWatcherBase_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFutureWatcherBase);
    }

    static QFutureWatcherBase __getObject(void* nativeId) {
        return static_cast!(QFutureWatcherBase)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFutureWatcherBase_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFutureWatcherBase_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFutureWatcherBase(nativeId, initFlags);
        QFutureWatcherBase.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("canceled"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("paused"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("progressRangeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("progressTextChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int)("progressValueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(int)("resultReadyAt"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("resultsReadyAt"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!()("resumed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("started"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("cancel"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("pause"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("resume"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setPaused"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("togglePaused"), index));

    }

    public alias void __isQtType_QFutureWatcherBase;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QFutureWatcherBase_canceled(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_finished(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_paused(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_progressRangeChanged_int_int(void* __this_nativeId,
 int minimum0,
 int maximum1);
private extern(C) void  qtd_QFutureWatcherBase_progressTextChanged_string(void* __this_nativeId,
 string progressText0);
private extern(C) void  qtd_QFutureWatcherBase_progressValueChanged_int(void* __this_nativeId,
 int progressValue0);
private extern(C) void  qtd_QFutureWatcherBase_resultReadyAt_int(void* __this_nativeId,
 int resultIndex0);
private extern(C) void  qtd_QFutureWatcherBase_resultsReadyAt_int_int(void* __this_nativeId,
 int beginIndex0,
 int endIndex1);
private extern(C) void  qtd_QFutureWatcherBase_resumed(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_started(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QFutureWatcherBase_QFutureWatcherBase_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QFutureWatcherBase_cancel(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_connectOutputInterface(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_disconnectOutputInterface_bool(void* __this_nativeId,
 bool pendingAssignment0);
private extern(C) bool  qtd_QFutureWatcherBase_isCanceled_const(void* __this_nativeId);
private extern(C) bool  qtd_QFutureWatcherBase_isFinished_const(void* __this_nativeId);
private extern(C) bool  qtd_QFutureWatcherBase_isPaused_const(void* __this_nativeId);
private extern(C) bool  qtd_QFutureWatcherBase_isRunning_const(void* __this_nativeId);
private extern(C) bool  qtd_QFutureWatcherBase_isStarted_const(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_pause(void* __this_nativeId);
private extern(C) int  qtd_QFutureWatcherBase_progressMaximum_const(void* __this_nativeId);
private extern(C) int  qtd_QFutureWatcherBase_progressMinimum_const(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_progressText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QFutureWatcherBase_progressValue_const(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_resume(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_setPaused_bool(void* __this_nativeId,
 bool paused0);
private extern(C) void  qtd_QFutureWatcherBase_setPendingResultsLimit_int(void* __this_nativeId,
 int limit0);
private extern(C) void  qtd_QFutureWatcherBase_togglePaused(void* __this_nativeId);
private extern(C) void  qtd_QFutureWatcherBase_waitForFinished(void* __this_nativeId);
private extern(C) bool  qtd_QFutureWatcherBase_event_QEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFutureWatcherBase_initCallBacks(void* virtuals);

extern(C) void static_init_QFutureWatcherBase() {
    qtd_QFutureWatcherBase_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFutureWatcherBase_canceled_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        //d_object.canceled_emit();
}*/
/*private extern(C) void qtd_QFutureWatcherBase_finished_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        //d_object.finished_emit();
}*/
/*private extern(C) void qtd_QFutureWatcherBase_paused_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        //d_object.paused_emit();
}*/
/*private extern(C) void qtd_QFutureWatcherBase_progressRangeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        auto minimum0 = *(cast(int*)args[1]);
        auto maximum1 = *(cast(int*)args[2]);
        //d_object.progressRangeChanged_emit(minimum0, maximum1);
}*/
/*private extern(C) void qtd_QFutureWatcherBase_progressTextChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        auto progressText0_ptr = args[1];
        string progressText0 = QStringUtil.toNativeString(progressText0_ptr);
        //d_object.progressTextChanged_emit(progressText0);
}*/
/*private extern(C) void qtd_QFutureWatcherBase_progressValueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        auto progressValue0 = *(cast(int*)args[1]);
        //d_object.progressValueChanged_emit(progressValue0);
}*/
/*private extern(C) void qtd_QFutureWatcherBase_resultReadyAt_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        auto resultIndex0 = *(cast(int*)args[1]);
        //d_object.resultReadyAt_emit(resultIndex0);
}*/
/*private extern(C) void qtd_QFutureWatcherBase_resultsReadyAt_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        auto beginIndex0 = *(cast(int*)args[1]);
        auto endIndex1 = *(cast(int*)args[2]);
        //d_object.resultsReadyAt_emit(beginIndex0, endIndex1);
}*/
/*private extern(C) void qtd_QFutureWatcherBase_resumed_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        //d_object.resumed_emit();
}*/
/*private extern(C) void qtd_QFutureWatcherBase_started_handle(void* dId, void** args) {
        auto d_object = cast(QFutureWatcherBase) dId;
        //d_object.started_emit();
}*/

extern(C) QMetaObjectNative* qtd_QFutureWatcherBase_staticMetaObject();

extern(C) void qtd_QFutureWatcherBase_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFutureWatcherBase_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
