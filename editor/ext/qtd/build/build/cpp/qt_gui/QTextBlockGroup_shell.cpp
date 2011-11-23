#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qvariant.h>

#include "QTextBlockGroup_shell.h"
#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextBlockGroupEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextBlockGroupEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_createEntity(void *nativeId, void* dId)
{
    new QTextBlockGroupEntity((QObject*)nativeId, dId);
}

QTextBlockGroup_QtDShell::QTextBlockGroup_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QTextBlockGroup(doc0),
      QObjectLink(this, d_ptr)
{
}

QTextBlockGroup_QtDShell::~QTextBlockGroup_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextBlockGroup_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextBlockGroup::metaObject();
}

int QTextBlockGroup_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextBlockGroup::qt_metacall(_c, _id, _a);
}

int QTextBlockGroup_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextBlockGroup::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextBlockGroup_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextBlockGroup_QtDShell *__qt_this = (QTextBlockGroup_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch, (void *dId, void* block0))
QTD_FUNC(GUI, QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch)
void QTextBlockGroup_QtDShell::blockFormatChanged(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockInserted_QTextBlock_dispatch, (void *dId, void* block0))
QTD_FUNC(GUI, QTextBlockGroup_blockInserted_QTextBlock_dispatch)
void QTextBlockGroup_QtDShell::blockInserted(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockInserted_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockRemoved_QTextBlock_dispatch, (void *dId, void* block0))
QTD_FUNC(GUI, QTextBlockGroup_blockRemoved_QTextBlock_dispatch)
void QTextBlockGroup_QtDShell::blockRemoved(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockRemoved_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextBlockGroup_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextBlockGroup_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextBlockGroup_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextBlockGroup_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextBlockGroup_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_initCallBacks(VoidFunc *virts) {
    qtd_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch = (qtd_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch_t) virts[0];
    qtd_QTextBlockGroup_blockInserted_QTextBlock_dispatch = (qtd_QTextBlockGroup_blockInserted_QTextBlock_dispatch_t) virts[1];
    qtd_QTextBlockGroup_blockRemoved_QTextBlock_dispatch = (qtd_QTextBlockGroup_blockRemoved_QTextBlock_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QList<QTextBlock >  QTextBlockGroup_QtDShell::__public_blockList() const
{
    return QTextBlockGroup::blockList();
}

QObject*  QTextBlockGroup_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextBlockGroup_QtDShell::__public_setFormat(const QTextFormat&  format0)
{
    QTextObject::setFormat((const QTextFormat& )format0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTextBlockGroup_QtDShell::__override_blockFormatChanged(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockFormatChanged((const QTextBlock& )block0);
    } else {
        blockFormatChanged((const QTextBlock& )block0);
    }
}

void QTextBlockGroup_QtDShell::__override_blockInserted(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockInserted((const QTextBlock& )block0);
    } else {
        blockInserted((const QTextBlock& )block0);
    }
}

void QTextBlockGroup_QtDShell::__override_blockRemoved(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockRemoved((const QTextBlock& )block0);
    } else {
        blockRemoved((const QTextBlock& )block0);
    }
}

void QTextBlockGroup_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextBlockGroup_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextBlockGroup_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextBlockGroup_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextBlockGroup_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextBlockGroup::QTextBlockGroup(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockGroup_QTextBlockGroup_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QTextBlockGroup_QtDShell *__qt_this = new QTextBlockGroup_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QTextBlockGroup::blockList() const
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_blockList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextBlockGroup_QtDShell *__qt_this = (QTextBlockGroup_QtDShell *) __this_nativeId;
    QList<QTextBlock >  __qt_return_value = __qt_this->__public_blockList();

QList<QTextBlock > &__d_return_value_tmp = (*(QList<QTextBlock > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextBlockGroup::blockFormatChanged(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_blockFormatChanged_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QTextBlockGroup_QtDShell *__qt_this = (QTextBlockGroup_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_blockFormatChanged((const QTextBlock& )__qt_block0, __do_static_call);

}

// QTextBlockGroup::blockInserted(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_blockInserted_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QTextBlockGroup_QtDShell *__qt_this = (QTextBlockGroup_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_blockInserted((const QTextBlock& )__qt_block0, __do_static_call);

}

// QTextBlockGroup::blockRemoved(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockGroup_blockRemoved_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QTextBlockGroup_QtDShell *__qt_this = (QTextBlockGroup_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_blockRemoved((const QTextBlock& )__qt_block0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockGroup_staticMetaObject() {
    return (void*)&QTextBlockGroup::staticMetaObject;
}


