module qt.gui.QStyleOptionViewItemV4;

public import qt.gui.QStyleOptionViewItemV4_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QBrush;
public import qt.gui.QStyleOptionViewItemV3;
public import qt.gui.QStyleOptionViewItem;
public import qt.gui.QIcon;
public import qt.core.QModelIndex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionViewItemV4 : QStyleOptionViewItemV3
{
    public enum ViewItemPosition {
        Invalid = 0,
        Beginning = 1,
        Middle = 2,
        End = 3,
        OnlyOne = 4
    }

    alias ViewItemPosition.Invalid Invalid;
    alias ViewItemPosition.Beginning Beginning;
    alias ViewItemPosition.Middle Middle;
    alias ViewItemPosition.End End;
    alias ViewItemPosition.OnlyOne OnlyOne;

    public enum StyleOptionVersion {
        Version = 4
    }

    alias StyleOptionVersion.Version Version;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItem) other) {
        void* ret = qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItem(other is null ? null : (cast(QStyleOptionViewItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItemV4) other) {
        void* ret = qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItemV4(other is null ? null : (cast(QStyleOptionViewItemV4)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setCheckState(Qt.CheckState checkState) {
        qtd_QStyleOptionViewItemV4_setCheckState_CheckState(qtdNativeId, checkState);
    }

    public final Qt.CheckState checkState() {
        return cast(Qt.CheckState) qtd_QStyleOptionViewItemV4_checkState(qtdNativeId);
    }

    public final void setViewItemPosition(QStyleOptionViewItemV4.ViewItemPosition viewItemPosition) {
        qtd_QStyleOptionViewItemV4_setViewItemPosition_ViewItemPosition(qtdNativeId, viewItemPosition);
    }

    public final QStyleOptionViewItemV4.ViewItemPosition viewItemPosition() {
        return cast(QStyleOptionViewItemV4.ViewItemPosition) qtd_QStyleOptionViewItemV4_viewItemPosition(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionViewItemV4_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionViewItemV4_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setBackgroundBrush(QBrush backgroundBrush) {
        qtd_QStyleOptionViewItemV4_setBackgroundBrush_QBrush(qtdNativeId, backgroundBrush is null ? null : backgroundBrush.qtdNativeId);
    }

    public final QBrush backgroundBrush() {
        void* ret = qtd_QStyleOptionViewItemV4_backgroundBrush(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final void setIndex(QModelIndex index) {
        qtd_QStyleOptionViewItemV4_setIndex_QModelIndex(qtdNativeId, index);
    }

    public final QModelIndex index() {
        QModelIndex res;
        qtd_QStyleOptionViewItemV4_index(qtdNativeId, &res);
        return res;
    }

    public final void setText(string text) {
        qtd_QStyleOptionViewItemV4_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionViewItemV4_text(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionViewItemV4;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionViewItemV4_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionViewItemV4_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionViewItemV4_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionViewItemV4_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionViewItemV4_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionViewItemV4_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionViewItemV4_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionViewItemV4_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionViewItemV4_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionViewItemV4_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionViewItemV4_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionViewItemV4_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionViewItemV4_delete(void *ptr);
extern (C) void qtd_QStyleOptionViewItemV4_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4();
private extern(C) void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItem(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_QStyleOptionViewItemV4(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV4_QStyleOptionViewItemV4_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionViewItemV4_setCheckState_CheckState(void* __this_nativeId,
 int checkState0);
private extern(C) int  qtd_QStyleOptionViewItemV4_checkState(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItemV4_setViewItemPosition_ViewItemPosition(void* __this_nativeId,
 int viewItemPosition0);
private extern(C) int  qtd_QStyleOptionViewItemV4_viewItemPosition(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItemV4_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionViewItemV4_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItemV4_setBackgroundBrush_QBrush(void* __this_nativeId,
 void* backgroundBrush0);
private extern(C) void*  qtd_QStyleOptionViewItemV4_backgroundBrush(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItemV4_setIndex_QModelIndex(void* __this_nativeId,
 QModelIndexAccessor index0);
private extern(C) void  qtd_QStyleOptionViewItemV4_index(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) void  qtd_QStyleOptionViewItemV4_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionViewItemV4_text(void* __this_nativeId,
 void* __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionViewItemV4_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionViewItemV4() {
    QStyleOptionViewItemV4.QTypeInfo.init();
    qtd_QStyleOptionViewItemV4_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionViewItemV4_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionViewItemV4_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionViewItemV4_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionViewItemV4_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionViewItemV4_QTypeInfo_isDummy();
