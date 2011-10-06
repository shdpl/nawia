#include <QVariant>
#include <qundostack.h>

#include "QUndoCommand_shell.h"
#include <iostream>
#include <qundostack.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_delete(void* nativeId)
{
    delete (QUndoCommand_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_destroy(void* nativeId)
{
    call_destructor((QUndoCommand_QtDShell*)nativeId);
}

QUndoCommand_QtDShell::QUndoCommand_QtDShell(void *d_ptr, QUndoCommand*  parent0)
    : QUndoCommand(parent0),
      QtdObjectLink(d_ptr)
{
}

QUndoCommand_QtDShell::QUndoCommand_QtDShell(void *d_ptr, const QString&  text0, QUndoCommand*  parent1)
    : QUndoCommand(text0, parent1),
      QtdObjectLink(d_ptr)
{
}

QUndoCommand_QtDShell::~QUndoCommand_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QUndoCommand_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QUndoCommand*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QUndoCommand_id_const_dispatch, (void *dId))
QTD_FUNC(GUI, QUndoCommand_id_const_dispatch)
int  QUndoCommand_QtDShell::id() const
{
    return qtd_QUndoCommand_id_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QUndoCommand_mergeWith_QUndoCommand_dispatch, (void *dId, void* other0))
QTD_FUNC(GUI, QUndoCommand_mergeWith_QUndoCommand_dispatch)
bool  QUndoCommand_QtDShell::mergeWith(const QUndoCommand*  other0)
{
    return qtd_QUndoCommand_mergeWith_QUndoCommand_dispatch(this->dId, (QUndoCommand* )other0);
}

QTD_FUNC_DECL(GUI, void, QUndoCommand_redo_dispatch, (void *dId))
QTD_FUNC(GUI, QUndoCommand_redo_dispatch)
void QUndoCommand_QtDShell::redo()
{
    qtd_QUndoCommand_redo_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QUndoCommand_undo_dispatch, (void *dId))
QTD_FUNC(GUI, QUndoCommand_undo_dispatch)
void QUndoCommand_QtDShell::undo()
{
    qtd_QUndoCommand_undo_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_initCallBacks(VoidFunc *virts) {
    qtd_QUndoCommand_id_const_dispatch = (qtd_QUndoCommand_id_const_dispatch_t) virts[0];
    qtd_QUndoCommand_mergeWith_QUndoCommand_dispatch = (qtd_QUndoCommand_mergeWith_QUndoCommand_dispatch_t) virts[1];
    qtd_QUndoCommand_redo_dispatch = (qtd_QUndoCommand_redo_dispatch_t) virts[2];
    qtd_QUndoCommand_undo_dispatch = (qtd_QUndoCommand_undo_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QUndoCommand_QtDShell::__override_id(bool static_call) const
{
    if (static_call) {
        return QUndoCommand::id();
    } else {
        return id();
    }
}

bool  QUndoCommand_QtDShell::__override_mergeWith(const QUndoCommand*  other0, bool static_call)
{
    if (static_call) {
        return QUndoCommand::mergeWith((const QUndoCommand* )other0);
    } else {
        return mergeWith((const QUndoCommand* )other0);
    }
}

void QUndoCommand_QtDShell::__override_redo(bool static_call)
{
    if (static_call) {
        QUndoCommand::redo();
    } else {
        redo();
    }
}

void QUndoCommand_QtDShell::__override_undo(bool static_call)
{
    if (static_call) {
        QUndoCommand::undo();
    } else {
        undo();
    }
}

// ---externC---
// QUndoCommand::QUndoCommand(QUndoCommand * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoCommand_QUndoCommand_QUndoCommand
(void *d_ptr,
 void* parent0)
{
    QUndoCommand*  __qt_parent0 = (QUndoCommand* ) parent0;
    QUndoCommand_QtDShell *__qt_this = new QUndoCommand_QtDShell(d_ptr, (QUndoCommand* )__qt_parent0);
    return (void *) __qt_this;

}

// QUndoCommand::QUndoCommand(const QString & text, QUndoCommand * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoCommand_QUndoCommand_string_QUndoCommand
(void *d_ptr,
 DArray text0,
 void* parent1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QUndoCommand*  __qt_parent1 = (QUndoCommand* ) parent1;
    QUndoCommand_QtDShell *__qt_this = new QUndoCommand_QtDShell(d_ptr, (const QString& )__qt_text0, (QUndoCommand* )__qt_parent1);
    return (void *) __qt_this;

}

// QUndoCommand::child(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoCommand_child_int_const
(void* __this_nativeId,
 int index0)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    const QUndoCommand*  __qt_return_value = __qt_this->child((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoCommand::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoCommand_childCount_const
(void* __this_nativeId)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->childCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoCommand::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QUndoCommand::text() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUndoCommand::id() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoCommand_id_const
(void* __this_nativeId)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUndoCommand*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_id(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoCommand::mergeWith(const QUndoCommand * other)
QTD_EXTERN QTD_EXPORT bool qtd_QUndoCommand_mergeWith_QUndoCommand
(void* __this_nativeId,
 void* other0)
{
    const QUndoCommand*  __qt_other0 = (const QUndoCommand* ) other0;
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUndoCommand*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_mergeWith((const QUndoCommand* )__qt_other0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoCommand::redo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_redo
(void* __this_nativeId)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUndoCommand*)__this_nativeId) != NULL;
    __qt_this->__override_redo(__do_static_call);

}

// QUndoCommand::undo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoCommand_undo
(void* __this_nativeId)
{
    QUndoCommand_QtDShell *__qt_this = (QUndoCommand_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QUndoCommand*)__this_nativeId) != NULL;
    __qt_this->__override_undo(__do_static_call);

}

// ---externC---end
// Field accessors


