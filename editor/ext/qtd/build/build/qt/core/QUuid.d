module qt.core.QUuid;

public import qt.core.QUuid_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUuid : QtdObject
{
    public enum Variant {
        VarUnknown = -1,
        NCS = 0,
        DCE = 2,
        Microsoft = 6,
        Reserved = 7
    }

    alias Variant.VarUnknown VarUnknown;
    alias Variant.NCS NCS;
    alias Variant.DCE DCE;
    alias Variant.Microsoft Microsoft;
    alias Variant.Reserved Reserved;

    public enum Version {
        VerUnknown = -1,
        Time = 1,
        EmbeddedPOSIX = 2,
        Name = 3,
        Random = 4
    }

    alias Version.VerUnknown VerUnknown;
    alias Version.Time Time;
    alias Version.EmbeddedPOSIX EmbeddedPOSIX;
    alias Version.Name Name;
    alias Version.Random Random;


// Functions

    public this() {
        void* ret = qtd_QUuid_QUuid();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string arg__1) {
        void* ret = qtd_QUuid_QUuid_string(arg__1);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isNull() const {
        return qtd_QUuid_isNull_const(qtdNativeId);
    }

    private final bool operator_less(const(QUuid) other) const {
        return qtd_QUuid_operator_less_QUuid_const(qtdNativeId, other is null ? null : (cast(QUuid)other).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QUuid_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QUuid) orig) const {
        return qtd_QUuid_operator_equal_QUuid_const(qtdNativeId, orig is null ? null : (cast(QUuid)orig).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QUuid_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final string toString() const {
        string res;
        qtd_QUuid_toString_const(qtdNativeId, &res);
        return res;
    }

    public final QUuid.Variant variant() const {
        return cast(QUuid.Variant) qtd_QUuid_variant_const(qtdNativeId);
    }

    public final QUuid.Version version() const {
        return cast(QUuid.Version) qtd_QUuid_version_const(qtdNativeId);
    }

    public static QUuid createUuid() {
        void* ret = qtd_QUuid_createUuid();
        QUuid __d_return_value = new QUuid(ret);
        return __d_return_value;
    }
// Field accessors

    public final void setData1(uint data1) {
        qtd_QUuid_setData1_uint(qtdNativeId, data1);
    }

    public final uint data1() {
        return qtd_QUuid_data1(qtdNativeId);
    }

    public final void setData4(ubyte[] data4) {
        qtd_QUuid_setData4_ubyte_3(qtdNativeId, data4.ptr);
    }

    public final ubyte[] data4() {
        ubyte* ret = qtd_QUuid_data4(qtdNativeId);
        ubyte[] __d_return_value = ret[0 .. 8];
        return __d_return_value;
    }
    public alias void __isValueType;

    public alias void __isQtType_QUuid;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QUuid_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QUuid_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QUuid_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QUuid_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QUuid_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QUuid_QTypeInfo_isComplex();
        isStatic = qtd_QUuid_QTypeInfo_isStatic();
        isLarge = qtd_QUuid_QTypeInfo_isLarge();
        isPointer = qtd_QUuid_QTypeInfo_isPointer();
        isDummy = qtd_QUuid_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QUuid_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QUuid_native_copy(const void* orig);
extern (C) void qtd_QUuid_delete(void *ptr);
extern (C) void qtd_QUuid_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUuid_QUuid();
private extern(C) void* qtd_QUuid_QUuid_string(string arg__1);
private extern(C) bool  qtd_QUuid_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QUuid_operator_less_QUuid_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QUuid_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QUuid_operator_equal_QUuid_const(void* __this_nativeId,
 void* orig0);
private extern(C) void  qtd_QUuid_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QUuid_toString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QUuid_variant_const(void* __this_nativeId);
private extern(C) int  qtd_QUuid_version_const(void* __this_nativeId);
private extern(C) void*  qtd_QUuid_createUuid();
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QUuid_setData1_uint(void* __this_nativeId,
 uint data10);
private extern(C) uint  qtd_QUuid_data1(void* __this_nativeId);
private extern(C) void  qtd_QUuid_setData4_ubyte_3(void* __this_nativeId,
 ubyte* data40);
private extern(C) ubyte*  qtd_QUuid_data4(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QUuid_initCallBacks(void* virtuals);

extern(C) void static_init_QUuid() {
    QUuid.QTypeInfo.init();
    qtd_QUuid_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QUuid_QTypeInfo_isComplex();
private extern (C) bool qtd_QUuid_QTypeInfo_isStatic();
private extern (C) bool qtd_QUuid_QTypeInfo_isLarge();
private extern (C) bool qtd_QUuid_QTypeInfo_isPointer();
private extern (C) bool qtd_QUuid_QTypeInfo_isDummy();
