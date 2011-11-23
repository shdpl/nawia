module qt.gui.QStyleOptionHeader;

public import qt.gui.QStyleOptionHeader_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QStyleOption;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionHeader : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum SectionPosition {
        Beginning = 0,
        Middle = 1,
        End = 2,
        OnlyOneSection = 3
    }

    alias SectionPosition.Beginning Beginning;
    alias SectionPosition.Middle Middle;
    alias SectionPosition.End End;
    alias SectionPosition.OnlyOneSection OnlyOneSection;

    public enum SelectedPosition {
        NotAdjacent = 0,
        NextIsSelected = 1,
        PreviousIsSelected = 2,
        NextAndPreviousAreSelected = 3
    }

    alias SelectedPosition.NotAdjacent NotAdjacent;
    alias SelectedPosition.NextIsSelected NextIsSelected;
    alias SelectedPosition.PreviousIsSelected PreviousIsSelected;
    alias SelectedPosition.NextAndPreviousAreSelected NextAndPreviousAreSelected;

    public enum StyleOptionType {
        Type = 8
    }

    alias StyleOptionType.Type Type;

    public enum SortIndicator {
        None = 0,
        SortUp = 1,
        SortDown = 2
    }

    alias SortIndicator.None None;
    alias SortIndicator.SortUp SortUp;
    alias SortIndicator.SortDown SortDown;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionHeader_QStyleOptionHeader();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionHeader) other) {
        void* ret = qtd_QStyleOptionHeader_QStyleOptionHeader_QStyleOptionHeader(other is null ? null : (cast(QStyleOptionHeader)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionHeader_QStyleOptionHeader_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setSection(int section) {
        qtd_QStyleOptionHeader_setSection_int(qtdNativeId, section);
    }

    public final int section() {
        return qtd_QStyleOptionHeader_section(qtdNativeId);
    }

    public final void setSortIndicator(QStyleOptionHeader.SortIndicator sortIndicator) {
        qtd_QStyleOptionHeader_setSortIndicator_SortIndicator(qtdNativeId, sortIndicator);
    }

    public final QStyleOptionHeader.SortIndicator sortIndicator() {
        return cast(QStyleOptionHeader.SortIndicator) qtd_QStyleOptionHeader_sortIndicator(qtdNativeId);
    }

    public final void setPosition(QStyleOptionHeader.SectionPosition position) {
        qtd_QStyleOptionHeader_setPosition_SectionPosition(qtdNativeId, position);
    }

    public final QStyleOptionHeader.SectionPosition position() {
        return cast(QStyleOptionHeader.SectionPosition) qtd_QStyleOptionHeader_position(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionHeader_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionHeader_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setTextAlignment(int textAlignment) {
        qtd_QStyleOptionHeader_setTextAlignment_Alignment(qtdNativeId, textAlignment);
    }

    public final int textAlignment() {
        return qtd_QStyleOptionHeader_textAlignment(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QStyleOptionHeader_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionHeader_text(qtdNativeId, &res);
        return res;
    }

    public final void setSelectedPosition(QStyleOptionHeader.SelectedPosition selectedPosition) {
        qtd_QStyleOptionHeader_setSelectedPosition_SelectedPosition(qtdNativeId, selectedPosition);
    }

    public final QStyleOptionHeader.SelectedPosition selectedPosition() {
        return cast(QStyleOptionHeader.SelectedPosition) qtd_QStyleOptionHeader_selectedPosition(qtdNativeId);
    }

    public final void setIconAlignment(int iconAlignment) {
        qtd_QStyleOptionHeader_setIconAlignment_Alignment(qtdNativeId, iconAlignment);
    }

    public final int iconAlignment() {
        return qtd_QStyleOptionHeader_iconAlignment(qtdNativeId);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QStyleOptionHeader_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final Qt.Orientation orientation() {
        return cast(Qt.Orientation) qtd_QStyleOptionHeader_orientation(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionHeader;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionHeader_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionHeader_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionHeader_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionHeader_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionHeader_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionHeader_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionHeader_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionHeader_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionHeader_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionHeader_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionHeader_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionHeader_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionHeader_delete(void *ptr);
extern (C) void qtd_QStyleOptionHeader_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionHeader_QStyleOptionHeader();
private extern(C) void* qtd_QStyleOptionHeader_QStyleOptionHeader_QStyleOptionHeader(void* other0);
private extern(C) void* qtd_QStyleOptionHeader_QStyleOptionHeader_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionHeader_setSection_int(void* __this_nativeId,
 int section0);
private extern(C) int  qtd_QStyleOptionHeader_section(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setSortIndicator_SortIndicator(void* __this_nativeId,
 int sortIndicator0);
private extern(C) int  qtd_QStyleOptionHeader_sortIndicator(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setPosition_SectionPosition(void* __this_nativeId,
 int position0);
private extern(C) int  qtd_QStyleOptionHeader_position(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionHeader_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setTextAlignment_Alignment(void* __this_nativeId,
 int textAlignment0);
private extern(C) int  qtd_QStyleOptionHeader_textAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionHeader_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionHeader_setSelectedPosition_SelectedPosition(void* __this_nativeId,
 int selectedPosition0);
private extern(C) int  qtd_QStyleOptionHeader_selectedPosition(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setIconAlignment_Alignment(void* __this_nativeId,
 int iconAlignment0);
private extern(C) int  qtd_QStyleOptionHeader_iconAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionHeader_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) int  qtd_QStyleOptionHeader_orientation(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionHeader_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionHeader() {
    QStyleOptionHeader.QTypeInfo.init();
    qtd_QStyleOptionHeader_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionHeader_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionHeader_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionHeader_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionHeader_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionHeader_QTypeInfo_isDummy();
