module qt.gui.QStyleOptionTitleBar;

public import qt.gui.QStyleOptionTitleBar_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QIcon;
public import qt.gui.QStyleOptionComplex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionTitleBar : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983046
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionTitleBar_QStyleOptionTitleBar();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTitleBar) other) {
        void* ret = qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_QStyleOptionTitleBar(other is null ? null : (cast(QStyleOptionTitleBar)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setTitleBarFlags(int titleBarFlags) {
        qtd_QStyleOptionTitleBar_setTitleBarFlags_WindowFlags(qtdNativeId, titleBarFlags);
    }

    public final int titleBarFlags() {
        return qtd_QStyleOptionTitleBar_titleBarFlags(qtdNativeId);
    }

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionTitleBar_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionTitleBar_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setText(string text) {
        qtd_QStyleOptionTitleBar_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionTitleBar_text(qtdNativeId, &res);
        return res;
    }

    public final void setTitleBarState(int titleBarState) {
        qtd_QStyleOptionTitleBar_setTitleBarState_int(qtdNativeId, titleBarState);
    }

    public final int titleBarState() {
        return qtd_QStyleOptionTitleBar_titleBarState(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionTitleBar;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionTitleBar_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionTitleBar_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionTitleBar_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionTitleBar_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionTitleBar_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionTitleBar_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionTitleBar_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionTitleBar_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionTitleBar_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionTitleBar_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionTitleBar_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionTitleBar_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionTitleBar_delete(void *ptr);
extern (C) void qtd_QStyleOptionTitleBar_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar();
private extern(C) void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_QStyleOptionTitleBar(void* other0);
private extern(C) void* qtd_QStyleOptionTitleBar_QStyleOptionTitleBar_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionTitleBar_setTitleBarFlags_WindowFlags(void* __this_nativeId,
 int titleBarFlags0);
private extern(C) int  qtd_QStyleOptionTitleBar_titleBarFlags(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTitleBar_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionTitleBar_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTitleBar_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionTitleBar_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionTitleBar_setTitleBarState_int(void* __this_nativeId,
 int titleBarState0);
private extern(C) int  qtd_QStyleOptionTitleBar_titleBarState(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionTitleBar_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionTitleBar() {
    QStyleOptionTitleBar.QTypeInfo.init();
    qtd_QStyleOptionTitleBar_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionTitleBar_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionTitleBar_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionTitleBar_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionTitleBar_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionTitleBar_QTypeInfo_isDummy();
