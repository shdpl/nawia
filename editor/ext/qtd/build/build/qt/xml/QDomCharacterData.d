module qt.xml.QDomCharacterData;

public import qt.xml.QDomCharacterData_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomCharacterData : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomCharacterData_QDomCharacterData();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomCharacterData) x) {
        void* ret = qtd_QDomCharacterData_QDomCharacterData_QDomCharacterData(x is null ? null : (cast(QDomCharacterData)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void appendData(string arg) {
        qtd_QDomCharacterData_appendData_string(qtdNativeId, arg);
    }

    public final string data() const {
        string res;
        qtd_QDomCharacterData_data_const(qtdNativeId, &res);
        return res;
    }

    public final void deleteData(uint offset, uint count) {
        qtd_QDomCharacterData_deleteData_uint_uint(qtdNativeId, offset, count);
    }

    public final void insertData(uint offset, string arg) {
        qtd_QDomCharacterData_insertData_uint_string(qtdNativeId, offset, arg);
    }

    public final uint length() const {
        return qtd_QDomCharacterData_length_const(qtdNativeId);
    }

    public final void replaceData(uint offset, uint count, string arg) {
        qtd_QDomCharacterData_replaceData_uint_uint_string(qtdNativeId, offset, count, arg);
    }

    public final void setData(string arg__1) {
        qtd_QDomCharacterData_setData_string(qtdNativeId, arg__1);
    }

    public final string substringData(uint offset, uint count) {
        string res;
        qtd_QDomCharacterData_substringData_uint_uint(qtdNativeId, &res, offset, count);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomCharacterData;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomCharacterData_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomCharacterData_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomCharacterData_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomCharacterData_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomCharacterData_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomCharacterData_QTypeInfo_isComplex();
        isStatic = qtd_QDomCharacterData_QTypeInfo_isStatic();
        isLarge = qtd_QDomCharacterData_QTypeInfo_isLarge();
        isPointer = qtd_QDomCharacterData_QTypeInfo_isPointer();
        isDummy = qtd_QDomCharacterData_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomCharacterData_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomCharacterData_native_copy(const void* orig);
extern (C) void qtd_QDomCharacterData_delete(void *ptr);
extern (C) void qtd_QDomCharacterData_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomCharacterData_QDomCharacterData();
private extern(C) void* qtd_QDomCharacterData_QDomCharacterData_QDomCharacterData(void* x0);
private extern(C) void  qtd_QDomCharacterData_appendData_string(void* __this_nativeId,
 string arg0);
private extern(C) void  qtd_QDomCharacterData_data_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomCharacterData_deleteData_uint_uint(void* __this_nativeId,
 uint offset0,
 uint count1);
private extern(C) void  qtd_QDomCharacterData_insertData_uint_string(void* __this_nativeId,
 uint offset0,
 string arg1);
private extern(C) uint  qtd_QDomCharacterData_length_const(void* __this_nativeId);
private extern(C) void  qtd_QDomCharacterData_replaceData_uint_uint_string(void* __this_nativeId,
 uint offset0,
 uint count1,
 string arg2);
private extern(C) void  qtd_QDomCharacterData_setData_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QDomCharacterData_substringData_uint_uint(void* __this_nativeId,
 void* __d_return_value,
 uint offset0,
 uint count1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomCharacterData() {
    QDomCharacterData.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomCharacterData_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomCharacterData_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomCharacterData_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomCharacterData_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomCharacterData_QTypeInfo_isDummy();
