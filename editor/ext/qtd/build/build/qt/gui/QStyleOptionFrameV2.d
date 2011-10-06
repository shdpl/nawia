module qt.gui.QStyleOptionFrameV2;

public import qt.gui.QStyleOptionFrameV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOptionFrame;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionFrameV2 : QStyleOptionFrame
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;

    public enum FrameFeature {
        None = 0,
        Flat = 1
    }

    alias FrameFeature.None None;
    alias FrameFeature.Flat Flat;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionFrameV2_QStyleOptionFrameV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionFrame) other) {
        void* ret = qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrame(other is null ? null : (cast(QStyleOptionFrame)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionFrameV2) other) {
        void* ret = qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrameV2(other is null ? null : (cast(QStyleOptionFrameV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setFeatures(int features) {
        qtd_QStyleOptionFrameV2_setFeatures_FrameFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionFrameV2_features(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionFrameV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionFrameV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionFrameV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionFrameV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionFrameV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionFrameV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionFrameV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionFrameV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionFrameV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionFrameV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionFrameV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionFrameV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionFrameV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionFrameV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionFrameV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2();
private extern(C) void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrame(void* other0);
private extern(C) void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_QStyleOptionFrameV2(void* other0);
private extern(C) void* qtd_QStyleOptionFrameV2_QStyleOptionFrameV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionFrameV2_setFeatures_FrameFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionFrameV2_features(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionFrameV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionFrameV2() {
    QStyleOptionFrameV2.QTypeInfo.init();
    qtd_QStyleOptionFrameV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionFrameV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionFrameV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionFrameV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionFrameV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionFrameV2_QTypeInfo_isDummy();
