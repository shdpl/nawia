module qt.gui.QStyleOptionButton;

public import qt.gui.QStyleOptionButton_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;
public import qt.gui.QIcon;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionButton : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum ButtonFeature {
        None = 0,
        Flat = 1,
        HasMenu = 2,
        DefaultButton = 4,
        AutoDefaultButton = 8,
        CommandLinkButton = 16
    }

    alias ButtonFeature.None None;
    alias ButtonFeature.Flat Flat;
    alias ButtonFeature.HasMenu HasMenu;
    alias ButtonFeature.DefaultButton DefaultButton;
    alias ButtonFeature.AutoDefaultButton AutoDefaultButton;
    alias ButtonFeature.CommandLinkButton CommandLinkButton;

    public enum StyleOptionType {
        Type = 2
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionButton_QStyleOptionButton();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionButton) other) {
        void* ret = qtd_QStyleOptionButton_QStyleOptionButton_QStyleOptionButton(other is null ? null : (cast(QStyleOptionButton)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionButton_QStyleOptionButton_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setIconSize(QSize iconSize) {
        qtd_QStyleOptionButton_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final QSize iconSize() {
        QSize res;
        qtd_QStyleOptionButton_iconSize(qtdNativeId, &res);
        return res;
    }

    public final void setFeatures(int features) {
        qtd_QStyleOptionButton_setFeatures_ButtonFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionButton_features(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionButton_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionButton_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setText(string text) {
        qtd_QStyleOptionButton_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionButton_text(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionButton;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionButton_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionButton_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionButton_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionButton_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionButton_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionButton_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionButton_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionButton_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionButton_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionButton_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionButton_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionButton_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionButton_delete(void *ptr);
extern (C) void qtd_QStyleOptionButton_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionButton_QStyleOptionButton();
private extern(C) void* qtd_QStyleOptionButton_QStyleOptionButton_QStyleOptionButton(void* other0);
private extern(C) void* qtd_QStyleOptionButton_QStyleOptionButton_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionButton_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QStyleOptionButton_iconSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionButton_setFeatures_ButtonFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionButton_features(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionButton_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionButton_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionButton_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionButton_text(void* __this_nativeId,
 void* __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionButton_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionButton() {
    QStyleOptionButton.QTypeInfo.init();
    qtd_QStyleOptionButton_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionButton_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionButton_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionButton_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionButton_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionButton_QTypeInfo_isDummy();
