module qt.gui.QStyleOptionSlider;

public import qt.gui.QStyleOptionSlider_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QSlider;
public import qt.gui.QStyleOptionComplex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionSlider : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983041
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionSlider_QStyleOptionSlider();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionSlider) other) {
        void* ret = qtd_QStyleOptionSlider_QStyleOptionSlider_QStyleOptionSlider(other is null ? null : (cast(QStyleOptionSlider)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionSlider_QStyleOptionSlider_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setTickInterval(int tickInterval) {
        qtd_QStyleOptionSlider_setTickInterval_int(qtdNativeId, tickInterval);
    }

    public final int tickInterval() {
        return qtd_QStyleOptionSlider_tickInterval(qtdNativeId);
    }

    public final void setMinimum(int minimum) {
        qtd_QStyleOptionSlider_setMinimum_int(qtdNativeId, minimum);
    }

    public final int minimum() {
        return qtd_QStyleOptionSlider_minimum(qtdNativeId);
    }

    public final void setNotchTarget(double notchTarget) {
        qtd_QStyleOptionSlider_setNotchTarget_double(qtdNativeId, notchTarget);
    }

    public final double notchTarget() {
        return qtd_QStyleOptionSlider_notchTarget(qtdNativeId);
    }

    public final void setMaximum(int maximum) {
        qtd_QStyleOptionSlider_setMaximum_int(qtdNativeId, maximum);
    }

    public final int maximum() {
        return qtd_QStyleOptionSlider_maximum(qtdNativeId);
    }

    public final void setSliderPosition(int sliderPosition) {
        qtd_QStyleOptionSlider_setSliderPosition_int(qtdNativeId, sliderPosition);
    }

    public final int sliderPosition() {
        return qtd_QStyleOptionSlider_sliderPosition(qtdNativeId);
    }

    public final void setDialWrapping(bool dialWrapping) {
        qtd_QStyleOptionSlider_setDialWrapping_bool(qtdNativeId, dialWrapping);
    }

    public final bool dialWrapping() {
        return qtd_QStyleOptionSlider_dialWrapping(qtdNativeId);
    }

    public final void setSliderValue(int sliderValue) {
        qtd_QStyleOptionSlider_setSliderValue_int(qtdNativeId, sliderValue);
    }

    public final int sliderValue() {
        return qtd_QStyleOptionSlider_sliderValue(qtdNativeId);
    }

    public final void setSingleStep(int singleStep) {
        qtd_QStyleOptionSlider_setSingleStep_int(qtdNativeId, singleStep);
    }

    public final int singleStep() {
        return qtd_QStyleOptionSlider_singleStep(qtdNativeId);
    }

    public final void setTickPosition(QSlider.TickPosition tickPosition) {
        qtd_QStyleOptionSlider_setTickPosition_TickPosition(qtdNativeId, tickPosition);
    }

    public final QSlider.TickPosition tickPosition() {
        return cast(QSlider.TickPosition) qtd_QStyleOptionSlider_tickPosition(qtdNativeId);
    }

    public final void setPageStep(int pageStep) {
        qtd_QStyleOptionSlider_setPageStep_int(qtdNativeId, pageStep);
    }

    public final int pageStep() {
        return qtd_QStyleOptionSlider_pageStep(qtdNativeId);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QStyleOptionSlider_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final Qt.Orientation orientation() {
        return cast(Qt.Orientation) qtd_QStyleOptionSlider_orientation(qtdNativeId);
    }

    public final void setUpsideDown(bool upsideDown) {
        qtd_QStyleOptionSlider_setUpsideDown_bool(qtdNativeId, upsideDown);
    }

    public final bool upsideDown() {
        return qtd_QStyleOptionSlider_upsideDown(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionSlider;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionSlider_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionSlider_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionSlider_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionSlider_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionSlider_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionSlider_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionSlider_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionSlider_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionSlider_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionSlider_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionSlider_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionSlider_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionSlider_delete(void *ptr);
extern (C) void qtd_QStyleOptionSlider_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionSlider_QStyleOptionSlider();
private extern(C) void* qtd_QStyleOptionSlider_QStyleOptionSlider_QStyleOptionSlider(void* other0);
private extern(C) void* qtd_QStyleOptionSlider_QStyleOptionSlider_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionSlider_setTickInterval_int(void* __this_nativeId,
 int tickInterval0);
private extern(C) int  qtd_QStyleOptionSlider_tickInterval(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setMinimum_int(void* __this_nativeId,
 int minimum0);
private extern(C) int  qtd_QStyleOptionSlider_minimum(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setNotchTarget_double(void* __this_nativeId,
 double notchTarget0);
private extern(C) double  qtd_QStyleOptionSlider_notchTarget(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setMaximum_int(void* __this_nativeId,
 int maximum0);
private extern(C) int  qtd_QStyleOptionSlider_maximum(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setSliderPosition_int(void* __this_nativeId,
 int sliderPosition0);
private extern(C) int  qtd_QStyleOptionSlider_sliderPosition(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setDialWrapping_bool(void* __this_nativeId,
 bool dialWrapping0);
private extern(C) bool  qtd_QStyleOptionSlider_dialWrapping(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setSliderValue_int(void* __this_nativeId,
 int sliderValue0);
private extern(C) int  qtd_QStyleOptionSlider_sliderValue(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setSingleStep_int(void* __this_nativeId,
 int singleStep0);
private extern(C) int  qtd_QStyleOptionSlider_singleStep(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setTickPosition_TickPosition(void* __this_nativeId,
 int tickPosition0);
private extern(C) int  qtd_QStyleOptionSlider_tickPosition(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setPageStep_int(void* __this_nativeId,
 int pageStep0);
private extern(C) int  qtd_QStyleOptionSlider_pageStep(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QStyleOptionSlider_orientation(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSlider_setUpsideDown_bool(void* __this_nativeId,
 bool upsideDown0);
private extern(C) bool  qtd_QStyleOptionSlider_upsideDown(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionSlider_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionSlider() {
    QStyleOptionSlider.QTypeInfo.init();
    qtd_QStyleOptionSlider_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionSlider_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionSlider_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionSlider_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionSlider_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionSlider_QTypeInfo_isDummy();
