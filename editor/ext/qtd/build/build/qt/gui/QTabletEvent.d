module qt.gui.QTabletEvent;

public import qt.gui.QTabletEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.gui.QInputEvent;
public import qt.core.QPointF;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTabletEvent : QInputEvent
{
    public enum TabletDevice {
        NoDevice = 0,
        Puck = 1,
        Stylus = 2,
        Airbrush = 3,
        FourDMouse = 4,
        XFreeEraser = 5,
        RotationStylus = 6
    }

    alias TabletDevice.NoDevice NoDevice;
    alias TabletDevice.Puck Puck;
    alias TabletDevice.Stylus Stylus;
    alias TabletDevice.Airbrush Airbrush;
    alias TabletDevice.FourDMouse FourDMouse;
    alias TabletDevice.XFreeEraser XFreeEraser;
    alias TabletDevice.RotationStylus RotationStylus;

    public enum PointerType {
        UnknownPointer = 0,
        Pen = 1,
        Cursor = 2,
        Eraser = 3
    }

    alias PointerType.UnknownPointer UnknownPointer;
    alias PointerType.Pen Pen;
    alias PointerType.Cursor Cursor;
    alias PointerType.Eraser Eraser;


// Functions

    public this(QEvent.Type t, const(QPoint) pos, const(QPoint) globalPos, const(QPointF) hiResGlobalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long uniqueID) {
        void* ret = qtd_QTabletEvent_QTabletEvent_Type_QPoint_QPoint_QPointF_int_int_double_int_int_double_double_int_KeyboardModifiers_long(cast(void*) this, t, pos, globalPos, hiResGlobalPos, device, pointerType, pressure, xTilt, yTilt, tangentialPressure, rotation, z, keyState, uniqueID);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTabletEvent.TabletDevice device() const {
        return cast(QTabletEvent.TabletDevice) qtd_QTabletEvent_device_const(qtdNativeId);
    }

    public final const(QPoint) globalPos() const {
        QPoint res;
        qtd_QTabletEvent_globalPos_const(qtdNativeId, &res);
        return res;
    }

    public final int globalX() const {
        return qtd_QTabletEvent_globalX_const(qtdNativeId);
    }

    public final int globalY() const {
        return qtd_QTabletEvent_globalY_const(qtdNativeId);
    }

    public final const(QPointF) hiResGlobalPos() const {
        QPointF res;
        qtd_QTabletEvent_hiResGlobalPos_const(qtdNativeId, &res);
        return res;
    }

    public final double hiResGlobalX() const {
        return qtd_QTabletEvent_hiResGlobalX_const(qtdNativeId);
    }

    public final double hiResGlobalY() const {
        return qtd_QTabletEvent_hiResGlobalY_const(qtdNativeId);
    }

    public final QTabletEvent.PointerType pointerType() const {
        return cast(QTabletEvent.PointerType) qtd_QTabletEvent_pointerType_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QTabletEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final double pressure() const {
        return qtd_QTabletEvent_pressure_const(qtdNativeId);
    }

    public final double rotation() const {
        return qtd_QTabletEvent_rotation_const(qtdNativeId);
    }

    public final double tangentialPressure() const {
        return qtd_QTabletEvent_tangentialPressure_const(qtdNativeId);
    }

    public final long uniqueId() const {
        return qtd_QTabletEvent_uniqueId_const(qtdNativeId);
    }

    public final int x() const {
        return qtd_QTabletEvent_x_const(qtdNativeId);
    }

    public final int xTilt() const {
        return qtd_QTabletEvent_xTilt_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QTabletEvent_y_const(qtdNativeId);
    }

    public final int yTilt() const {
        return qtd_QTabletEvent_yTilt_const(qtdNativeId);
    }

    public final int z() const {
        return qtd_QTabletEvent_z_const(qtdNativeId);
    }
// Field accessors

    protected final void setMYT(int mYT) {
        qtd_QTabletEvent_setMYT_int(qtdNativeId, mYT);
    }

    protected final int mYT() {
        return qtd_QTabletEvent_mYT(qtdNativeId);
    }

    protected final void setMGPos(QPoint mGPos) {
        qtd_QTabletEvent_setMGPos_QPoint(qtdNativeId, mGPos);
    }

    protected final QPoint mGPos() {
        QPoint res;
        qtd_QTabletEvent_mGPos(qtdNativeId, &res);
        return res;
    }

    protected final void setMXT(int mXT) {
        qtd_QTabletEvent_setMXT_int(qtdNativeId, mXT);
    }

    protected final int mXT() {
        return qtd_QTabletEvent_mXT(qtdNativeId);
    }

    protected final void setMUnique(long mUnique) {
        qtd_QTabletEvent_setMUnique_long(qtdNativeId, mUnique);
    }

    protected final long mUnique() {
        return qtd_QTabletEvent_mUnique(qtdNativeId);
    }

    protected final void setMTangential(double mTangential) {
        qtd_QTabletEvent_setMTangential_double(qtdNativeId, mTangential);
    }

    protected final double mTangential() {
        return qtd_QTabletEvent_mTangential(qtdNativeId);
    }

    protected final void setMPointerType(int mPointerType) {
        qtd_QTabletEvent_setMPointerType_int(qtdNativeId, mPointerType);
    }

    protected final int mPointerType() {
        return qtd_QTabletEvent_mPointerType(qtdNativeId);
    }

    protected final void setMHiResGlobalPos(QPointF mHiResGlobalPos) {
        qtd_QTabletEvent_setMHiResGlobalPos_QPointF(qtdNativeId, mHiResGlobalPos);
    }

    protected final QPointF mHiResGlobalPos() {
        QPointF res;
        qtd_QTabletEvent_mHiResGlobalPos(qtdNativeId, &res);
        return res;
    }

    protected final void setMPos(QPoint mPos) {
        qtd_QTabletEvent_setMPos_QPoint(qtdNativeId, mPos);
    }

    protected final QPoint mPos() {
        QPoint res;
        qtd_QTabletEvent_mPos(qtdNativeId, &res);
        return res;
    }

    protected final void setMPress(double mPress) {
        qtd_QTabletEvent_setMPress_double(qtdNativeId, mPress);
    }

    protected final double mPress() {
        return qtd_QTabletEvent_mPress(qtdNativeId);
    }

    protected final void setMDev(int mDev) {
        qtd_QTabletEvent_setMDev_int(qtdNativeId, mDev);
    }

    protected final int mDev() {
        return qtd_QTabletEvent_mDev(qtdNativeId);
    }

    protected final void setMRot(double mRot) {
        qtd_QTabletEvent_setMRot_double(qtdNativeId, mRot);
    }

    protected final double mRot() {
        return qtd_QTabletEvent_mRot(qtdNativeId);
    }

    protected final void setMZ(int mZ) {
        qtd_QTabletEvent_setMZ_int(qtdNativeId, mZ);
    }

    protected final int mZ() {
        return qtd_QTabletEvent_mZ(qtdNativeId);
    }
    static QTabletEvent __getObject(void* nativeId) {
        return qtd_QTabletEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QTabletEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QTabletEvent_entity(void *q_ptr);

QTabletEvent qtd_QTabletEvent_from_ptr(void* ret) {
    auto return_value = new QTabletEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTabletEvent_QTabletEvent_Type_QPoint_QPoint_QPointF_int_int_double_int_int_double_double_int_KeyboardModifiers_long(void *d_ptr,
 int t0,
 QPoint pos1,
 QPoint globalPos2,
 QPointF hiResGlobalPos3,
 int device4,
 int pointerType5,
 double pressure6,
 int xTilt7,
 int yTilt8,
 double tangentialPressure9,
 double rotation10,
 int z11,
 int keyState12,
 long uniqueID13);
private extern(C) int  qtd_QTabletEvent_device_const(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_globalPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QTabletEvent_globalX_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_globalY_const(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_hiResGlobalPos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) double  qtd_QTabletEvent_hiResGlobalX_const(void* __this_nativeId);
private extern(C) double  qtd_QTabletEvent_hiResGlobalY_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_pointerType_const(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) double  qtd_QTabletEvent_pressure_const(void* __this_nativeId);
private extern(C) double  qtd_QTabletEvent_rotation_const(void* __this_nativeId);
private extern(C) double  qtd_QTabletEvent_tangentialPressure_const(void* __this_nativeId);
private extern(C) long  qtd_QTabletEvent_uniqueId_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_x_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_xTilt_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_y_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_yTilt_const(void* __this_nativeId);
private extern(C) int  qtd_QTabletEvent_z_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTabletEvent_setMYT_int(void* __this_nativeId,
 int mYT0);
private extern(C) int  qtd_QTabletEvent_mYT(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMGPos_QPoint(void* __this_nativeId,
 QPoint mGPos0);
private extern(C) void  qtd_QTabletEvent_mGPos(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QTabletEvent_setMXT_int(void* __this_nativeId,
 int mXT0);
private extern(C) int  qtd_QTabletEvent_mXT(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMUnique_long(void* __this_nativeId,
 long mUnique0);
private extern(C) long  qtd_QTabletEvent_mUnique(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMTangential_double(void* __this_nativeId,
 double mTangential0);
private extern(C) double  qtd_QTabletEvent_mTangential(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMPointerType_int(void* __this_nativeId,
 int mPointerType0);
private extern(C) int  qtd_QTabletEvent_mPointerType(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMHiResGlobalPos_QPointF(void* __this_nativeId,
 QPointF mHiResGlobalPos0);
private extern(C) void  qtd_QTabletEvent_mHiResGlobalPos(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QTabletEvent_setMPos_QPoint(void* __this_nativeId,
 QPoint mPos0);
private extern(C) void  qtd_QTabletEvent_mPos(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QTabletEvent_setMPress_double(void* __this_nativeId,
 double mPress0);
private extern(C) double  qtd_QTabletEvent_mPress(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMDev_int(void* __this_nativeId,
 int mDev0);
private extern(C) int  qtd_QTabletEvent_mDev(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMRot_double(void* __this_nativeId,
 double mRot0);
private extern(C) double  qtd_QTabletEvent_mRot(void* __this_nativeId);
private extern(C) void  qtd_QTabletEvent_setMZ_int(void* __this_nativeId,
 int mZ0);
private extern(C) int  qtd_QTabletEvent_mZ(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTabletEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QTabletEvent() {
    qtd_QTabletEvent_initCallBacks(null);
}

// signal handlers

