module qt.core.QTimeLine;

public import qt.core.QTimeLine_aux;
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


public class QTimeLine : QObject
{
    public enum Direction {
        Forward = 0,
        Backward = 1
    }

    alias Direction.Forward Forward;
    alias Direction.Backward Backward;

    public enum CurveShape {
        EaseInCurve = 0,
        EaseOutCurve = 1,
        EaseInOutCurve = 2,
        LinearCurve = 3,
        SineCurve = 4,
        CosineCurve = 5
    }

    alias CurveShape.EaseInCurve EaseInCurve;
    alias CurveShape.EaseOutCurve EaseOutCurve;
    alias CurveShape.EaseInOutCurve EaseInOutCurve;
    alias CurveShape.LinearCurve LinearCurve;
    alias CurveShape.SineCurve SineCurve;
    alias CurveShape.CosineCurve CosineCurve;

    public enum State {
        NotRunning = 0,
        Paused = 1,
        Running = 2
    }

    alias State.NotRunning NotRunning;
    alias State.Paused Paused;
    alias State.Running Running;


    private static const string[] __signalSignatures = [
            "finished()", 
            "frameChanged(int)", 
            "stateChanged(QTimeLine::State)", 
            "valueChanged(double)"    ];

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

    protected final void finished() {
        qtd_QTimeLine_finished(qtdNativeId);
    }

    protected final void frameChanged(int arg__1) {
        qtd_QTimeLine_frameChanged_int(qtdNativeId, arg__1);
    }

    protected final void stateChanged(QTimeLine.State newState) {
        qtd_QTimeLine_stateChanged_State(qtdNativeId, newState);
    }

    protected final void valueChanged(double x) {
        qtd_QTimeLine_valueChanged_double(qtdNativeId, x);
    }
// Functions

    public this(int duration = 1000, QObject parent_ = null) {
        void* ret = qtd_QTimeLine_QTimeLine_int_QObject(cast(void*) this, duration, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int currentFrame() const {
        return qtd_QTimeLine_currentFrame_const(qtdNativeId);
    }

    public final int currentTime() const {
        return qtd_QTimeLine_currentTime_const(qtdNativeId);
    }

    public final double currentValue() const {
        return qtd_QTimeLine_currentValue_const(qtdNativeId);
    }

    public final QTimeLine.CurveShape curveShape() const {
        return cast(QTimeLine.CurveShape) qtd_QTimeLine_curveShape_const(qtdNativeId);
    }

    public final QTimeLine.Direction direction() const {
        return cast(QTimeLine.Direction) qtd_QTimeLine_direction_const(qtdNativeId);
    }

    public final int duration() const {
        return qtd_QTimeLine_duration_const(qtdNativeId);
    }

    public final int endFrame() const {
        return qtd_QTimeLine_endFrame_const(qtdNativeId);
    }

    public final int frameForTime(int msec) const {
        return qtd_QTimeLine_frameForTime_int_const(qtdNativeId, msec);
    }

    public final int loopCount() const {
        return qtd_QTimeLine_loopCount_const(qtdNativeId);
    }

    public final void resume() {
        qtd_QTimeLine_resume(qtdNativeId);
    }

    public final void setCurrentTime(int msec) {
        qtd_QTimeLine_setCurrentTime_int(qtdNativeId, msec);
    }

    public final void setCurveShape(QTimeLine.CurveShape shape) {
        qtd_QTimeLine_setCurveShape_CurveShape(qtdNativeId, shape);
    }

    public final void setDirection(QTimeLine.Direction direction) {
        qtd_QTimeLine_setDirection_Direction(qtdNativeId, direction);
    }

    public final void setDuration(int duration) {
        qtd_QTimeLine_setDuration_int(qtdNativeId, duration);
    }

    public final void setEndFrame(int frame) {
        qtd_QTimeLine_setEndFrame_int(qtdNativeId, frame);
    }

    public final void setFrameRange(int startFrame, int endFrame) {
        qtd_QTimeLine_setFrameRange_int_int(qtdNativeId, startFrame, endFrame);
    }

    public final void setLoopCount(int count) {
        qtd_QTimeLine_setLoopCount_int(qtdNativeId, count);
    }

    public final void setPaused(bool paused) {
        qtd_QTimeLine_setPaused_bool(qtdNativeId, paused);
    }

    public final void setStartFrame(int frame) {
        qtd_QTimeLine_setStartFrame_int(qtdNativeId, frame);
    }

    public final void setUpdateInterval(int interval) {
        qtd_QTimeLine_setUpdateInterval_int(qtdNativeId, interval);
    }

    public final void start() {
        qtd_QTimeLine_start(qtdNativeId);
    }

    public final int startFrame() const {
        return qtd_QTimeLine_startFrame_const(qtdNativeId);
    }

    public final QTimeLine.State state() const {
        return cast(QTimeLine.State) qtd_QTimeLine_state_const(qtdNativeId);
    }

    public final void stop() {
        qtd_QTimeLine_stop(qtdNativeId);
    }

    public final void toggleDirection() {
        qtd_QTimeLine_toggleDirection(qtdNativeId);
    }

    public final int updateInterval() const {
        return qtd_QTimeLine_updateInterval_const(qtdNativeId);
    }

    protected void timerEvent(QTimerEvent event) {
        qtd_QTimeLine_timerEvent_QTimerEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public double valueForTime(int msec) const {
        return qtd_QTimeLine_valueForTime_int_const(qtdNativeId, msec);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "resume()", 
            "setCurrentTime(int)", 
            "setPaused(bool)", 
            "start()", 
            "stop()", 
            "toggleDirection()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTimeLine_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTimeLine);
    }

    static QTimeLine __getObject(void* nativeId) {
        return static_cast!(QTimeLine)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTimeLine_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTimeLine_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTimeLine(nativeId, initFlags);
        QTimeLine.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("frameChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QTimeLine.State)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(double)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("resume"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentTime"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setPaused"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("start"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("stop"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("toggleDirection"), index));

    }

    public alias void __isQtType_QTimeLine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTimeLine_finished(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_frameChanged_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QTimeLine_stateChanged_State(void* __this_nativeId,
 int newState0);
private extern(C) void  qtd_QTimeLine_valueChanged_double(void* __this_nativeId,
 double x0);

// C wrappers
private extern(C) void* qtd_QTimeLine_QTimeLine_int_QObject(void *d_ptr,
 int duration0,
 void* parent1);
private extern(C) int  qtd_QTimeLine_currentFrame_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_currentTime_const(void* __this_nativeId);
private extern(C) double  qtd_QTimeLine_currentValue_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_curveShape_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_direction_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_duration_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_endFrame_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_frameForTime_int_const(void* __this_nativeId,
 int msec0);
private extern(C) int  qtd_QTimeLine_loopCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_resume(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_setCurrentTime_int(void* __this_nativeId,
 int msec0);
private extern(C) void  qtd_QTimeLine_setCurveShape_CurveShape(void* __this_nativeId,
 int shape0);
private extern(C) void  qtd_QTimeLine_setDirection_Direction(void* __this_nativeId,
 int direction0);
private extern(C) void  qtd_QTimeLine_setDuration_int(void* __this_nativeId,
 int duration0);
private extern(C) void  qtd_QTimeLine_setEndFrame_int(void* __this_nativeId,
 int frame0);
private extern(C) void  qtd_QTimeLine_setFrameRange_int_int(void* __this_nativeId,
 int startFrame0,
 int endFrame1);
private extern(C) void  qtd_QTimeLine_setLoopCount_int(void* __this_nativeId,
 int count0);
private extern(C) void  qtd_QTimeLine_setPaused_bool(void* __this_nativeId,
 bool paused0);
private extern(C) void  qtd_QTimeLine_setStartFrame_int(void* __this_nativeId,
 int frame0);
private extern(C) void  qtd_QTimeLine_setUpdateInterval_int(void* __this_nativeId,
 int interval0);
private extern(C) void  qtd_QTimeLine_start(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_startFrame_const(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_state_const(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_stop(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_toggleDirection(void* __this_nativeId);
private extern(C) int  qtd_QTimeLine_updateInterval_const(void* __this_nativeId);
private extern(C) void  qtd_QTimeLine_timerEvent_QTimerEvent(void* __this_nativeId,
 void* event0);
private extern(C) double  qtd_QTimeLine_valueForTime_int_const(void* __this_nativeId,
 int msec0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern double function(void *dId, int msec0) qtd_QTimeLine_valueForTime_int_const_dispatch; }
extern(C) double qtd_export_QTimeLine_valueForTime_int_const_dispatch(void *dId, int msec0){
    auto d_object = cast(QTimeLine) dId;
    auto return_value = d_object.valueForTime(msec0);
    return return_value;
}

private extern (C) void qtd_QTimeLine_initCallBacks(void* virtuals);

extern(C) void static_init_QTimeLine() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QTimeLine_valueForTime_int_const_dispatch;
    qtd_QTimeLine_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTimeLine_finished_handle(void* dId, void** args) {
        auto d_object = cast(QTimeLine) dId;
        //d_object.finished_emit();
}*/
/*private extern(C) void qtd_QTimeLine_frameChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeLine) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.frameChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QTimeLine_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeLine) dId;
        auto newState0 = *(cast(QTimeLine.State*)args[1]);
        //d_object.stateChanged_emit(newState0);
}*/
/*private extern(C) void qtd_QTimeLine_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeLine) dId;
        auto x0 = *(cast(double*)args[1]);
        //d_object.valueChanged_emit(x0);
}*/

extern(C) QMetaObjectNative* qtd_QTimeLine_staticMetaObject();

extern(C) void qtd_QTimeLine_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTimeLine_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
