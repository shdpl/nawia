#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>
#include <qvariant.h>

#include "QUndoStack_shell.h"
#include <iostream>
#include <qundostack.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QUndoStackEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QUndoStackEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_createEntity(void *nativeId, void* dId)
{
    new QUndoStackEntity((QObject*)nativeId, dId);
}

QUndoStack_QtDShell::QUndoStack_QtDShell(void *d_ptr, QObject*  parent0)
    : QUndoStack(parent0),
      QObjectLink(this, d_ptr)
{
}

QUndoStack_QtDShell::~QUndoStack_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QUndoStack_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QUndoStack::metaObject();
}

int QUndoStack_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QUndoStack::qt_metacall(_c, _id, _a);
}

int QUndoStack_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QUndoStack::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QUndoStack_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QUndoStack_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoStack_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QUndoStack_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QUndoStack_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QUndoStack_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QUndoStack_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QUndoStack_QtDShell::__public_canRedoChanged(bool  canRedo0)
{
    QUndoStack::canRedoChanged((bool )canRedo0);
}

void QUndoStack_QtDShell::__public_canUndoChanged(bool  canUndo0)
{
    QUndoStack::canUndoChanged((bool )canUndo0);
}

void QUndoStack_QtDShell::__public_cleanChanged(bool  clean0)
{
    QUndoStack::cleanChanged((bool )clean0);
}

void QUndoStack_QtDShell::__public_indexChanged(int  idx0)
{
    QUndoStack::indexChanged((int )idx0);
}

void QUndoStack_QtDShell::__public_redoTextChanged(const QString&  redoText0)
{
    QUndoStack::redoTextChanged((const QString& )redoText0);
}

void QUndoStack_QtDShell::__public_undoTextChanged(const QString&  undoText0)
{
    QUndoStack::undoTextChanged((const QString& )undoText0);
}

// Write virtual function overries used to decide on static/virtual calls
void QUndoStack_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QUndoStack_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QUndoStack_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QUndoStack_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QUndoStack_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QUndoStack::canRedoChanged(bool canRedo)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_canRedoChanged_bool
(void* __this_nativeId,
 bool canRedo0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_canRedoChanged((bool )canRedo0);

}

// QUndoStack::canUndoChanged(bool canUndo)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_canUndoChanged_bool
(void* __this_nativeId,
 bool canUndo0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_canUndoChanged((bool )canUndo0);

}

// QUndoStack::cleanChanged(bool clean)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_cleanChanged_bool
(void* __this_nativeId,
 bool clean0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_cleanChanged((bool )clean0);

}

// QUndoStack::indexChanged(int idx)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_indexChanged_int
(void* __this_nativeId,
 int idx0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_indexChanged((int )idx0);

}

// QUndoStack::redoTextChanged(const QString & redoText)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_redoTextChanged_string
(void* __this_nativeId,
 DArray redoText0)
{
    QString __qt_redoText0 = QString::fromUtf8((const char *)redoText0.ptr, redoText0.length);
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_redoTextChanged((const QString& )__qt_redoText0);

}

// QUndoStack::undoTextChanged(const QString & undoText)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_undoTextChanged_string
(void* __this_nativeId,
 DArray undoText0)
{
    QString __qt_undoText0 = QString::fromUtf8((const char *)undoText0.ptr, undoText0.length);
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->__public_undoTextChanged((const QString& )__qt_undoText0);

}

// ---externC---
// QUndoStack::QUndoStack(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoStack_QUndoStack_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QUndoStack_QtDShell *__qt_this = new QUndoStack_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QUndoStack::beginMacro(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_beginMacro_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->beginMacro((const QString& )__qt_text0);

}

// QUndoStack::canRedo() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoStack_canRedo_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canRedo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::canUndo() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoStack_canUndo_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canUndo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::cleanIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoStack_cleanIndex_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cleanIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::clear()
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_clear
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QUndoStack::command(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoStack_command_int_const
(void* __this_nativeId,
 int index0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    const QUndoCommand*  __qt_return_value = __qt_this->command((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoStack::count() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoStack_count_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::createRedoAction(QObject * parent_, const QString & prefix) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoStack_createRedoAction_QObject_string_const
(void* __this_nativeId,
 void* parent0,
 DArray prefix1)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QString __qt_prefix1 = QString::fromUtf8((const char *)prefix1.ptr, prefix1.length);
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->createRedoAction((QObject* )__qt_parent0, (const QString& )__qt_prefix1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoStack::createUndoAction(QObject * parent_, const QString & prefix) const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoStack_createUndoAction_QObject_string_const
(void* __this_nativeId,
 void* parent0,
 DArray prefix1)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QString __qt_prefix1 = QString::fromUtf8((const char *)prefix1.ptr, prefix1.length);
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->createUndoAction((QObject* )__qt_parent0, (const QString& )__qt_prefix1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoStack::endMacro()
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_endMacro
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->endMacro();

}

// QUndoStack::index() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoStack_index_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->index();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoStack_isActive_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::isClean() const
QTD_EXTERN QTD_EXPORT bool qtd_QUndoStack_isClean_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClean();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::push(QUndoCommand * cmd)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_push_QUndoCommand
(void* __this_nativeId,
 void* cmd0)
{
    QUndoCommand*  __qt_cmd0 = (QUndoCommand* ) cmd0;
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->push((QUndoCommand* )__qt_cmd0);

}

// QUndoStack::redo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_redo
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QUndoStack::redoText() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_redoText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->redoText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUndoStack::setActive(bool active)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_setActive_bool
(void* __this_nativeId,
 bool active0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->setActive((bool )active0);

}

// QUndoStack::setClean()
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_setClean
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->setClean();

}

// QUndoStack::setIndex(int idx)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_setIndex_int
(void* __this_nativeId,
 int idx0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->setIndex((int )idx0);

}

// QUndoStack::setUndoLimit(int limit)
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_setUndoLimit_int
(void* __this_nativeId,
 int limit0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->setUndoLimit((int )limit0);

}

// QUndoStack::text(int idx) const
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int idx0)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((int )idx0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUndoStack::undo()
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_undo
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QUndoStack::undoLimit() const
QTD_EXTERN QTD_EXPORT int qtd_QUndoStack_undoLimit_const
(void* __this_nativeId)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->undoLimit();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QUndoStack::undoText() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoStack_undoText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoStack_QtDShell *__qt_this = (QUndoStack_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->undoText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QUndoStack_staticMetaObject() {
    return (void*)&QUndoStack::staticMetaObject;
}


