module qt.gui.QStyleOptionMenuItem;

public import qt.gui.QStyleOptionMenuItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;
public import qt.gui.QIcon;
public import qt.gui.QFont;
public import qt.core.QRect;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionMenuItem : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 4
    }

    alias StyleOptionType.Type Type;

    public enum CheckType {
        NotCheckable = 0,
        Exclusive = 1,
        NonExclusive = 2
    }

    alias CheckType.NotCheckable NotCheckable;
    alias CheckType.Exclusive Exclusive;
    alias CheckType.NonExclusive NonExclusive;

    public enum MenuItemType {
        Normal = 0,
        DefaultItem = 1,
        Separator = 2,
        SubMenu = 3,
        Scroller = 4,
        TearOff = 5,
        Margin = 6,
        EmptyArea = 7
    }

    alias MenuItemType.Normal Normal;
    alias MenuItemType.DefaultItem DefaultItem;
    alias MenuItemType.Separator Separator;
    alias MenuItemType.SubMenu SubMenu;
    alias MenuItemType.Scroller Scroller;
    alias MenuItemType.TearOff TearOff;
    alias MenuItemType.Margin Margin;
    alias MenuItemType.EmptyArea EmptyArea;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionMenuItem_QStyleOptionMenuItem();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionMenuItem) other) {
        void* ret = qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_QStyleOptionMenuItem(other is null ? null : (cast(QStyleOptionMenuItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setMenuHasCheckableItems(bool menuHasCheckableItems) {
        qtd_QStyleOptionMenuItem_setMenuHasCheckableItems_bool(qtdNativeId, menuHasCheckableItems);
    }

    public final bool menuHasCheckableItems() {
        return qtd_QStyleOptionMenuItem_menuHasCheckableItems(qtdNativeId);
    }

    public final void setMenuRect(QRect menuRect) {
        qtd_QStyleOptionMenuItem_setMenuRect_QRect(qtdNativeId, menuRect);
    }

    public final QRect menuRect() {
        QRect res;
        qtd_QStyleOptionMenuItem_menuRect(qtdNativeId, &res);
        return res;
    }

    public final void setCheckType(QStyleOptionMenuItem.CheckType checkType) {
        qtd_QStyleOptionMenuItem_setCheckType_CheckType(qtdNativeId, checkType);
    }

    public final QStyleOptionMenuItem.CheckType checkType() {
        return cast(QStyleOptionMenuItem.CheckType) qtd_QStyleOptionMenuItem_checkType(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionMenuItem_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionMenuItem_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setChecked(bool checked) {
        qtd_QStyleOptionMenuItem_setChecked_bool(qtdNativeId, checked);
    }

    public final bool checked() {
        return qtd_QStyleOptionMenuItem_checked(qtdNativeId);
    }

    public final void setMaxIconWidth(int maxIconWidth) {
        qtd_QStyleOptionMenuItem_setMaxIconWidth_int(qtdNativeId, maxIconWidth);
    }

    public final int maxIconWidth() {
        return qtd_QStyleOptionMenuItem_maxIconWidth(qtdNativeId);
    }

    public final void setTabWidth(int tabWidth) {
        qtd_QStyleOptionMenuItem_setTabWidth_int(qtdNativeId, tabWidth);
    }

    public final int tabWidth() {
        return qtd_QStyleOptionMenuItem_tabWidth(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QStyleOptionMenuItem_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionMenuItem_text(qtdNativeId, &res);
        return res;
    }

    public final void setFont(QFont font) {
        qtd_QStyleOptionMenuItem_setFont_QFont(qtdNativeId, font is null ? null : font.qtdNativeId);
    }

    public final QFont font() {
        void* ret = qtd_QStyleOptionMenuItem_font(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final void setMenuItemType(QStyleOptionMenuItem.MenuItemType menuItemType) {
        qtd_QStyleOptionMenuItem_setMenuItemType_MenuItemType(qtdNativeId, menuItemType);
    }

    public final QStyleOptionMenuItem.MenuItemType menuItemType() {
        return cast(QStyleOptionMenuItem.MenuItemType) qtd_QStyleOptionMenuItem_menuItemType(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionMenuItem;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionMenuItem_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionMenuItem_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionMenuItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionMenuItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionMenuItem_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionMenuItem_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionMenuItem_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionMenuItem_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionMenuItem_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionMenuItem_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionMenuItem_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionMenuItem_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionMenuItem_delete(void *ptr);
extern (C) void qtd_QStyleOptionMenuItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem();
private extern(C) void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_QStyleOptionMenuItem(void* other0);
private extern(C) void* qtd_QStyleOptionMenuItem_QStyleOptionMenuItem_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionMenuItem_setMenuHasCheckableItems_bool(void* __this_nativeId,
 bool menuHasCheckableItems0);
private extern(C) bool  qtd_QStyleOptionMenuItem_menuHasCheckableItems(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setMenuRect_QRect(void* __this_nativeId,
 QRect menuRect0);
private extern(C) void  qtd_QStyleOptionMenuItem_menuRect(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QStyleOptionMenuItem_setCheckType_CheckType(void* __this_nativeId,
 int checkType0);
private extern(C) int  qtd_QStyleOptionMenuItem_checkType(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionMenuItem_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setChecked_bool(void* __this_nativeId,
 bool checked0);
private extern(C) bool  qtd_QStyleOptionMenuItem_checked(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setMaxIconWidth_int(void* __this_nativeId,
 int maxIconWidth0);
private extern(C) int  qtd_QStyleOptionMenuItem_maxIconWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setTabWidth_int(void* __this_nativeId,
 int tabWidth0);
private extern(C) int  qtd_QStyleOptionMenuItem_tabWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionMenuItem_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionMenuItem_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void*  qtd_QStyleOptionMenuItem_font(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionMenuItem_setMenuItemType_MenuItemType(void* __this_nativeId,
 int menuItemType0);
private extern(C) int  qtd_QStyleOptionMenuItem_menuItemType(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionMenuItem_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionMenuItem() {
    QStyleOptionMenuItem.QTypeInfo.init();
    qtd_QStyleOptionMenuItem_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionMenuItem_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionMenuItem_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionMenuItem_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionMenuItem_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionMenuItem_QTypeInfo_isDummy();
