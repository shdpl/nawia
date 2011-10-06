module qt.gui.QStyleOptionTab;

public import qt.gui.QStyleOptionTab_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTabBar;
public import qt.gui.QStyleOption;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionTab : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum CornerWidget {
        NoCornerWidgets = 0,
        LeftCornerWidget = 1,
        RightCornerWidget = 2
    }

    alias CornerWidget.NoCornerWidgets NoCornerWidgets;
    alias CornerWidget.LeftCornerWidget LeftCornerWidget;
    alias CornerWidget.RightCornerWidget RightCornerWidget;

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

    public enum StyleOptionType {
        Type = 3
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionTab_QStyleOptionTab();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTab) other) {
        void* ret = qtd_QStyleOptionTab_QStyleOptionTab_QStyleOptionTab(other is null ? null : (cast(QStyleOptionTab)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionTab_QStyleOptionTab_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setRow(int row) {
        qtd_QStyleOptionTab_setRow_int(qtdNativeId, row);
    }

    public final int row() {
        return qtd_QStyleOptionTab_row(qtdNativeId);
    }

    public final void setCornerWidgets(int cornerWidgets) {
        qtd_QStyleOptionTab_setCornerWidgets_CornerWidgets(qtdNativeId, cornerWidgets);
    }

    public final int cornerWidgets() {
        return qtd_QStyleOptionTab_cornerWidgets(qtdNativeId);
    }

    public final void setPosition(QStyleOptionTab.TabPosition position) {
        qtd_QStyleOptionTab_setPosition_TabPosition(qtdNativeId, position);
    }

    public final QStyleOptionTab.TabPosition position() {
        return cast(QStyleOptionTab.TabPosition) qtd_QStyleOptionTab_position(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionTab_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionTab_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setShape(QTabBar.Shape shape) {
        qtd_QStyleOptionTab_setShape_Shape(qtdNativeId, shape);
    }

    public final QTabBar.Shape shape() {
        return cast(QTabBar.Shape) qtd_QStyleOptionTab_shape(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QStyleOptionTab_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionTab_text(qtdNativeId, &res);
        return res;
    }

    public final void setSelectedPosition(QStyleOptionTab.SelectedPosition selectedPosition) {
        qtd_QStyleOptionTab_setSelectedPosition_SelectedPosition(qtdNativeId, selectedPosition);
    }

    public final QStyleOptionTab.SelectedPosition selectedPosition() {
        return cast(QStyleOptionTab.SelectedPosition) qtd_QStyleOptionTab_selectedPosition(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionTab;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionTab_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionTab_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionTab_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionTab_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionTab_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionTab_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionTab_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionTab_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionTab_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionTab_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionTab_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionTab_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionTab_delete(void *ptr);
extern (C) void qtd_QStyleOptionTab_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionTab_QStyleOptionTab();
private extern(C) void* qtd_QStyleOptionTab_QStyleOptionTab_QStyleOptionTab(void* other0);
private extern(C) void* qtd_QStyleOptionTab_QStyleOptionTab_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionTab_setRow_int(void* __this_nativeId,
 int row0);
private extern(C) int  qtd_QStyleOptionTab_row(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTab_setCornerWidgets_CornerWidgets(void* __this_nativeId,
 int cornerWidgets0);
private extern(C) int  qtd_QStyleOptionTab_cornerWidgets(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTab_setPosition_TabPosition(void* __this_nativeId,
 int position0);
private extern(C) int  qtd_QStyleOptionTab_position(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTab_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionTab_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTab_setShape_Shape(void* __this_nativeId,
 int shape0);
private extern(C) int  qtd_QStyleOptionTab_shape(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTab_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionTab_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionTab_setSelectedPosition_SelectedPosition(void* __this_nativeId,
 int selectedPosition0);
private extern(C) int  qtd_QStyleOptionTab_selectedPosition(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionTab_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionTab() {
    QStyleOptionTab.QTypeInfo.init();
    qtd_QStyleOptionTab_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionTab_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionTab_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionTab_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionTab_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionTab_QTypeInfo_isDummy();
