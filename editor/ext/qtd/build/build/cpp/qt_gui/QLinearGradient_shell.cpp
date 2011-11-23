#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qvector.h>

#include <iostream>
#include <qbrush.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_delete(void* nativeId)
{
    delete (QLinearGradient*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_destroy(void* nativeId)
{
    call_destructor((QLinearGradient*)nativeId);
}

// ---externC---
// QLinearGradient::QLinearGradient()
QTD_EXTERN QTD_EXPORT void* qtd_QLinearGradient_QLinearGradient
()
{
    QLinearGradient *__qt_this = new QLinearGradient();
    return (void *) __qt_this;

}

// QLinearGradient::QLinearGradient(const QPointF & start, const QPointF & finalStop)
QTD_EXTERN QTD_EXPORT void* qtd_QLinearGradient_QLinearGradient_QPointF_QPointF
(QPointF start0,
 QPointF finalStop1)
{
    QLinearGradient *__qt_this = new QLinearGradient((const QPointF& )start0, (const QPointF& )finalStop1);
    return (void *) __qt_this;

}

// QLinearGradient::QLinearGradient(double xStart, double yStart, double xFinalStop, double yFinalStop)
QTD_EXTERN QTD_EXPORT void* qtd_QLinearGradient_QLinearGradient_double_double_double_double
(double xStart0,
 double yStart1,
 double xFinalStop2,
 double yFinalStop3)
{
    QLinearGradient *__qt_this = new QLinearGradient((double )xStart0, (double )yStart1, (double )xFinalStop2, (double )yFinalStop3);
    return (void *) __qt_this;

}

// QLinearGradient::finalStop() const
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_finalStop_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->finalStop();

    *__d_return_value = __qt_return_value;

}

// QLinearGradient::setFinalStop(const QPointF & stop)
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_setFinalStop_QPointF
(void* __this_nativeId,
 QPointF stop0)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    __qt_this->setFinalStop((const QPointF& )stop0);

}

// QLinearGradient::setFinalStop(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_setFinalStop_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    __qt_this->setFinalStop((double )x0, (double )y1);

}

// QLinearGradient::setStart(const QPointF & start)
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_setStart_QPointF
(void* __this_nativeId,
 QPointF start0)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    __qt_this->setStart((const QPointF& )start0);

}

// QLinearGradient::setStart(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_setStart_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    __qt_this->setStart((double )x0, (double )y1);

}

// QLinearGradient::start() const
QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_start_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QLinearGradient *__qt_this = (QLinearGradient *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->start();

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QLinearGradient_QTypeInfo_isComplex() { return (bool) QTypeInfo<QLinearGradient>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QLinearGradient_QTypeInfo_isStatic() { return (bool) QTypeInfo<QLinearGradient>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QLinearGradient_QTypeInfo_isLarge() { return (bool) QTypeInfo<QLinearGradient>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QLinearGradient_QTypeInfo_isPointer() { return (bool) QTypeInfo<QLinearGradient>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QLinearGradient_QTypeInfo_isDummy() { return (bool) QTypeInfo<QLinearGradient>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QLinearGradient_placed_copy(void* orig, void* place) {
    const QLinearGradient&  __qt_orig = (const QLinearGradient& ) *(QLinearGradient *)orig;
    QLinearGradient *result = new (place) QLinearGradient (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QLinearGradient_native_copy(void* orig) {
    const QLinearGradient&  __qt_orig = (const QLinearGradient& ) *(QLinearGradient *)orig;
    QLinearGradient *result = new QLinearGradient (__qt_orig);
    return result;
}

