module qt.network.QNetworkInterface;

public import qt.network.QNetworkInterface_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QNetworkAddressEntry;
public import qt.core.QList;
public import qt.network.QHostAddress;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkInterface : QtdObject
{
    public enum InterfaceFlag {
        IsUp = 1,
        IsRunning = 2,
        CanBroadcast = 4,
        IsLoopBack = 8,
        IsPointToPoint = 16,
        CanMulticast = 32
    }

    alias InterfaceFlag.IsUp IsUp;
    alias InterfaceFlag.IsRunning IsRunning;
    alias InterfaceFlag.CanBroadcast CanBroadcast;
    alias InterfaceFlag.IsLoopBack IsLoopBack;
    alias InterfaceFlag.IsPointToPoint IsPointToPoint;
    alias InterfaceFlag.CanMulticast CanMulticast;


// Functions

    public this() {
        void* ret = qtd_QNetworkInterface_QNetworkInterface();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QNetworkInterface) other) {
        void* ret = qtd_QNetworkInterface_QNetworkInterface_QNetworkInterface(other is null ? null : (cast(QNetworkInterface)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QList!(QNetworkAddressEntry) addressEntries() const {
        auto res = QList!(QNetworkAddressEntry).opCall();
        qtd_QNetworkInterface_addressEntries_const(qtdNativeId, &res);
        return res;
    }

    public final int flags() const {
        return qtd_QNetworkInterface_flags_const(qtdNativeId);
    }

    public final string hardwareAddress() const {
        string res;
        qtd_QNetworkInterface_hardwareAddress_const(qtdNativeId, &res);
        return res;
    }

    public final string humanReadableName() const {
        string res;
        qtd_QNetworkInterface_humanReadableName_const(qtdNativeId, &res);
        return res;
    }

    public final int index() const {
        return qtd_QNetworkInterface_index_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QNetworkInterface_isValid_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QNetworkInterface_name_const(qtdNativeId, &res);
        return res;
    }

    public static QList!(QHostAddress) allAddresses() {
        auto res = QList!(QHostAddress).opCall();
        qtd_QNetworkInterface_allAddresses(&res);
        return res;
    }

    public static QList!(QNetworkInterface) allInterfaces() {
        auto res = QList!(QNetworkInterface).opCall();
        qtd_QNetworkInterface_allInterfaces(&res);
        return res;
    }

    public static QNetworkInterface interfaceFromIndex(int index) {
        void* ret = qtd_QNetworkInterface_interfaceFromIndex_int(index);
        QNetworkInterface __d_return_value = new QNetworkInterface(ret);
        return __d_return_value;
    }

    public static QNetworkInterface interfaceFromName(string name) {
        void* ret = qtd_QNetworkInterface_interfaceFromName_string(name);
        QNetworkInterface __d_return_value = new QNetworkInterface(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QNetworkInterface;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QNetworkInterface_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QNetworkInterface_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkInterface_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkInterface_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkInterface_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QNetworkInterface_QTypeInfo_isComplex();
        isStatic = qtd_QNetworkInterface_QTypeInfo_isStatic();
        isLarge = qtd_QNetworkInterface_QTypeInfo_isLarge();
        isPointer = qtd_QNetworkInterface_QTypeInfo_isPointer();
        isDummy = qtd_QNetworkInterface_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QNetworkInterface_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QNetworkInterface_native_copy(const void* orig);
extern (C) void qtd_QNetworkInterface_delete(void *ptr);
extern (C) void qtd_QNetworkInterface_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkInterface_QNetworkInterface();
private extern(C) void* qtd_QNetworkInterface_QNetworkInterface_QNetworkInterface(void* other0);
private extern(C) void  qtd_QNetworkInterface_addressEntries_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QNetworkInterface_flags_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkInterface_hardwareAddress_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QNetworkInterface_humanReadableName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QNetworkInterface_index_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkInterface_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkInterface_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QNetworkInterface_allAddresses(void* __d_return_value);
private extern(C) void  qtd_QNetworkInterface_allInterfaces(void* __d_return_value);
private extern(C) void*  qtd_QNetworkInterface_interfaceFromIndex_int(int index0);
private extern(C) void*  qtd_QNetworkInterface_interfaceFromName_string(string name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QNetworkInterface() {
    QNetworkInterface.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QNetworkInterface_QTypeInfo_isComplex();
private extern (C) bool qtd_QNetworkInterface_QTypeInfo_isStatic();
private extern (C) bool qtd_QNetworkInterface_QTypeInfo_isLarge();
private extern (C) bool qtd_QNetworkInterface_QTypeInfo_isPointer();
private extern (C) bool qtd_QNetworkInterface_QTypeInfo_isDummy();
