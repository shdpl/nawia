#include <QVariant>
#include <qpainterpath.h>
#include <qvector.h>

#include "QPainterPathStroker_shell.h"
#include <iostream>
#include <qpainterpath.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_delete(void* nativeId)
{
    delete (QPainterPathStroker_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_destroy(void* nativeId)
{
    call_destructor((QPainterPathStroker_QtDShell*)nativeId);
}

QPainterPathStroker_QtDShell::QPainterPathStroker_QtDShell()
    : QPainterPathStroker()
{
}

QPainterPathStroker_QtDShell::~QPainterPathStroker_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPainterPathStroker::QPainterPathStroker()
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPathStroker_QPainterPathStroker
(void *d_ptr)
{
    QPainterPathStroker_QtDShell *__qt_this = new QPainterPathStroker_QtDShell();
    return (void *) __qt_this;

}

// QPainterPathStroker::capStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QPainterPathStroker_capStyle_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->capStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPathStroker::createStroke(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QPainterPathStroker_createStroke_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->createStroke((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QPainterPathStroker::curveThreshold() const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPathStroker_curveThreshold_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->curveThreshold();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPathStroker::dashOffset() const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPathStroker_dashOffset_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->dashOffset();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPathStroker::dashPattern() const
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_dashPattern_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    QVector<double >  __qt_return_value = __qt_this->dashPattern();


    qtd_allocate_double_array(__d_return_value, __qt_return_value.size());
    QVector<double > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<double > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        double  __qt_tmp = *__qt_return_value_it;
        double __java_tmp = __qt_tmp;
        qtd_assign_double_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QPainterPathStroker::joinStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QPainterPathStroker_joinStyle_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->joinStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPathStroker::miterLimit() const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPathStroker_miterLimit_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->miterLimit();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPainterPathStroker::setCapStyle(Qt::PenCapStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setCapStyle_PenCapStyle
(void* __this_nativeId,
 int style0)
{
    Qt::PenCapStyle __qt_style0 = (Qt::PenCapStyle) style0;
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setCapStyle((Qt::PenCapStyle )__qt_style0);

}

// QPainterPathStroker::setCurveThreshold(double threshold)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setCurveThreshold_double
(void* __this_nativeId,
 double threshold0)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setCurveThreshold((double )threshold0);

}

// QPainterPathStroker::setDashOffset(double offset)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setDashOffset_double
(void* __this_nativeId,
 double offset0)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setDashOffset((double )offset0);

}

// QPainterPathStroker::setDashPattern(Qt::PenStyle arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setDashPattern_PenStyle
(void* __this_nativeId,
 int arg__1)
{
    Qt::PenStyle __qt_arg__1 = (Qt::PenStyle) arg__1;
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setDashPattern((Qt::PenStyle )__qt_arg__1);

}

// QPainterPathStroker::setDashPattern(const QVector<double > & dashPattern)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setDashPattern_QVector
(void* __this_nativeId,
 DArray* dashPattern0)
{
    QVector<double > __qt_dashPattern0;
    __qt_dashPattern0.reserve(dashPattern0->length);
    for (int i=0; i<dashPattern0->length; ++i) {
        double __d_element;
        qtd_get_double_from_array(dashPattern0, i, &__d_element);
        double  __qt_element = (double ) __d_element;
        __qt_dashPattern0 << __qt_element;
    }
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setDashPattern((const QVector<double >& )__qt_dashPattern0);

}

// QPainterPathStroker::setJoinStyle(Qt::PenJoinStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setJoinStyle_PenJoinStyle
(void* __this_nativeId,
 int style0)
{
    Qt::PenJoinStyle __qt_style0 = (Qt::PenJoinStyle) style0;
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setJoinStyle((Qt::PenJoinStyle )__qt_style0);

}

// QPainterPathStroker::setMiterLimit(double length)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setMiterLimit_double
(void* __this_nativeId,
 double length0)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setMiterLimit((double )length0);

}

// QPainterPathStroker::setWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QPainterPathStroker_setWidth_double
(void* __this_nativeId,
 double width0)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    __qt_this->setWidth((double )width0);

}

// QPainterPathStroker::width() const
QTD_EXTERN QTD_EXPORT double qtd_QPainterPathStroker_width_const
(void* __this_nativeId)
{
    QPainterPathStroker_QtDShell *__qt_this = (QPainterPathStroker_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->width();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


