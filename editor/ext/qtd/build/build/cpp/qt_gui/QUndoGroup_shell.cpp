#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qvariant.h>

#include "QUndoGroup_shell.h"
#include <iostream>
#include <qundogroup.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QUndoGroupEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QUndoGroupEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_createEntity(void *nativeId, void* dId)
{
    new QUndoGroupEntity((QObject*)nativeId, dId);
}

QUndoGroup_QtDShell::QUndoGroup_QtDShell(void *d_ptr, QObject*  parent0)
    : QUndoGroup(parent0),
      QObjectLink(this, d_ptr)
{
}

QUndoGroup_QtDShell::~QUndoGroup_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QUndoGroup_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QUndoGroup::metaObject();
}

int QUndoGroup_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QUndoGroup::qt_metacall(_c, _id, _a);
}

int QUndoGroup_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QUndoGroup::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QUndoGroup_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QUndoGroup_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoGroup_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QUndoGroup_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QUndoGroup_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QUndoGroup_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QUndoGroup_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QUndoGroup_QtDShell::__public_activeStackChanged(QUndoStack*  stack0)
{
    QUndoGroup::activeStackChanged((QUndoStack* )stack0);
}

void QUndoGroup_QtDShell::__public_canRedoChanged(bool  canRedo0)
{
    QUndoGroup::canRedoChanged((bool )canRedo0);
}

void QUndoGroup_QtDShell::__public_canUndoChanged(bool  canUndo0)
{
    QUndoGroup::canUndoChanged((bool )canUndo0);
}

void QUndoGroup_QtDShell::__public_cleanChanged(bool  clean0)
{
    QUndoGroup::cleanChanged((bool )clean0);
}

void QUndoGroup_QtDShell::__public_indexChanged(int  idx0)
{
    QUndoGroup::indexChanged((int )idx0);
}

void QUndoGroup_QtDShell::__public_redoTextChanged(const QString&  redoText0)
{
    QUndoGroup::redoTextChanged((const QString& )redoText0);
}

void QUndoGroup_QtDShell::__public_undoTextChanged(const QString&  undoText0)
{
    QUndoGroup::undoTextChanged((const QString& )undoText0);
}

// Write virtual function overries used to decide on static/virtual calls
void QUndoGroup_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QUndoGroup_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QUndoGroup_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QUndoGroup_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QUndoGroup_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QUndoGroup::activeStackChanged(QUndoStack * stack)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_activeStackChanged_QUndoStack
(void* __this_nativeId,
 void* stack0)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_activeStackChanged((QUndoStack* )__qt_stack0);

}

// QUndoGroup::canRedoChanged(bool canRedo)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_canRedoChanged_bool
(void* __this_nativeId,
 bool canRedo0)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_canRedoChanged((bool )canRedo0);

}

// QUndoGroup::canUndoChanged(bool canUndo)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_canUndoChanged_bool
(void* __this_nativeId,
 bool canUndo0)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_canUndoChanged((bool )canUndo0);

}

// QUndoGroup::cleanChanged(bool clean)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_cleanChanged_bool
(void* __this_nativeId,
 bool clean0)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_cleanChanged((bool )clean0);

}

// QUndoGroup::indexChanged(int idx)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_indexChanged_int
(void* __this_nativeId,
 int idx0)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_indexChanged((int )idx0);

}

// QUndoGroup::redoTextChanged(const QString & redoText)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_redoTextChanged_string
(void* __this_nativeId,
 DArray redoText0)
{
    QString __qt_redoText0 = QString::fromUtf8((const char *)redoText0.ptr, redoText0.length);
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_redoTextChanged((const QString& )__qt_redoText0);

}

// QUndoGroup::undoTextChanged(const QString & undoText)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_undoTextChanged_string
(void* __this_nativeId,
 DArray undoText0)
{
    QString __qt_undoText0 = QString::fromUtf8((const char *)undoText0.ptr, undoText0.length);
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_undoTextChanged((const QString& )__qt_undoText0);

}

// ---externC---
// QUndoGroup::QUndoGroup(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoGroup_QUndoGroup_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QUndoGroup_QtDShell *__qt_this = new QUndoGroup_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QUndoGroup::activeStack() const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoGroup_activeStack_const
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QUndoStack*  __qt_return_value = __qt_this->activeStack();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::addStack(QUndoStack * stack)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_addStack_QUndoStack
(void* __this_nativeId,
 void* stack0)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->addStack((QUndoStack* )__qt_stack0);

}

// QUndoGroup::canRedo() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoGroup_canRedo_const
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canRedo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::canUndo() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoGroup_canUndo_const
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canUndo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::createRedoAction(QObject * parent_, const QString & prefix) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoGroup_createRedoAction_QObject_string_const
(void* __this_nativeId,
 void* parent0,
 DArray prefix1)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QString __qt_prefix1 = QString::fromUtf8((const char *)prefix1.ptr, prefix1.length);
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->createRedoAction((QObject* )__qt_parent0, (const QString& )__qt_prefix1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::createUndoAction(QObject * parent_, const QString & prefix) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoGroup_createUndoAction_QObject_string_const
(void* __this_nativeId,
 void* parent0,
 DArray prefix1)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QString __qt_prefix1 = QString::fromUtf8((const char *)prefix1.ptr, prefix1.length);
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->createUndoAction((QObject* )__qt_parent0, (const QString& )__qt_prefix1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::isClean() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoGroup_isClean_const
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClean();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoGroup::redo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_redo
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QUndoGroup::redoText() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_redoText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->redoText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUndoGroup::removeStack(QUndoStack * stack)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_removeStack_QUndoStack
(void* __this_nativeId,
 void* stack0)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->removeStack((QUndoStack* )__qt_stack0);

}

// QUndoGroup::setActiveStack(QUndoStack * stack)
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_setActiveStack_QUndoStack
(void* __this_nativeId,
 void* stack0)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->setActiveStack((QUndoStack* )__qt_stack0);

}

// QUndoGroup::stacks() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_stacks_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QList<QUndoStack* >  __qt_return_value = __qt_this->stacks();

QList<QUndoStack* > &__d_return_value_tmp = (*(QList<QUndoStack* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QUndoGroup::undo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_undo
(void* __this_nativeId)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QUndoGroup::undoText() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoGroup_undoText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoGroup_QtDShell *__qt_this = (QUndoGroup_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->undoText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QUndoGroup_staticMetaObject() {
    return (void*)&QUndoGroup::staticMetaObject;
}


