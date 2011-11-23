#include <QVariant>

#include "QTabletEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTabletEvent_QtDShell::QTabletEvent_QtDShell(void *d_ptr, QEvent::Type  t0, const QPoint&  pos1, const QPoint&  globalPos2, const QPointF&  hiResGlobalPos3, int  device4, int  pointerType5, double  pressure6, int  xTilt7, int  yTilt8, double  tangentialPressure9, double  rotation10, int  z11, Qt::KeyboardModifiers  keyState12, qint64  uniqueID13)
    : QTabletEvent(t0, pos1, globalPos2, hiResGlobalPos3, device4, pointerType5, pressure6, xTilt7, yTilt8, tangentialPressure9, rotation10, z11, keyState12, uniqueID13),
      QtdObjectLink(d_ptr)
{
}

QTabletEvent_QtDShell::~QTabletEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTabletEvent::QTabletEvent(QEvent::Type t, const QPoint & pos, const QPoint & globalPos, const QPointF & hiResGlobalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, QFlags<Qt::KeyboardModifier> keyState, qint64 uniqueID)
QTD_EXTERN QTD_EXPORT void* qtd_QTabletEvent_QTabletEvent_Type_QPoint_QPoint_QPointF_int_int_double_int_int_double_double_int_KeyboardModifiers_long
(void *d_ptr,
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
 qint64 uniqueID13)
{
    QEvent::Type __qt_t0 = (QEvent::Type) t0;
    QFlags<Qt::KeyboardModifier> __qt_keyState12 = (QFlags<Qt::KeyboardModifier>) keyState12;
    QTabletEvent_QtDShell *__qt_this = new QTabletEvent_QtDShell(d_ptr, (QEvent::Type )__qt_t0, (const QPoint& )pos1, (const QPoint& )globalPos2, (const QPointF& )hiResGlobalPos3, (int )device4, (int )pointerType5, (double )pressure6, (int )xTilt7, (int )yTilt8, (double )tangentialPressure9, (double )rotation10, (int )z11, (Qt::KeyboardModifiers )__qt_keyState12, (qint64 )uniqueID13);
    return (void *) __qt_this;

}

// QTabletEvent::device() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_device_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->device();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::globalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_globalPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->globalPos();

    *__d_return_value = __qt_return_value;

}

// QTabletEvent::globalX() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_globalX_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::globalY() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_globalY_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->globalY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::hiResGlobalPos() const
QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_hiResGlobalPos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    const QPointF&  __qt_return_value = __qt_this->hiResGlobalPos();

    *__d_return_value = __qt_return_value;

}

// QTabletEvent::hiResGlobalX() const
QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_hiResGlobalX_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->hiResGlobalX();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::hiResGlobalY() const
QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_hiResGlobalY_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->hiResGlobalY();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::pointerType() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_pointerType_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pointerType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    const QPoint&  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QTabletEvent::pressure() const
QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_pressure_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->pressure();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::rotation() const
QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_rotation_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rotation();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::tangentialPressure() const
QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_tangentialPressure_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->tangentialPressure();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::uniqueId() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QTabletEvent_uniqueId_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->uniqueId();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::x() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_x_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::xTilt() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_xTilt_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->xTilt();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::y() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_y_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::yTilt() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_yTilt_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->yTilt();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabletEvent::z() const
QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_z_const
(void* __this_nativeId)
{
    QTabletEvent_QtDShell *__qt_this = (QTabletEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->z();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
int  QTabletEvent_QtDShell::mYT_getter()
{
    return mYT;
}

QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_mYT
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    int __tmp_mYT = __qt_object->mYT_getter();
    int __d_return_value = __tmp_mYT;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMYT_setter(int  mYT0)
{
    this->mYT = mYT0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMYT_int
(void* __this_nativeId,
 int mYT0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMYT_setter(mYT0);
}

QPoint  QTabletEvent_QtDShell::mGPos_getter()
{
    return mGPos;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_mGPos
(void* __this_nativeId,
 QPoint * __d_return_value){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_mGPos = __qt_object->mGPos_getter();
    *__d_return_value = __tmp_mGPos;
}

void QTabletEvent_QtDShell::setMGPos_setter(QPoint  mGPos0)
{
    this->mGPos = mGPos0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMGPos_QPoint
(void* __this_nativeId,
 QPoint mGPos0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMGPos_setter(mGPos0);
}

int  QTabletEvent_QtDShell::mXT_getter()
{
    return mXT;
}

QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_mXT
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    int __tmp_mXT = __qt_object->mXT_getter();
    int __d_return_value = __tmp_mXT;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMXT_setter(int  mXT0)
{
    this->mXT = mXT0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMXT_int
(void* __this_nativeId,
 int mXT0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMXT_setter(mXT0);
}

qint64  QTabletEvent_QtDShell::mUnique_getter()
{
    return mUnique;
}

QTD_EXTERN QTD_EXPORT qint64 qtd_QTabletEvent_mUnique
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    qint64 __tmp_mUnique = __qt_object->mUnique_getter();
    qint64 __d_return_value = __tmp_mUnique;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMUnique_setter(qint64  mUnique0)
{
    this->mUnique = mUnique0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMUnique_long
(void* __this_nativeId,
 qint64 mUnique0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMUnique_setter(mUnique0);
}

double  QTabletEvent_QtDShell::mTangential_getter()
{
    return mTangential;
}

QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_mTangential
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    double __tmp_mTangential = __qt_object->mTangential_getter();
    double __d_return_value = __tmp_mTangential;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMTangential_setter(double  mTangential0)
{
    this->mTangential = mTangential0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMTangential_double
(void* __this_nativeId,
 double mTangential0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMTangential_setter(mTangential0);
}

int  QTabletEvent_QtDShell::mPointerType_getter()
{
    return mPointerType;
}

QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_mPointerType
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    int __tmp_mPointerType = __qt_object->mPointerType_getter();
    int __d_return_value = __tmp_mPointerType;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMPointerType_setter(int  mPointerType0)
{
    this->mPointerType = mPointerType0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMPointerType_int
(void* __this_nativeId,
 int mPointerType0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMPointerType_setter(mPointerType0);
}

QPointF  QTabletEvent_QtDShell::mHiResGlobalPos_getter()
{
    return mHiResGlobalPos;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_mHiResGlobalPos
(void* __this_nativeId,
 QPointF * __d_return_value){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    QPointF __tmp_mHiResGlobalPos = __qt_object->mHiResGlobalPos_getter();
    *__d_return_value = __tmp_mHiResGlobalPos;
}

void QTabletEvent_QtDShell::setMHiResGlobalPos_setter(QPointF  mHiResGlobalPos0)
{
    this->mHiResGlobalPos = mHiResGlobalPos0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMHiResGlobalPos_QPointF
(void* __this_nativeId,
 QPointF mHiResGlobalPos0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMHiResGlobalPos_setter(mHiResGlobalPos0);
}

QPoint  QTabletEvent_QtDShell::mPos_getter()
{
    return mPos;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_mPos
(void* __this_nativeId,
 QPoint * __d_return_value){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    QPoint __tmp_mPos = __qt_object->mPos_getter();
    *__d_return_value = __tmp_mPos;
}

void QTabletEvent_QtDShell::setMPos_setter(QPoint  mPos0)
{
    this->mPos = mPos0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMPos_QPoint
(void* __this_nativeId,
 QPoint mPos0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMPos_setter(mPos0);
}

double  QTabletEvent_QtDShell::mPress_getter()
{
    return mPress;
}

QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_mPress
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    double __tmp_mPress = __qt_object->mPress_getter();
    double __d_return_value = __tmp_mPress;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMPress_setter(double  mPress0)
{
    this->mPress = mPress0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMPress_double
(void* __this_nativeId,
 double mPress0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMPress_setter(mPress0);
}

int  QTabletEvent_QtDShell::mDev_getter()
{
    return mDev;
}

QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_mDev
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    int __tmp_mDev = __qt_object->mDev_getter();
    int __d_return_value = __tmp_mDev;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMDev_setter(int  mDev0)
{
    this->mDev = mDev0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMDev_int
(void* __this_nativeId,
 int mDev0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMDev_setter(mDev0);
}

double  QTabletEvent_QtDShell::mRot_getter()
{
    return mRot;
}

QTD_EXTERN QTD_EXPORT double qtd_QTabletEvent_mRot
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    double __tmp_mRot = __qt_object->mRot_getter();
    double __d_return_value = __tmp_mRot;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMRot_setter(double  mRot0)
{
    this->mRot = mRot0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMRot_double
(void* __this_nativeId,
 double mRot0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMRot_setter(mRot0);
}

int  QTabletEvent_QtDShell::mZ_getter()
{
    return mZ;
}

QTD_EXTERN QTD_EXPORT int qtd_QTabletEvent_mZ
(void* __this_nativeId){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    int __tmp_mZ = __qt_object->mZ_getter();
    int __d_return_value = __tmp_mZ;
    return __d_return_value;
}

void QTabletEvent_QtDShell::setMZ_setter(int  mZ0)
{
    this->mZ = mZ0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTabletEvent_setMZ_int
(void* __this_nativeId,
 int mZ0){
    QTabletEvent_QtDShell *__qt_object = (QTabletEvent_QtDShell *) __this_nativeId;
    __qt_object->setMZ_setter(mZ0);
}



