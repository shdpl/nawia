module qt.gui.QStyleOptionProgressBarV2;

public import qt.gui.QStyleOptionProgressBarV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QStyleOptionProgressBar;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionProgressBarV2 : QStyleOptionProgressBar
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 6
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionProgressBar) other) {
        void* ret = qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBar(other is null ? null : (cast(QStyleOptionProgressBar)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionProgressBarV2) other) {
        void* ret = qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2(other is null ? null : (cast(QStyleOptionProgressBarV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setBottomToTop(bool bottomToTop) {
        qtd_QStyleOptionProgressBarV2_setBottomToTop_bool(qtdNativeId, bottomToTop);
    }

    public final bool bottomToTop() {
        return qtd_QStyleOptionProgressBarV2_bottomToTop(qtdNativeId);
    }

    public final void setInvertedAppearance(bool invertedAppearance) {
        qtd_QStyleOptionProgressBarV2_setInvertedAppearance_bool(qtdNativeId, invertedAppearance);
    }

    public final bool invertedAppearance() {
        return qtd_QStyleOptionProgressBarV2_invertedAppearance(qtdNativeId);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QStyleOptionProgressBarV2_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final Qt.Orientation orientation() {
        return cast(Qt.Orientation) qtd_QStyleOptionProgressBarV2_orientation(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionProgressBarV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionProgressBarV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionProgressBarV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionProgressBarV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionProgressBarV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionProgressBarV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionProgressBarV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionProgressBarV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionProgressBarV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionProgressBarV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionProgressBarV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionProgressBarV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionProgressBarV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionProgressBarV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionProgressBarV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2();
private extern(C) void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBar(void* other0);
private extern(C) void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2(void* other0);
private extern(C) void* qtd_QStyleOptionProgressBarV2_QStyleOptionProgressBarV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionProgressBarV2_setBottomToTop_bool(void* __this_nativeId,
 bool bottomToTop0);
private extern(C) bool  qtd_QStyleOptionProgressBarV2_bottomToTop(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBarV2_setInvertedAppearance_bool(void* __this_nativeId,
 bool invertedAppearance0);
private extern(C) bool  qtd_QStyleOptionProgressBarV2_invertedAppearance(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBarV2_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QStyleOptionProgressBarV2_orientation(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionProgressBarV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionProgressBarV2() {
    QStyleOptionProgressBarV2.QTypeInfo.init();
    qtd_QStyleOptionProgressBarV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionProgressBarV2_QTypeInfo_isDummy();
