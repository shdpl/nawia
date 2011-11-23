module qt.gui.QStyleOptionProgressBar;

public import qt.gui.QStyleOptionProgressBar_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionProgressBar : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 6
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionProgressBar_QStyleOptionProgressBar();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionProgressBar) other) {
        void* ret = qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_QStyleOptionProgressBar(other is null ? null : (cast(QStyleOptionProgressBar)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setMinimum(int minimum) {
        qtd_QStyleOptionProgressBar_setMinimum_int(qtdNativeId, minimum);
    }

    public final int minimum() {
        return qtd_QStyleOptionProgressBar_minimum(qtdNativeId);
    }

    public final void setMaximum(int maximum) {
        qtd_QStyleOptionProgressBar_setMaximum_int(qtdNativeId, maximum);
    }

    public final int maximum() {
        return qtd_QStyleOptionProgressBar_maximum(qtdNativeId);
    }

    public final void setProgress(int progress) {
        qtd_QStyleOptionProgressBar_setProgress_int(qtdNativeId, progress);
    }

    public final int progress() {
        return qtd_QStyleOptionProgressBar_progress(qtdNativeId);
    }

    public final void setTextAlignment(int textAlignment) {
        qtd_QStyleOptionProgressBar_setTextAlignment_Alignment(qtdNativeId, textAlignment);
    }

    public final int textAlignment() {
        return qtd_QStyleOptionProgressBar_textAlignment(qtdNativeId);
    }

    public final void setText(string text) {
        qtd_QStyleOptionProgressBar_setText_string(qtdNativeId, text);
    }

    public final string text() {
        string res;
        qtd_QStyleOptionProgressBar_text(qtdNativeId, &res);
        return res;
    }

    public final void setTextVisible(bool textVisible) {
        qtd_QStyleOptionProgressBar_setTextVisible_bool(qtdNativeId, textVisible);
    }

    public final bool textVisible() {
        return qtd_QStyleOptionProgressBar_textVisible(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionProgressBar;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionProgressBar_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionProgressBar_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionProgressBar_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionProgressBar_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionProgressBar_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionProgressBar_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionProgressBar_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionProgressBar_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionProgressBar_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionProgressBar_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionProgressBar_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionProgressBar_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionProgressBar_delete(void *ptr);
extern (C) void qtd_QStyleOptionProgressBar_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar();
private extern(C) void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_QStyleOptionProgressBar(void* other0);
private extern(C) void* qtd_QStyleOptionProgressBar_QStyleOptionProgressBar_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionProgressBar_setMinimum_int(void* __this_nativeId,
 int minimum0);
private extern(C) int  qtd_QStyleOptionProgressBar_minimum(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBar_setMaximum_int(void* __this_nativeId,
 int maximum0);
private extern(C) int  qtd_QStyleOptionProgressBar_maximum(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBar_setProgress_int(void* __this_nativeId,
 int progress0);
private extern(C) int  qtd_QStyleOptionProgressBar_progress(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBar_setTextAlignment_Alignment(void* __this_nativeId,
 int textAlignment0);
private extern(C) int  qtd_QStyleOptionProgressBar_textAlignment(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionProgressBar_setText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QStyleOptionProgressBar_text(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionProgressBar_setTextVisible_bool(void* __this_nativeId,
 bool textVisible0);
private extern(C) bool  qtd_QStyleOptionProgressBar_textVisible(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionProgressBar_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionProgressBar() {
    QStyleOptionProgressBar.QTypeInfo.init();
    qtd_QStyleOptionProgressBar_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionProgressBar_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionProgressBar_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionProgressBar_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionProgressBar_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionProgressBar_QTypeInfo_isDummy();
