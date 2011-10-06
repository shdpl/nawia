module qt.gui.QStyleOptionSpinBox;

public import qt.gui.QStyleOptionSpinBox_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QAbstractSpinBox;
public import qt.gui.QStyleOptionComplex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionSpinBox : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983042
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionSpinBox_QStyleOptionSpinBox();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionSpinBox) other) {
        void* ret = qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_QStyleOptionSpinBox(other is null ? null : (cast(QStyleOptionSpinBox)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setStepEnabled(int stepEnabled) {
        qtd_QStyleOptionSpinBox_setStepEnabled_StepEnabled(qtdNativeId, stepEnabled);
    }

    public final int stepEnabled() {
        return qtd_QStyleOptionSpinBox_stepEnabled(qtdNativeId);
    }

    public final void setButtonSymbols(QAbstractSpinBox.ButtonSymbols buttonSymbols) {
        qtd_QStyleOptionSpinBox_setButtonSymbols_ButtonSymbols(qtdNativeId, buttonSymbols);
    }

    public final QAbstractSpinBox.ButtonSymbols buttonSymbols() {
        return cast(QAbstractSpinBox.ButtonSymbols) qtd_QStyleOptionSpinBox_buttonSymbols(qtdNativeId);
    }

    public final void setFrame(bool frame) {
        qtd_QStyleOptionSpinBox_setFrame_bool(qtdNativeId, frame);
    }

    public final bool frame() {
        return qtd_QStyleOptionSpinBox_frame(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionSpinBox;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionSpinBox_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionSpinBox_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionSpinBox_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionSpinBox_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionSpinBox_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionSpinBox_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionSpinBox_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionSpinBox_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionSpinBox_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionSpinBox_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionSpinBox_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionSpinBox_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionSpinBox_delete(void *ptr);
extern (C) void qtd_QStyleOptionSpinBox_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox();
private extern(C) void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_QStyleOptionSpinBox(void* other0);
private extern(C) void* qtd_QStyleOptionSpinBox_QStyleOptionSpinBox_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionSpinBox_setStepEnabled_StepEnabled(void* __this_nativeId,
 int stepEnabled0);
private extern(C) int  qtd_QStyleOptionSpinBox_stepEnabled(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSpinBox_setButtonSymbols_ButtonSymbols(void* __this_nativeId,
 int buttonSymbols0);
private extern(C) int  qtd_QStyleOptionSpinBox_buttonSymbols(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionSpinBox_setFrame_bool(void* __this_nativeId,
 bool frame0);
private extern(C) bool  qtd_QStyleOptionSpinBox_frame(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionSpinBox_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionSpinBox() {
    QStyleOptionSpinBox.QTypeInfo.init();
    qtd_QStyleOptionSpinBox_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionSpinBox_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionSpinBox_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionSpinBox_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionSpinBox_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionSpinBox_QTypeInfo_isDummy();
