#include <QVariant>
#include <qkeysequence.h>

#include "QShortcutEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QShortcutEvent_QtDShell::QShortcutEvent_QtDShell(void *d_ptr, const QKeySequence&  key0, int  id1, bool  ambiguous2)
    : QShortcutEvent(key0, id1, ambiguous2),
      QtdObjectLink(d_ptr)
{
}

QShortcutEvent_QtDShell::~QShortcutEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QShortcutEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QShortcutEvent::QShortcutEvent(const QKeySequence & key, int id, bool ambiguous)
QTD_EXTERN QTD_EXPORT void* qtd_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool
(void *d_ptr,
 void* key0,
 int id1,
 bool ambiguous2)
{
    const QKeySequence&  __qt_key0 = (const QKeySequence& ) *(QKeySequence *)key0;
    QShortcutEvent_QtDShell *__qt_this = new QShortcutEvent_QtDShell(d_ptr, (const QKeySequence& )__qt_key0, (int )id1, (bool )ambiguous2);
    return (void *) __qt_this;

}

// QShortcutEvent::isAmbiguous() const
QTD_EXTERN QTD_EXPORT bool qtd_QShortcutEvent_isAmbiguous_const
(void* __this_nativeId)
{
    QShortcutEvent_QtDShell *__qt_this = (QShortcutEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAmbiguous();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QShortcutEvent::key() const
QTD_EXTERN QTD_EXPORT void* qtd_QShortcutEvent_key_const
(void* __this_nativeId)
{
    QShortcutEvent_QtDShell *__qt_this = (QShortcutEvent_QtDShell *) __this_nativeId;
    const QKeySequence&  __qt_return_value = __qt_this->key();

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// QShortcutEvent::shortcutId() const
QTD_EXTERN QTD_EXPORT int qtd_QShortcutEvent_shortcutId_const
(void* __this_nativeId)
{
    QShortcutEvent_QtDShell *__qt_this = (QShortcutEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->shortcutId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QKeySequence  QShortcutEvent_QtDShell::sequence_getter()
{
    return sequence;
}

QTD_EXTERN QTD_EXPORT void* qtd_QShortcutEvent_sequence
(void* __this_nativeId){
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    QKeySequence __tmp_sequence = __qt_object->sequence_getter();
    void* __d_return_value = (void*) new QKeySequence(__tmp_sequence);
    return __d_return_value;
}

void QShortcutEvent_QtDShell::setSequence_setter(QKeySequence  sequence0)
{
    this->sequence = sequence0;
}

QTD_EXTERN QTD_EXPORT void qtd_QShortcutEvent_setSequence_QKeySequence
(void* __this_nativeId,
 void* sequence0){
    QKeySequence  __qt_sequence0 = (QKeySequence ) *(QKeySequence *)sequence0;
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    __qt_object->setSequence_setter(__qt_sequence0);
}

int  QShortcutEvent_QtDShell::sid_getter()
{
    return sid;
}

QTD_EXTERN QTD_EXPORT int qtd_QShortcutEvent_sid
(void* __this_nativeId){
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    int __tmp_sid = __qt_object->sid_getter();
    int __d_return_value = __tmp_sid;
    return __d_return_value;
}

void QShortcutEvent_QtDShell::setSid_setter(int  sid0)
{
    this->sid = sid0;
}

QTD_EXTERN QTD_EXPORT void qtd_QShortcutEvent_setSid_int
(void* __this_nativeId,
 int sid0){
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    __qt_object->setSid_setter(sid0);
}

bool  QShortcutEvent_QtDShell::ambig_getter()
{
    return ambig;
}

QTD_EXTERN QTD_EXPORT bool qtd_QShortcutEvent_ambig
(void* __this_nativeId){
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    bool __tmp_ambig = __qt_object->ambig_getter();
    bool __d_return_value = __tmp_ambig;
    return __d_return_value;
}

void QShortcutEvent_QtDShell::setAmbig_setter(bool  ambig0)
{
    this->ambig = ambig0;
}

QTD_EXTERN QTD_EXPORT void qtd_QShortcutEvent_setAmbig_bool
(void* __this_nativeId,
 bool ambig0){
    QShortcutEvent_QtDShell *__qt_object = (QShortcutEvent_QtDShell *) __this_nativeId;
    __qt_object->setAmbig_setter(ambig0);
}



