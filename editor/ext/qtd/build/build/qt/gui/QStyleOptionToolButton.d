module qt.gui.QStyleOptionToolButton;

public import qt.gui.QStyleOptionToolButton_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QIcon;
public import qt.gui.QFont;
public import qt.gui.QStyleOptionComplex;
public import qt.core.QSize;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionToolButton : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum ToolButtonFeature {
        None = 0,
        Arrow = 1,
        Menu = 4,
        PopupDelay = 8,
        HasMenu = 16
    }

    alias ToolButtonFeature.None None;
    alias ToolButtonFeature.Arrow Arrow;
    alias ToolButtonFeature.Menu Menu;
    alias ToolButtonFeature.PopupDelay PopupDelay;
    alias ToolButtonFeature.HasMenu HasMenu;

    public enum StyleOptionType {
        Type = 983043
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionToolButton_QStyleOptionToolButton();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionToolButton) other) {
        void* ret = qtd_QStyleOptionToolButton_QStyleOptionToolButton_QStyleOptionToolButton(other is null ? null : (cast(QStyleOptionToolButton)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionToolButton_QStyleOptionToolButton_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setIconSize(QSize iconSize) {
        qtd_QStyleOptionToolButton_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final QSize iconSize() {
        QSize res;
        qtd_QStyleOptionToolButton_iconSize(qtdNativeId, &res);
        return res;
    }

    public final void setToolButtonStyle(Qt.ToolButtonStyle toolButtonStyle) {
        qtd_QStyleOptionToolButton_setToolButtonStyle_ToolButtonStyle(qtdNativeId, toolButtonStyle);
    }

    public final Qt.ToolButtonStyle toolButtonStyle() {
        return cast(Qt.ToolButtonStyle) qtd_QStyleOptionToolButton_toolButtonStyle(qtdNativeId);
    }

    public final void setFeatures(int features) {
        qtd_QStyleOptionToolButton_setFeatures_ToolButtonFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionToolButton_features(qtdNativeId);
    }

    public final void setArrowType(Qt.ArrowType arrowType) {
        qtd_QStyleOptionToolButton_setArrowType_ArrowType(qtdNativeId, arrowType);
    }

    public final Qt.ArrowType arrowType() {
        return cast(Qt.ArrowType) qtd_QStyleOptionToolButton_arrowType(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionToolButton_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionToolButton_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setPos(QPoint pos) {
        qtd_QStyleOptionToolButton_setPos_QPoint(qtdNativeId, pos);
    }

    public final QPoint pos() {
        QPoint res;
        qtd_QStyleOptionToolButton_pos(qtdNativeId, &res);
        return res;
    }

    public final void setText(string text) {
        qtd_QStyleOptionToolButton_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionToolButton_text(qtdNativeId, &res);
        return res;
    }

    public final void setFont(QFont font) {
        qtd_QStyleOptionToolButton_setFont_QFont(qtdNativeId, font is null ? null : font.qtdNativeId);
    }

    public final QFont font() {
        void* ret = qtd_QStyleOptionToolButton_font(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionToolButton;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionToolButton_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionToolButton_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionToolButton_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionToolButton_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionToolButton_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionToolButton_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionToolButton_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionToolButton_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionToolButton_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionToolButton_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionToolButton_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionToolButton_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionToolButton_delete(void *ptr);
extern (C) void qtd_QStyleOptionToolButton_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionToolButton_QStyleOptionToolButton();
private extern(C) void* qtd_QStyleOptionToolButton_QStyleOptionToolButton_QStyleOptionToolButton(void* other0);
private extern(C) void* qtd_QStyleOptionToolButton_QStyleOptionToolButton_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionToolButton_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QStyleOptionToolButton_iconSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionToolButton_setToolButtonStyle_ToolButtonStyle(void* __this_nativeId,
 int toolButtonStyle0);
private extern(C) int  qtd_QStyleOptionToolButton_toolButtonStyle(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolButton_setFeatures_ToolButtonFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionToolButton_features(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolButton_setArrowType_ArrowType(void* __this_nativeId,
 int arrowType0);
private extern(C) int  qtd_QStyleOptionToolButton_arrowType(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolButton_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionToolButton_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolButton_setPos_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QStyleOptionToolButton_pos(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QStyleOptionToolButton_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionToolButton_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionToolButton_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void*  qtd_QStyleOptionToolButton_font(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionToolButton_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionToolButton() {
    QStyleOptionToolButton.QTypeInfo.init();
    qtd_QStyleOptionToolButton_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionToolButton_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionToolButton_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionToolButton_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionToolButton_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionToolButton_QTypeInfo_isDummy();
