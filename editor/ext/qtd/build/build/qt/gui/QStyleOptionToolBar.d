module qt.gui.QStyleOptionToolBar;

public import qt.gui.QStyleOptionToolBar_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionToolBar : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 16
    }

    alias StyleOptionType.Type Type;

    public enum ToolBarPosition {
        Beginning = 0,
        Middle = 1,
        End = 2,
        OnlyOne = 3
    }

    alias ToolBarPosition.Beginning Beginning;
    alias ToolBarPosition.Middle Middle;
    alias ToolBarPosition.End End;
    alias ToolBarPosition.OnlyOne OnlyOne;

    public enum ToolBarFeature {
        None = 0,
        Movable = 1
    }

    alias ToolBarFeature.None None;
    alias ToolBarFeature.Movable Movable;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionToolBar_QStyleOptionToolBar();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionToolBar) other) {
        void* ret = qtd_QStyleOptionToolBar_QStyleOptionToolBar_QStyleOptionToolBar(other is null ? null : (cast(QStyleOptionToolBar)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionToolBar_QStyleOptionToolBar_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setLineWidth(int lineWidth) {
        qtd_QStyleOptionToolBar_setLineWidth_int(qtdNativeId, lineWidth);
    }

    public final int lineWidth() {
        return qtd_QStyleOptionToolBar_lineWidth(qtdNativeId);
    }

    public final void setPositionWithinLine(QStyleOptionToolBar.ToolBarPosition positionWithinLine) {
        qtd_QStyleOptionToolBar_setPositionWithinLine_ToolBarPosition(qtdNativeId, positionWithinLine);
    }

    public final QStyleOptionToolBar.ToolBarPosition positionWithinLine() {
        return cast(QStyleOptionToolBar.ToolBarPosition) qtd_QStyleOptionToolBar_positionWithinLine(qtdNativeId);
    }

    public final void setPositionOfLine(QStyleOptionToolBar.ToolBarPosition positionOfLine) {
        qtd_QStyleOptionToolBar_setPositionOfLine_ToolBarPosition(qtdNativeId, positionOfLine);
    }

    public final QStyleOptionToolBar.ToolBarPosition positionOfLine() {
        return cast(QStyleOptionToolBar.ToolBarPosition) qtd_QStyleOptionToolBar_positionOfLine(qtdNativeId);
    }

    public final void setFeatures(int features) {
        qtd_QStyleOptionToolBar_setFeatures_ToolBarFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionToolBar_features(qtdNativeId);
    }

    public final void setToolBarArea(Qt.ToolBarArea toolBarArea) {
        qtd_QStyleOptionToolBar_setToolBarArea_ToolBarArea(qtdNativeId, toolBarArea);
    }

    public final Qt.ToolBarArea toolBarArea() {
        return cast(Qt.ToolBarArea) qtd_QStyleOptionToolBar_toolBarArea(qtdNativeId);
    }

    public final void setMidLineWidth(int midLineWidth) {
        qtd_QStyleOptionToolBar_setMidLineWidth_int(qtdNativeId, midLineWidth);
    }

    public final int midLineWidth() {
        return qtd_QStyleOptionToolBar_midLineWidth(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionToolBar;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionToolBar_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionToolBar_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionToolBar_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionToolBar_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionToolBar_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionToolBar_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionToolBar_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionToolBar_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionToolBar_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionToolBar_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionToolBar_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionToolBar_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionToolBar_delete(void *ptr);
extern (C) void qtd_QStyleOptionToolBar_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionToolBar_QStyleOptionToolBar();
private extern(C) void* qtd_QStyleOptionToolBar_QStyleOptionToolBar_QStyleOptionToolBar(void* other0);
private extern(C) void* qtd_QStyleOptionToolBar_QStyleOptionToolBar_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionToolBar_setLineWidth_int(void* __this_nativeId,
 int lineWidth0);
private extern(C) int  qtd_QStyleOptionToolBar_lineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBar_setPositionWithinLine_ToolBarPosition(void* __this_nativeId,
 int positionWithinLine0);
private extern(C) int  qtd_QStyleOptionToolBar_positionWithinLine(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBar_setPositionOfLine_ToolBarPosition(void* __this_nativeId,
 int positionOfLine0);
private extern(C) int  qtd_QStyleOptionToolBar_positionOfLine(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBar_setFeatures_ToolBarFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionToolBar_features(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBar_setToolBarArea_ToolBarArea(void* __this_nativeId,
 int toolBarArea0);
private extern(C) int  qtd_QStyleOptionToolBar_toolBarArea(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBar_setMidLineWidth_int(void* __this_nativeId,
 int midLineWidth0);
private extern(C) int  qtd_QStyleOptionToolBar_midLineWidth(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionToolBar_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionToolBar() {
    QStyleOptionToolBar.QTypeInfo.init();
    qtd_QStyleOptionToolBar_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionToolBar_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionToolBar_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionToolBar_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionToolBar_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionToolBar_QTypeInfo_isDummy();
