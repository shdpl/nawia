module qt.gui.QStyleOptionToolBoxV2;

public import qt.gui.QStyleOptionToolBoxV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOptionToolBox;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionToolBoxV2 : QStyleOptionToolBox
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;

    public enum TabPosition {
        Beginning = 0,
        Middle = 1,
        End = 2,
        OnlyOneTab = 3
    }

    alias TabPosition.Beginning Beginning;
    alias TabPosition.Middle Middle;
    alias TabPosition.End End;
    alias TabPosition.OnlyOneTab OnlyOneTab;

    public enum SelectedPosition {
        NotAdjacent = 0,
        NextIsSelected = 1,
        PreviousIsSelected = 2
    }

    alias SelectedPosition.NotAdjacent NotAdjacent;
    alias SelectedPosition.NextIsSelected NextIsSelected;
    alias SelectedPosition.PreviousIsSelected PreviousIsSelected;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionToolBox) other) {
        void* ret = qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBox(other is null ? null : (cast(QStyleOptionToolBox)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionToolBoxV2) other) {
        void* ret = qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2(other is null ? null : (cast(QStyleOptionToolBoxV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setPosition(QStyleOptionToolBoxV2.TabPosition position) {
        qtd_QStyleOptionToolBoxV2_setPosition_TabPosition(qtdNativeId, position);
    }

    public final QStyleOptionToolBoxV2.TabPosition position() {
        return cast(QStyleOptionToolBoxV2.TabPosition) qtd_QStyleOptionToolBoxV2_position(qtdNativeId);
    }

    public final void setSelectedPosition(QStyleOptionToolBoxV2.SelectedPosition selectedPosition) {
        qtd_QStyleOptionToolBoxV2_setSelectedPosition_SelectedPosition(qtdNativeId, selectedPosition);
    }

    public final QStyleOptionToolBoxV2.SelectedPosition selectedPosition() {
        return cast(QStyleOptionToolBoxV2.SelectedPosition) qtd_QStyleOptionToolBoxV2_selectedPosition(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionToolBoxV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionToolBoxV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionToolBoxV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionToolBoxV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionToolBoxV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionToolBoxV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionToolBoxV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionToolBoxV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionToolBoxV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionToolBoxV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionToolBoxV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionToolBoxV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionToolBoxV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionToolBoxV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionToolBoxV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2();
private extern(C) void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBox(void* other0);
private extern(C) void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2(void* other0);
private extern(C) void* qtd_QStyleOptionToolBoxV2_QStyleOptionToolBoxV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionToolBoxV2_setPosition_TabPosition(void* __this_nativeId,
 int position0);
private extern(C) int  qtd_QStyleOptionToolBoxV2_position(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBoxV2_setSelectedPosition_SelectedPosition(void* __this_nativeId,
 int selectedPosition0);
private extern(C) int  qtd_QStyleOptionToolBoxV2_selectedPosition(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionToolBoxV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionToolBoxV2() {
    QStyleOptionToolBoxV2.QTypeInfo.init();
    qtd_QStyleOptionToolBoxV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionToolBoxV2_QTypeInfo_isDummy();
