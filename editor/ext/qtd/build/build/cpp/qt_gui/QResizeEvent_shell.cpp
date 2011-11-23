#include <QVariant>

#include "QResizeEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QResizeEvent_QtDShell::QResizeEvent_QtDShell(void *d_ptr, const QSize&  size0, const QSize&  oldSize1)
    : QResizeEvent(size0, oldSize1),
      QtdObjectLink(d_ptr)
{
}

QResizeEvent_QtDShell::~QResizeEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QResizeEvent::QResizeEvent(const QSize & size, const QSize & oldSize)
QTD_EXTERN QTD_EXPORT void* qtd_QResizeEvent_QResizeEvent_QSize_QSize
(void *d_ptr,
 QSize size0,
 QSize oldSize1)
{
    QResizeEvent_QtDShell *__qt_this = new QResizeEvent_QtDShell(d_ptr, (const QSize& )size0, (const QSize& )oldSize1);
    return (void *) __qt_this;

}

// QResizeEvent::oldSize() const
QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_oldSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QResizeEvent_QtDShell *__qt_this = (QResizeEvent_QtDShell *) __this_nativeId;
    const QSize&  __qt_return_value = __qt_this->oldSize();

    *__d_return_value = __qt_return_value;

}

// QResizeEvent::size() const
QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QResizeEvent_QtDShell *__qt_this = (QResizeEvent_QtDShell *) __this_nativeId;
    const QSize&  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors
QSize  QResizeEvent_QtDShell::olds_getter()
{
    return olds;
}

QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_olds
(void* __this_nativeId,
 QSize * __d_return_value){
    QResizeEvent_QtDShell *__qt_object = (QResizeEvent_QtDShell *) __this_nativeId;
    QSize __tmp_olds = __qt_object->olds_getter();
    *__d_return_value = __tmp_olds;
}

void QResizeEvent_QtDShell::setOlds_setter(QSize  olds0)
{
    this->olds = olds0;
}

QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_setOlds_QSize
(void* __this_nativeId,
 QSize olds0){
    QResizeEvent_QtDShell *__qt_object = (QResizeEvent_QtDShell *) __this_nativeId;
    __qt_object->setOlds_setter(olds0);
}

QSize  QResizeEvent_QtDShell::s_getter()
{
    return s;
}

QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_s
(void* __this_nativeId,
 QSize * __d_return_value){
    QResizeEvent_QtDShell *__qt_object = (QResizeEvent_QtDShell *) __this_nativeId;
    QSize __tmp_s = __qt_object->s_getter();
    *__d_return_value = __tmp_s;
}

void QResizeEvent_QtDShell::setS_setter(QSize  s0)
{
    this->s = s0;
}

QTD_EXTERN QTD_EXPORT void qtd_QResizeEvent_setS_QSize
(void* __this_nativeId,
 QSize s0){
    QResizeEvent_QtDShell *__qt_object = (QResizeEvent_QtDShell *) __this_nativeId;
    __qt_object->setS_setter(s0);
}



