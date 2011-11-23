#include <QVariant>

#include "QXmlLocator_shell.h"
#include <iostream>
#include <qxml.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_xml.h"

QTD_EXTERN QTD_EXPORT void qtd_QXmlLocator_delete(void* nativeId)
{
    delete (QXmlLocator_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlLocator_destroy(void* nativeId)
{
    call_destructor((QXmlLocator_QtDShell*)nativeId);
}

QXmlLocator_QtDShell::QXmlLocator_QtDShell(void *d_ptr)
    : QXmlLocator(),
      QtdObjectLink(d_ptr)
{
}

QXmlLocator_QtDShell::~QXmlLocator_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QXmlLocator_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QXmlLocator*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(XML, int, QXmlLocator_columnNumber_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlLocator_columnNumber_const_dispatch)
int  QXmlLocator_QtDShell::columnNumber() const
{
    return qtd_QXmlLocator_columnNumber_const_dispatch(this->dId);
}

QTD_FUNC_DECL(XML, int, QXmlLocator_lineNumber_const_dispatch, (void *dId))
QTD_FUNC(XML, QXmlLocator_lineNumber_const_dispatch)
int  QXmlLocator_QtDShell::lineNumber() const
{
    return qtd_QXmlLocator_lineNumber_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QXmlLocator_initCallBacks(VoidFunc *virts) {
    qtd_QXmlLocator_columnNumber_const_dispatch = (qtd_QXmlLocator_columnNumber_const_dispatch_t) virts[0];
    qtd_QXmlLocator_lineNumber_const_dispatch = (qtd_QXmlLocator_lineNumber_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QXmlLocator_QtDShell::__override_columnNumber(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return columnNumber();
    }
}

int  QXmlLocator_QtDShell::__override_lineNumber(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return lineNumber();
    }
}

// ---externC---
// QXmlLocator::QXmlLocator()
QTD_EXTERN QTD_EXPORT void* qtd_QXmlLocator_QXmlLocator
(void *d_ptr)
{
    QXmlLocator_QtDShell *__qt_this = new QXmlLocator_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QXmlLocator::columnNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlLocator_columnNumber_const
(void* __this_nativeId)
{
    QXmlLocator_QtDShell *__qt_this = (QXmlLocator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLocator*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnNumber(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QXmlLocator::lineNumber() const
QTD_EXTERN QTD_EXPORT int qtd_QXmlLocator_lineNumber_const
(void* __this_nativeId)
{
    QXmlLocator_QtDShell *__qt_this = (QXmlLocator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QXmlLocator*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_lineNumber(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


