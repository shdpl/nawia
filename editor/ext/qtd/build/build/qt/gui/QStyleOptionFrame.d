module qt.gui.QStyleOptionFrame;

public import qt.gui.QStyleOptionFrame_aux;
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


public class QStyleOptionFrame : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 5
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionFrame_QStyleOptionFrame();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionFrame) other) {
        void* ret = qtd_QStyleOptionFrame_QStyleOptionFrame_QStyleOptionFrame(other is null ? null : (cast(QStyleOptionFrame)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionFrame_QStyleOptionFrame_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setLineWidth(int lineWidth) {
        qtd_QStyleOptionFrame_setLineWidth_int(qtdNativeId, lineWidth);
    }

    public final int lineWidth() {
        return qtd_QStyleOptionFrame_lineWidth(qtdNativeId);
    }

    public final void setMidLineWidth(int midLineWidth) {
        qtd_QStyleOptionFrame_setMidLineWidth_int(qtdNativeId, midLineWidth);
    }

    public final int midLineWidth() {
        return qtd_QStyleOptionFrame_midLineWidth(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionFrame;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionFrame_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionFrame_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionFrame_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionFrame_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionFrame_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionFrame_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionFrame_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionFrame_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionFrame_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionFrame_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionFrame_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionFrame_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionFrame_delete(void *ptr);
extern (C) void qtd_QStyleOptionFrame_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionFrame_QStyleOptionFrame();
private extern(C) void* qtd_QStyleOptionFrame_QStyleOptionFrame_QStyleOptionFrame(void* other0);
private extern(C) void* qtd_QStyleOptionFrame_QStyleOptionFrame_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionFrame_setLineWidth_int(void* __this_nativeId,
 int lineWidth0);
private extern(C) int  qtd_QStyleOptionFrame_lineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionFrame_setMidLineWidth_int(void* __this_nativeId,
 int midLineWidth0);
private extern(C) int  qtd_QStyleOptionFrame_midLineWidth(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionFrame_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionFrame() {
    QStyleOptionFrame.QTypeInfo.init();
    qtd_QStyleOptionFrame_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionFrame_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionFrame_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionFrame_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionFrame_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionFrame_QTypeInfo_isDummy();
