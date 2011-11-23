module qt.gui.QStyleOptionToolBox;

public import qt.gui.QStyleOptionToolBox_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionToolBox : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 7
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionToolBox_QStyleOptionToolBox();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionToolBox) other) {
        void* ret = qtd_QStyleOptionToolBox_QStyleOptionToolBox_QStyleOptionToolBox(other is null ? null : (cast(QStyleOptionToolBox)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionToolBox_QStyleOptionToolBox_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setIcon(QIcon icon) {
        qtd_QStyleOptionToolBox_setIcon_QIcon(qtdNativeId, icon is null ? null : icon.qtdNativeId);
    }

    public final QIcon icon() {
        void* ret = qtd_QStyleOptionToolBox_icon(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final void setText(string text) {
        qtd_QStyleOptionToolBox_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionToolBox_text(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionToolBox;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionToolBox_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionToolBox_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionToolBox_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionToolBox_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionToolBox_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionToolBox_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionToolBox_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionToolBox_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionToolBox_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionToolBox_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionToolBox_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionToolBox_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionToolBox_delete(void *ptr);
extern (C) void qtd_QStyleOptionToolBox_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionToolBox_QStyleOptionToolBox();
private extern(C) void* qtd_QStyleOptionToolBox_QStyleOptionToolBox_QStyleOptionToolBox(void* other0);
private extern(C) void* qtd_QStyleOptionToolBox_QStyleOptionToolBox_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionToolBox_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void*  qtd_QStyleOptionToolBox_icon(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionToolBox_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionToolBox_text(void* __this_nativeId,
 void* __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionToolBox_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionToolBox() {
    QStyleOptionToolBox.QTypeInfo.init();
    qtd_QStyleOptionToolBox_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionToolBox_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionToolBox_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionToolBox_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionToolBox_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionToolBox_QTypeInfo_isDummy();
