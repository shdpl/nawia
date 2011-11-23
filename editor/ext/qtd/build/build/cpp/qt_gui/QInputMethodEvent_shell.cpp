#include <QInputMethodEvent>
#include <QVariant>
#include <qevent.h>
#include <qlist.h>

#include "QInputMethodEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QInputMethodEvent_QtDShell::QInputMethodEvent_QtDShell(void *d_ptr)
    : QInputMethodEvent(),
      QtdObjectLink(d_ptr)
{
}

QInputMethodEvent_QtDShell::QInputMethodEvent_QtDShell(void *d_ptr, const QInputMethodEvent&  other0)
    : QInputMethodEvent(other0),
      QtdObjectLink(d_ptr)
{
}

QInputMethodEvent_QtDShell::QInputMethodEvent_QtDShell(void *d_ptr, const QString&  preeditText0, const QList<QInputMethodEvent::Attribute >&  attributes1)
    : QInputMethodEvent(preeditText0, attributes1),
      QtdObjectLink(d_ptr)
{
}

QInputMethodEvent_QtDShell::~QInputMethodEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QInputMethodEvent::QInputMethodEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_QInputMethodEvent
(void *d_ptr)
{
    QInputMethodEvent_QtDShell *__qt_this = new QInputMethodEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QInputMethodEvent::QInputMethodEvent(const QInputMethodEvent & other)
QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_QInputMethodEvent_QInputMethodEvent
(void *d_ptr,
 void* other0)
{
    const QInputMethodEvent&  __qt_other0 = (const QInputMethodEvent& ) * (QInputMethodEvent *) other0;
    QInputMethodEvent_QtDShell *__qt_this = new QInputMethodEvent_QtDShell(d_ptr, (const QInputMethodEvent& )__qt_other0);
    return (void *) __qt_this;

}

// QInputMethodEvent::QInputMethodEvent(const QString & preeditText, const QList<QInputMethodEvent::Attribute > & attributes)
QTD_EXTERN QTD_EXPORT void* qtd_QInputMethodEvent_QInputMethodEvent_string_QList
(void *d_ptr,
 DArray preeditText0,
 void* attributes1)
{
    QString __qt_preeditText0 = QString::fromUtf8((const char *)preeditText0.ptr, preeditText0.length);
QList<QInputMethodEvent::Attribute > __qt_attributes1 = (*(QList<QInputMethodEvent::Attribute > *)attributes1);
    QInputMethodEvent_QtDShell *__qt_this = new QInputMethodEvent_QtDShell(d_ptr, (const QString& )__qt_preeditText0, (const QList<QInputMethodEvent::Attribute >& )__qt_attributes1);
    return (void *) __qt_this;

}

// QInputMethodEvent::attributes() const
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_attributes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    const QList<QInputMethodEvent::Attribute >&  __qt_return_value = __qt_this->attributes();

QList<QInputMethodEvent::Attribute > &__d_return_value_tmp = (*(QList<QInputMethodEvent::Attribute > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QInputMethodEvent::commitString() const
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_commitString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    const QString&  __qt_return_value = __qt_this->commitString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputMethodEvent::preeditString() const
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_preeditString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    const QString&  __qt_return_value = __qt_this->preeditString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputMethodEvent::replacementLength() const
QTD_EXTERN QTD_EXPORT int qtd_QInputMethodEvent_replacementLength_const
(void* __this_nativeId)
{
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->replacementLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputMethodEvent::replacementStart() const
QTD_EXTERN QTD_EXPORT int qtd_QInputMethodEvent_replacementStart_const
(void* __this_nativeId)
{
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->replacementStart();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputMethodEvent::setCommitString(const QString & commitString, int replaceFrom, int replaceLength)
QTD_EXTERN QTD_EXPORT void qtd_QInputMethodEvent_setCommitString_string_int_int
(void* __this_nativeId,
 DArray commitString0,
 int replaceFrom1,
 int replaceLength2)
{
    QString __qt_commitString0 = QString::fromUtf8((const char *)commitString0.ptr, commitString0.length);
    QInputMethodEvent_QtDShell *__qt_this = (QInputMethodEvent_QtDShell *) __this_nativeId;
    __qt_this->setCommitString((const QString& )__qt_commitString0, (int )replaceFrom1, (int )replaceLength2);

}

// ---externC---end
// Field accessors


