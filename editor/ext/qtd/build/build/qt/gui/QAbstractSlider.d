module qt.gui.QAbstractSlider;

public import qt.gui.QAbstractSlider_aux;
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
public import qt.gui.QWheelEvent;
public import qt.gui.QPaintEngine;
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
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
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


public class QAbstractSlider : QWidget
{
    public enum SliderAction {
        SliderNoAction = 0,
        SliderSingleStepAdd = 1,
        SliderSingleStepSub = 2,
        SliderPageStepAdd = 3,
        SliderPageStepSub = 4,
        SliderToMinimum = 5,
        SliderToMaximum = 6,
        SliderMove = 7
    }

    alias SliderAction.SliderNoAction SliderNoAction;
    alias SliderAction.SliderSingleStepAdd SliderSingleStepAdd;
    alias SliderAction.SliderSingleStepSub SliderSingleStepSub;
    alias SliderAction.SliderPageStepAdd SliderPageStepAdd;
    alias SliderAction.SliderPageStepSub SliderPageStepSub;
    alias SliderAction.SliderToMinimum SliderToMinimum;
    alias SliderAction.SliderToMaximum SliderToMaximum;
    alias SliderAction.SliderMove SliderMove;

    public enum SliderChange {
        SliderRangeChange = 0,
        SliderOrientationChange = 1,
        SliderStepsChange = 2,
        SliderValueChange = 3
    }

    alias SliderChange.SliderRangeChange SliderRangeChange;
    alias SliderChange.SliderOrientationChange SliderOrientationChange;
    alias SliderChange.SliderStepsChange SliderStepsChange;
    alias SliderChange.SliderValueChange SliderValueChange;


    private static const string[] __signalSignatures = [
            "actionTriggered(int)", 
            "rangeChanged(int,int)", 
            "sliderMoved(int)", 
            "sliderPressed()", 
            "sliderReleased()", 
            "valueChanged(int)"    ];

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

    protected final void actionTriggered(int action) {
        qtd_QAbstractSlider_actionTriggered_int(qtdNativeId, action);
    }

    protected final void rangeChanged(int min, int max) {
        qtd_QAbstractSlider_rangeChanged_int_int(qtdNativeId, min, max);
    }

    protected final void sliderMoved(int position) {
        qtd_QAbstractSlider_sliderMoved_int(qtdNativeId, position);
    }

    protected final void sliderPressed() {
        qtd_QAbstractSlider_sliderPressed(qtdNativeId);
    }

    protected final void sliderReleased() {
        qtd_QAbstractSlider_sliderReleased(qtdNativeId);
    }

    protected final void valueChanged(int value) {
        qtd_QAbstractSlider_valueChanged_int(qtdNativeId, value);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QAbstractSlider_QAbstractSlider_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool hasTracking() const {
        return qtd_QAbstractSlider_hasTracking_const(qtdNativeId);
    }

    public final bool invertedAppearance() const {
        return qtd_QAbstractSlider_invertedAppearance_const(qtdNativeId);
    }

    public final bool invertedControls() const {
        return qtd_QAbstractSlider_invertedControls_const(qtdNativeId);
    }

    public final bool isSliderDown() const {
        return qtd_QAbstractSlider_isSliderDown_const(qtdNativeId);
    }

    public final int maximum() const {
        return qtd_QAbstractSlider_maximum_const(qtdNativeId);
    }

    public final int minimum() const {
        return qtd_QAbstractSlider_minimum_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QAbstractSlider_orientation_const(qtdNativeId);
    }

    public final int pageStep() const {
        return qtd_QAbstractSlider_pageStep_const(qtdNativeId);
    }

    protected final QAbstractSlider.SliderAction repeatAction() const {
        return cast(QAbstractSlider.SliderAction) qtd_QAbstractSlider_repeatAction_const(qtdNativeId);
    }

    public final void setInvertedAppearance(bool arg__1) {
        qtd_QAbstractSlider_setInvertedAppearance_bool(qtdNativeId, arg__1);
    }

    public final void setInvertedControls(bool arg__1) {
        qtd_QAbstractSlider_setInvertedControls_bool(qtdNativeId, arg__1);
    }

    public final void setMaximum(int arg__1) {
        qtd_QAbstractSlider_setMaximum_int(qtdNativeId, arg__1);
    }

    public final void setMinimum(int arg__1) {
        qtd_QAbstractSlider_setMinimum_int(qtdNativeId, arg__1);
    }

    public final void setOrientation(Qt.Orientation arg__1) {
        qtd_QAbstractSlider_setOrientation_Orientation(qtdNativeId, arg__1);
    }

    public final void setPageStep(int arg__1) {
        qtd_QAbstractSlider_setPageStep_int(qtdNativeId, arg__1);
    }

    public final void setRange(int min, int max) {
        qtd_QAbstractSlider_setRange_int_int(qtdNativeId, min, max);
    }

    protected final void setRepeatAction(QAbstractSlider.SliderAction action, int thresholdTime = 500, int repeatTime = 50) {
        qtd_QAbstractSlider_setRepeatAction_SliderAction_int_int(qtdNativeId, action, thresholdTime, repeatTime);
    }

    public final void setSingleStep(int arg__1) {
        qtd_QAbstractSlider_setSingleStep_int(qtdNativeId, arg__1);
    }

    public final void setSliderDown(bool arg__1) {
        qtd_QAbstractSlider_setSliderDown_bool(qtdNativeId, arg__1);
    }

    public final void setSliderPosition(int arg__1) {
        qtd_QAbstractSlider_setSliderPosition_int(qtdNativeId, arg__1);
    }

    public final void setTracking(bool enable) {
        qtd_QAbstractSlider_setTracking_bool(qtdNativeId, enable);
    }

    public final void setValue(int arg__1) {
        qtd_QAbstractSlider_setValue_int(qtdNativeId, arg__1);
    }

    public final int singleStep() const {
        return qtd_QAbstractSlider_singleStep_const(qtdNativeId);
    }

    public final int sliderPosition() const {
        return qtd_QAbstractSlider_sliderPosition_const(qtdNativeId);
    }

    public final void triggerAction(QAbstractSlider.SliderAction action) {
        qtd_QAbstractSlider_triggerAction_SliderAction(qtdNativeId, action);
    }

    public final int value() const {
        return qtd_QAbstractSlider_value_const(qtdNativeId);
    }

    protected void changeEvent(QEvent e) {
        qtd_QAbstractSlider_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QAbstractSlider_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent ev) {
        qtd_QAbstractSlider_keyPressEvent_QKeyEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void sliderChange(QAbstractSlider.SliderChange change) {
        qtd_QAbstractSlider_sliderChange_SliderChange(qtdNativeId, change);
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QAbstractSlider_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent e) {
        qtd_QAbstractSlider_wheelEvent_QWheelEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setOrientation(Qt::Orientation)", 
            "setValue(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractSlider_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractSlider);
    }

    static QAbstractSlider __getObject(void* nativeId) {
        return static_cast!(QAbstractSlider)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractSlider_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractSlider_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractSlider(nativeId, initFlags);
        QAbstractSlider.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("actionTriggered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("rangeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("sliderMoved"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("sliderPressed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("sliderReleased"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(int)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(Qt.Orientation)("setOrientation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(int)("setValue"), index));

    }

    public alias void __isQtType_QAbstractSlider;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractSlider_actionTriggered_int(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QAbstractSlider_rangeChanged_int_int(void* __this_nativeId,
 int min0,
 int max1);
private extern(C) void  qtd_QAbstractSlider_sliderMoved_int(void* __this_nativeId,
 int position0);
private extern(C) void  qtd_QAbstractSlider_sliderPressed(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSlider_sliderReleased(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSlider_valueChanged_int(void* __this_nativeId,
 int value0);

// C wrappers
private extern(C) void* qtd_QAbstractSlider_QAbstractSlider_QWidget(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QAbstractSlider_hasTracking_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSlider_invertedAppearance_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSlider_invertedControls_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSlider_isSliderDown_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_maximum_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_minimum_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_orientation_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_pageStep_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_repeatAction_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSlider_setInvertedAppearance_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractSlider_setInvertedControls_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractSlider_setMaximum_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setMinimum_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setOrientation_Orientation(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setPageStep_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setRange_int_int(void* __this_nativeId,
 int min0,
 int max1);
private extern(C) void  qtd_QAbstractSlider_setRepeatAction_SliderAction_int_int(void* __this_nativeId,
 int action0,
 int thresholdTime1,
 int repeatTime2);
private extern(C) void  qtd_QAbstractSlider_setSingleStep_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setSliderDown_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QAbstractSlider_setSliderPosition_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSlider_setTracking_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QAbstractSlider_setValue_int(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QAbstractSlider_singleStep_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSlider_sliderPosition_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSlider_triggerAction_SliderAction(void* __this_nativeId,
 int action0);
private extern(C) int  qtd_QAbstractSlider_value_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSlider_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QAbstractSlider_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QAbstractSlider_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QAbstractSlider_sliderChange_SliderChange(void* __this_nativeId,
 int change0);
private extern(C) void  qtd_QAbstractSlider_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractSlider_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int change0) qtd_QAbstractSlider_sliderChange_SliderChange_dispatch; }
extern(C) void qtd_export_QAbstractSlider_sliderChange_SliderChange_dispatch(void *dId, int change0){
    auto d_object = cast(QAbstractSlider) dId;
    auto change0_enum = cast(QAbstractSlider.SliderChange) change0;
    d_object.sliderChange(change0_enum);
}

private extern (C) void qtd_QAbstractSlider_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractSlider() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractSlider_sliderChange_SliderChange_dispatch;
    qtd_QAbstractSlider_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractSlider_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractSlider_actionTriggered_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        auto action0 = *(cast(int*)args[1]);
        //d_object.actionTriggered_emit(action0);
}*/
/*private extern(C) void qtd_QAbstractSlider_rangeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        auto min0 = *(cast(int*)args[1]);
        auto max1 = *(cast(int*)args[2]);
        //d_object.rangeChanged_emit(min0, max1);
}*/
/*private extern(C) void qtd_QAbstractSlider_sliderMoved_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        auto position0 = *(cast(int*)args[1]);
        //d_object.sliderMoved_emit(position0);
}*/
/*private extern(C) void qtd_QAbstractSlider_sliderPressed_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        //d_object.sliderPressed_emit();
}*/
/*private extern(C) void qtd_QAbstractSlider_sliderReleased_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        //d_object.sliderReleased_emit();
}*/
/*private extern(C) void qtd_QAbstractSlider_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSlider) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(value0);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractSlider_staticMetaObject();

extern(C) void qtd_QAbstractSlider_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractSlider_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
