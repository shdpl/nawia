module qt.gui.QStyleOptionViewItem;

public import qt.gui.QStyleOptionViewItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QStyleOption;
public import qt.gui.QFont;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionViewItem : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 12
    }

    alias StyleOptionType.Type Type;

    public enum Position {
        Left = 0,
        Right = 1,
        Top = 2,
        Bottom = 3
    }

    alias Position.Left Left;
    alias Position.Right Right;
    alias Position.Top Top;
    alias Position.Bottom Bottom;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionViewItem_QStyleOptionViewItem();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItem) other) {
        void* ret = qtd_QStyleOptionViewItem_QStyleOptionViewItem_QStyleOptionViewItem(other is null ? null : (cast(QStyleOptionViewItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionViewItem_QStyleOptionViewItem_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setShowDecorationSelected(bool showDecorationSelected) {
        qtd_QStyleOptionViewItem_setShowDecorationSelected_bool(qtdNativeId, showDecorationSelected);
    }

    public final bool showDecorationSelected() {
        return qtd_QStyleOptionViewItem_showDecorationSelected(qtdNativeId);
    }

    public final void setDecorationPosition(QStyleOptionViewItem.Position decorationPosition) {
        qtd_QStyleOptionViewItem_setDecorationPosition_Position(qtdNativeId, decorationPosition);
    }

    public final QStyleOptionViewItem.Position decorationPosition() {
        return cast(QStyleOptionViewItem.Position) qtd_QStyleOptionViewItem_decorationPosition(qtdNativeId);
    }

    public final void setDecorationAlignment(int decorationAlignment) {
        qtd_QStyleOptionViewItem_setDecorationAlignment_Alignment(qtdNativeId, decorationAlignment);
    }

    public final int decorationAlignment() {
        return qtd_QStyleOptionViewItem_decorationAlignment(qtdNativeId);
    }

    public final void setDisplayAlignment(int displayAlignment) {
        qtd_QStyleOptionViewItem_setDisplayAlignment_Alignment(qtdNativeId, displayAlignment);
    }

    public final int displayAlignment() {
        return qtd_QStyleOptionViewItem_displayAlignment(qtdNativeId);
    }

    public final void setTextElideMode(Qt.TextElideMode textElideMode) {
        qtd_QStyleOptionViewItem_setTextElideMode_TextElideMode(qtdNativeId, textElideMode);
    }

    public final Qt.TextElideMode textElideMode() {
        return cast(Qt.TextElideMode) qtd_QStyleOptionViewItem_textElideMode(qtdNativeId);
    }

    public final void setDecorationSize(QSize decorationSize) {
        qtd_QStyleOptionViewItem_setDecorationSize_QSize(qtdNativeId, decorationSize);
    }

    public final QSize decorationSize() {
        QSize res;
        qtd_QStyleOptionViewItem_decorationSize(qtdNativeId, &res);
        return res;
    }

    public final void setFont(QFont font) {
        qtd_QStyleOptionViewItem_setFont_QFont(qtdNativeId, font is null ? null : font.qtdNativeId);
    }

    public final QFont font() {
        void* ret = qtd_QStyleOptionViewItem_font(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionViewItem;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionViewItem_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionViewItem_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionViewItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionViewItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionViewItem_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionViewItem_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionViewItem_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionViewItem_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionViewItem_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionViewItem_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionViewItem_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionViewItem_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionViewItem_delete(void *ptr);
extern (C) void qtd_QStyleOptionViewItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionViewItem_QStyleOptionViewItem();
private extern(C) void* qtd_QStyleOptionViewItem_QStyleOptionViewItem_QStyleOptionViewItem(void* other0);
private extern(C) void* qtd_QStyleOptionViewItem_QStyleOptionViewItem_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionViewItem_setShowDecorationSelected_bool(void* __this_nativeId,
 bool showDecorationSelected0);
private extern(C) bool  qtd_QStyleOptionViewItem_showDecorationSelected(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItem_setDecorationPosition_Position(void* __this_nativeId,
 int decorationPosition0);
private extern(C) int  qtd_QStyleOptionViewItem_decorationPosition(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItem_setDecorationAlignment_Alignment(void* __this_nativeId,
 int decorationAlignment0);
private extern(C) int  qtd_QStyleOptionViewItem_decorationAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItem_setDisplayAlignment_Alignment(void* __this_nativeId,
 int displayAlignment0);
private extern(C) int  qtd_QStyleOptionViewItem_displayAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItem_setTextElideMode_TextElideMode(void* __this_nativeId,
 int textElideMode0);
private extern(C) int  qtd_QStyleOptionViewItem_textElideMode(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItem_setDecorationSize_QSize(void* __this_nativeId,
 QSize decorationSize0);
private extern(C) void  qtd_QStyleOptionViewItem_decorationSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionViewItem_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void*  qtd_QStyleOptionViewItem_font(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionViewItem_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionViewItem() {
    QStyleOptionViewItem.QTypeInfo.init();
    qtd_QStyleOptionViewItem_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionViewItem_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionViewItem_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionViewItem_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionViewItem_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionViewItem_QTypeInfo_isDummy();
