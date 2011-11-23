#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qvariant.h>

#include "QTextList_shell.h"
#include <iostream>
#include <qtextlist.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextListEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextListEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextList_createEntity(void *nativeId, void* dId)
{
    new QTextListEntity((QObject*)nativeId, dId);
}

QTextList_QtDShell::QTextList_QtDShell(void *d_ptr, QTextDocument*  doc0)
    : QTextList(doc0),
      QObjectLink(this, d_ptr)
{
}

QTextList_QtDShell::~QTextList_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextList_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextList::metaObject();
}

int QTextList_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextList::qt_metacall(_c, _id, _a);
}

int QTextList_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextList::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextList_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch, (void *dId, void* block0))
void QTextList_QtDShell::blockFormatChanged(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockFormatChanged_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockInserted_QTextBlock_dispatch, (void *dId, void* block0))
void QTextList_QtDShell::blockInserted(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockInserted_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QTextBlockGroup_blockRemoved_QTextBlock_dispatch, (void *dId, void* block0))
void QTextList_QtDShell::blockRemoved(const QTextBlock&  block0)
{
    qtd_QTextBlockGroup_blockRemoved_QTextBlock_dispatch(QObjectLink::getLink(this)->dId, &(QTextBlock& )block0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextList_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextList_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextList_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextList_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextList_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextList_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QList<QTextBlock >  QTextList_QtDShell::__public_blockList() const
{
    return QTextBlockGroup::blockList();
}

QObject*  QTextList_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QTextList_QtDShell::__override_blockFormatChanged(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockFormatChanged((const QTextBlock& )block0);
    } else {
        blockFormatChanged((const QTextBlock& )block0);
    }
}

void QTextList_QtDShell::__override_blockInserted(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockInserted((const QTextBlock& )block0);
    } else {
        blockInserted((const QTextBlock& )block0);
    }
}

void QTextList_QtDShell::__override_blockRemoved(const QTextBlock&  block0, bool static_call)
{
    if (static_call) {
        QTextBlockGroup::blockRemoved((const QTextBlock& )block0);
    } else {
        blockRemoved((const QTextBlock& )block0);
    }
}

void QTextList_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextList_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextList_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextList_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextList_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextList::QTextList(QTextDocument * doc)
QTD_EXTERN QTD_EXPORT void* qtd_QTextList_QTextList_QTextDocument
(void *d_ptr,
 void* doc0)
{
    QTextDocument*  __qt_doc0 = (QTextDocument* ) doc0;
    QTextList_QtDShell *__qt_this = new QTextList_QtDShell(d_ptr, (QTextDocument* )__qt_doc0);
    return (void *) __qt_this;

}

// QTextList::add(const QTextBlock & block)
QTD_EXTERN QTD_EXPORT void qtd_QTextList_add_QTextBlock
(void* __this_nativeId,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    __qt_this->add((const QTextBlock& )__qt_block0);

}

// QTextList::count() const
QTD_EXTERN QTD_EXPORT int qtd_QTextList_count_const
(void* __this_nativeId)
{
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextList::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextList_textListFormat_const
(void* __this_nativeId)
{
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    QTextListFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QTextListFormat(__qt_return_value);

    return __d_return_value;
}

// QTextList::item(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextList_item_int_const
(void* __this_nativeId,
 int i0)
{
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->item((int )i0);

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QTextList::itemNumber(const QTextBlock & arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QTextList_itemNumber_QTextBlock_const
(void* __this_nativeId,
 void* arg__1)
{
    const QTextBlock&  __qt_arg__1 = (const QTextBlock& ) *(QTextBlock *)arg__1;
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->itemNumber((const QTextBlock& )__qt_arg__1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextList::itemText(const QTextBlock & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QTextList_itemText_QTextBlock_const
(void* __this_nativeId,
 void* __d_return_value,
 void* arg__1)
{
    const QTextBlock&  __qt_arg__1 = (const QTextBlock& ) *(QTextBlock *)arg__1;
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->itemText((const QTextBlock& )__qt_arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextList::remove(const QTextBlock & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextList_remove_QTextBlock
(void* __this_nativeId,
 void* arg__1)
{
    const QTextBlock&  __qt_arg__1 = (const QTextBlock& ) *(QTextBlock *)arg__1;
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    __qt_this->remove((const QTextBlock& )__qt_arg__1);

}

// QTextList::removeItem(int i)
QTD_EXTERN QTD_EXPORT void qtd_QTextList_removeItem_int
(void* __this_nativeId,
 int i0)
{
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    __qt_this->removeItem((int )i0);

}

// QTextList::setFormat(const QTextListFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextList_setFormat_QTextListFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextListFormat&  __qt_format0 = (const QTextListFormat& ) *(QTextListFormat *)format0;
    QTextList_QtDShell *__qt_this = (QTextList_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QTextListFormat& )__qt_format0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextList_staticMetaObject() {
    return (void*)&QTextList::staticMetaObject;
}


