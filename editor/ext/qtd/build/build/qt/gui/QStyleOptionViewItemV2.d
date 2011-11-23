module qt.gui.QStyleOptionViewItemV2;

public import qt.gui.QStyleOptionViewItemV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOptionViewItem;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionViewItemV2 : QStyleOptionViewItem
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;

    public enum ViewItemFeature {
        None = 0,
        WrapText = 1,
        Alternate = 2,
        HasCheckIndicator = 4,
        HasDisplay = 8,
        HasDecoration = 16
    }

    alias ViewItemFeature.None None;
    alias ViewItemFeature.WrapText WrapText;
    alias ViewItemFeature.Alternate Alternate;
    alias ViewItemFeature.HasCheckIndicator HasCheckIndicator;
    alias ViewItemFeature.HasDisplay HasDisplay;
    alias ViewItemFeature.HasDecoration HasDecoration;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItem) other) {
        void* ret = qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItem(other is null ? null : (cast(QStyleOptionViewItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItemV2) other) {
        void* ret = qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItemV2(other is null ? null : (cast(QStyleOptionViewItemV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setFeatures(int features) {
        qtd_QStyleOptionViewItemV2_setFeatures_ViewItemFeatures(qtdNativeId, features);
    }

    public final int features() {
        return qtd_QStyleOptionViewItemV2_features(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionViewItemV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionViewItemV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionViewItemV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionViewItemV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionViewItemV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionViewItemV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionViewItemV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionViewItemV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionViewItemV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionViewItemV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionViewItemV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionViewItemV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionViewItemV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionViewItemV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionViewItemV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2();
private extern(C) void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItem(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_QStyleOptionViewItemV2(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV2_QStyleOptionViewItemV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionViewItemV2_setFeatures_ViewItemFeatures(void* __this_nativeId,
 int features0);
private extern(C) int  qtd_QStyleOptionViewItemV2_features(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionViewItemV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionViewItemV2() {
    QStyleOptionViewItemV2.QTypeInfo.init();
    qtd_QStyleOptionViewItemV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionViewItemV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionViewItemV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionViewItemV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionViewItemV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionViewItemV2_QTypeInfo_isDummy();
