module qt.gui.QGradient;

public import qt.gui.QGradient_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QColor;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QGradient : QtdObject
{
    public enum CoordinateMode {
        LogicalMode = 0,
        StretchToDeviceMode = 1,
        ObjectBoundingMode = 2
    }

    alias CoordinateMode.LogicalMode LogicalMode;
    alias CoordinateMode.StretchToDeviceMode StretchToDeviceMode;
    alias CoordinateMode.ObjectBoundingMode ObjectBoundingMode;

    public enum Spread {
        PadSpread = 0,
        ReflectSpread = 1,
        RepeatSpread = 2
    }

    alias Spread.PadSpread PadSpread;
    alias Spread.ReflectSpread ReflectSpread;
    alias Spread.RepeatSpread RepeatSpread;

    public enum Type {
        LinearGradient = 0,
        RadialGradient = 1,
        ConicalGradient = 2,
        NoGradient = 3
    }

    alias Type.LinearGradient LinearGradient;
    alias Type.RadialGradient RadialGradient;
    alias Type.ConicalGradient ConicalGradient;
    alias Type.NoGradient NoGradient;


// Functions

    public this() {
        void* ret = qtd_QGradient_QGradient();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QGradient.CoordinateMode coordinateMode() const {
        return cast(QGradient.CoordinateMode) qtd_QGradient_coordinateMode_const(qtdNativeId);
    }

    private final bool operator_equal(const(QGradient) gradient) const {
        return qtd_QGradient_operator_equal_QGradient_const(qtdNativeId, (cast(QGradient)gradient).qtdNativeId);
    }

    public final void setColorAt(double pos, const(QColor) color) {
        qtd_QGradient_setColorAt_double_QColor(qtdNativeId, pos, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setCoordinateMode(QGradient.CoordinateMode mode) {
        qtd_QGradient_setCoordinateMode_CoordinateMode(qtdNativeId, mode);
    }

    public final void setSpread(QGradient.Spread spread) {
        qtd_QGradient_setSpread_Spread(qtdNativeId, spread);
    }

    public final QGradient.Spread spread() const {
        return cast(QGradient.Spread) qtd_QGradient_spread_const(qtdNativeId);
    }

    public final QGradient.Type type() const {
        return cast(QGradient.Type) qtd_QGradient_type_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QGradient;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QGradient_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QGradient_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGradient_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGradient_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGradient_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QGradient_QTypeInfo_isComplex();
        isStatic = qtd_QGradient_QTypeInfo_isStatic();
        isLarge = qtd_QGradient_QTypeInfo_isLarge();
        isPointer = qtd_QGradient_QTypeInfo_isPointer();
        isDummy = qtd_QGradient_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QGradient_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QGradient_native_copy(const void* orig);
extern (C) void qtd_QGradient_delete(void *ptr);
extern (C) void qtd_QGradient_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGradient_QGradient();
private extern(C) int  qtd_QGradient_coordinateMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QGradient_operator_equal_QGradient_const(void* __this_nativeId,
 void* gradient0);
private extern(C) void  qtd_QGradient_setColorAt_double_QColor(void* __this_nativeId,
 double pos0,
 void* color1);
private extern(C) void  qtd_QGradient_setCoordinateMode_CoordinateMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QGradient_setSpread_Spread(void* __this_nativeId,
 int spread0);
private extern(C) int  qtd_QGradient_spread_const(void* __this_nativeId);
private extern(C) int  qtd_QGradient_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QGradient() {
    QGradient.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QGradient_QTypeInfo_isComplex();
private extern (C) bool qtd_QGradient_QTypeInfo_isStatic();
private extern (C) bool qtd_QGradient_QTypeInfo_isLarge();
private extern (C) bool qtd_QGradient_QTypeInfo_isPointer();
private extern (C) bool qtd_QGradient_QTypeInfo_isDummy();
