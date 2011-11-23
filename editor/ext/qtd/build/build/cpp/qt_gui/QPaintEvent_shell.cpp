#include <QVariant>
#include <qregion.h>

#include "QPaintEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QPaintEvent_QtDShell::QPaintEvent_QtDShell(void *d_ptr, const QRect&  paintRect0)
    : QPaintEvent(paintRect0),
      QtdObjectLink(d_ptr)
{
}

QPaintEvent_QtDShell::QPaintEvent_QtDShell(void *d_ptr, const QRegion&  paintRegion0)
    : QPaintEvent(paintRegion0),
      QtdObjectLink(d_ptr)
{
}

QPaintEvent_QtDShell::~QPaintEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QPaintEvent::QPaintEvent(const QRect & paintRect)
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEvent_QPaintEvent_QRect
(void *d_ptr,
 QRect paintRect0)
{
    QPaintEvent_QtDShell *__qt_this = new QPaintEvent_QtDShell(d_ptr, (const QRect& )paintRect0);
    return (void *) __qt_this;

}

// QPaintEvent::QPaintEvent(const QRegion & paintRegion)
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEvent_QPaintEvent_QRegion
(void *d_ptr,
 void* paintRegion0)
{
    const QRegion&  __qt_paintRegion0 = (const QRegion& ) *(QRegion *)paintRegion0;
    QPaintEvent_QtDShell *__qt_this = new QPaintEvent_QtDShell(d_ptr, (const QRegion& )__qt_paintRegion0);
    return (void *) __qt_this;

}

// QPaintEvent::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_rect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPaintEvent_QtDShell *__qt_this = (QPaintEvent_QtDShell *) __this_nativeId;
    const QRect&  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QPaintEvent::region() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintEvent_region_const
(void* __this_nativeId)
{
    QPaintEvent_QtDShell *__qt_this = (QPaintEvent_QtDShell *) __this_nativeId;
    const QRegion&  __qt_return_value = __qt_this->region();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QRect  QPaintEvent_QtDShell::m_rect_getter()
{
    return m_rect;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_m_rect
(void* __this_nativeId,
 QRect * __d_return_value){
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    QRect __tmp_m_rect = __qt_object->m_rect_getter();
    *__d_return_value = __tmp_m_rect;
}

void QPaintEvent_QtDShell::setM_rect_setter(QRect  m_rect0)
{
    this->m_rect = m_rect0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_setM_rect_QRect
(void* __this_nativeId,
 QRect m_rect0){
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    __qt_object->setM_rect_setter(m_rect0);
}

bool  QPaintEvent_QtDShell::m_erased_getter()
{
    return m_erased;
}

QTD_EXTERN QTD_EXPORT bool qtd_QPaintEvent_m_erased
(void* __this_nativeId){
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    bool __tmp_m_erased = __qt_object->m_erased_getter();
    bool __d_return_value = __tmp_m_erased;
    return __d_return_value;
}

void QPaintEvent_QtDShell::setM_erased_setter(bool  m_erased0)
{
    this->m_erased = m_erased0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_setM_erased_bool
(void* __this_nativeId,
 bool m_erased0){
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    __qt_object->setM_erased_setter(m_erased0);
}

QRegion  QPaintEvent_QtDShell::m_region_getter()
{
    return m_region;
}

QTD_EXTERN QTD_EXPORT void* qtd_QPaintEvent_m_region
(void* __this_nativeId){
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    QRegion __tmp_m_region = __qt_object->m_region_getter();
    void* __d_return_value = (void*) new QRegion(__tmp_m_region);
    return __d_return_value;
}

void QPaintEvent_QtDShell::setM_region_setter(QRegion  m_region0)
{
    this->m_region = m_region0;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintEvent_setM_region_QRegion
(void* __this_nativeId,
 void* m_region0){
    QRegion  __qt_m_region0 = (QRegion ) *(QRegion *)m_region0;
    QPaintEvent_QtDShell *__qt_object = (QPaintEvent_QtDShell *) __this_nativeId;
    __qt_object->setM_region_setter(__qt_m_region0);
}



