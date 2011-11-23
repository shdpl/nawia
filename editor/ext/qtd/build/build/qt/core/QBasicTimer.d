module qt.core.QBasicTimer;

public import qt.core.QBasicTimer_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QBasicTimer : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QBasicTimer_QBasicTimer();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isActive() const {
        return qtd_QBasicTimer_isActive_const(qtdNativeId);
    }

    public final void start(int msec, QObject obj) {
        qtd_QBasicTimer_start_int_QObject(qtdNativeId, msec, obj is null ? null : obj.qtdNativeId);
    }

    public final void stop() {
        qtd_QBasicTimer_stop(qtdNativeId);
    }

    public final int timerId() const {
        return qtd_QBasicTimer_timerId_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QBasicTimer;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QBasicTimer_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QBasicTimer_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QBasicTimer_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QBasicTimer_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QBasicTimer_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QBasicTimer_QTypeInfo_isComplex();
        isStatic = qtd_QBasicTimer_QTypeInfo_isStatic();
        isLarge = qtd_QBasicTimer_QTypeInfo_isLarge();
        isPointer = qtd_QBasicTimer_QTypeInfo_isPointer();
        isDummy = qtd_QBasicTimer_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QBasicTimer_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QBasicTimer_native_copy(const void* orig);
extern (C) void qtd_QBasicTimer_delete(void *ptr);
extern (C) void qtd_QBasicTimer_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBasicTimer_QBasicTimer();
private extern(C) bool  qtd_QBasicTimer_isActive_const(void* __this_nativeId);
private extern(C) void  qtd_QBasicTimer_start_int_QObject(void* __this_nativeId,
 int msec0,
 void* obj1);
private extern(C) void  qtd_QBasicTimer_stop(void* __this_nativeId);
private extern(C) int  qtd_QBasicTimer_timerId_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QBasicTimer() {
    QBasicTimer.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QBasicTimer_QTypeInfo_isComplex();
private extern (C) bool qtd_QBasicTimer_QTypeInfo_isStatic();
private extern (C) bool qtd_QBasicTimer_QTypeInfo_isLarge();
private extern (C) bool qtd_QBasicTimer_QTypeInfo_isPointer();
private extern (C) bool qtd_QBasicTimer_QTypeInfo_isDummy();
