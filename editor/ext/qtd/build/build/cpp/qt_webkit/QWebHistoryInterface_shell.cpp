#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwebhistoryinterface.h>

#include "QWebHistoryInterface_shell.h"
#include <iostream>
#include <qwebhistoryinterface.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

class QWebHistoryInterfaceEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWebHistoryInterfaceEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryInterface_createEntity(void *nativeId, void* dId)
{
    new QWebHistoryInterfaceEntity((QObject*)nativeId, dId);
}

QWebHistoryInterface_QtDShell::QWebHistoryInterface_QtDShell(void *d_ptr, QObject*  parent0)
    : QWebHistoryInterface(parent0),
      QObjectLink(this, d_ptr)
{
}

QWebHistoryInterface_QtDShell::~QWebHistoryInterface_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(WEBKIT, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(WEBKIT, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWebHistoryInterface_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWebHistoryInterface::metaObject();
}

int QWebHistoryInterface_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWebHistoryInterface::qt_metacall(_c, _id, _a);
}

int QWebHistoryInterface_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWebHistoryInterface::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWebHistoryInterface_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWebHistoryInterface_QtDShell *__qt_this = (QWebHistoryInterface_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(WEBKIT, void, QWebHistoryInterface_addHistoryEntry_string_dispatch, (void *dId, const unsigned short* url0, int url0_size))
QTD_FUNC(WEBKIT, QWebHistoryInterface_addHistoryEntry_string_dispatch)
void QWebHistoryInterface_QtDShell::addHistoryEntry(const QString&  url0)
{
    qtd_QWebHistoryInterface_addHistoryEntry_string_dispatch(QObjectLink::getLink(this)->dId, url0.utf16(), url0.size());
}

QTD_FUNC_DECL(WEBKIT, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWebHistoryInterface_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebHistoryInterface_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWebHistoryInterface_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWebHistoryInterface_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(WEBKIT, bool, QWebHistoryInterface_historyContains_string_const_dispatch, (void *dId, const unsigned short* url0, int url0_size))
QTD_FUNC(WEBKIT, QWebHistoryInterface_historyContains_string_const_dispatch)
bool  QWebHistoryInterface_QtDShell::historyContains(const QString&  url0) const
{
    return qtd_QWebHistoryInterface_historyContains_string_const_dispatch(QObjectLink::getLink(this)->dId, url0.utf16(), url0.size());
}

QTD_FUNC_DECL(WEBKIT, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWebHistoryInterface_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryInterface_initCallBacks(VoidFunc *virts) {
    qtd_QWebHistoryInterface_addHistoryEntry_string_dispatch = (qtd_QWebHistoryInterface_addHistoryEntry_string_dispatch_t) virts[0];
    qtd_QWebHistoryInterface_historyContains_string_const_dispatch = (qtd_QWebHistoryInterface_historyContains_string_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QWebHistoryInterface_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QWebHistoryInterface_QtDShell::__override_addHistoryEntry(const QString&  url0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        addHistoryEntry((const QString& )url0);
    }
}

void QWebHistoryInterface_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QWebHistoryInterface_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QWebHistoryInterface_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWebHistoryInterface_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QWebHistoryInterface_QtDShell::__override_historyContains(const QString&  url0, bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return historyContains((const QString& )url0);
    }
}

void QWebHistoryInterface_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QWebHistoryInterface::QWebHistoryInterface(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryInterface_QWebHistoryInterface_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QWebHistoryInterface_QtDShell *__qt_this = new QWebHistoryInterface_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QWebHistoryInterface::addHistoryEntry(const QString & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryInterface_addHistoryEntry_string
(void* __this_nativeId,
 DArray url0)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QWebHistoryInterface_QtDShell *__qt_this = (QWebHistoryInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addHistoryEntry((const QString& )__qt_url0, __do_static_call);

}

// QWebHistoryInterface::historyContains(const QString & url) const
QTD_EXTERN QTD_EXPORT bool qtd_QWebHistoryInterface_historyContains_string_const
(void* __this_nativeId,
 DArray url0)
{
    QString __qt_url0 = QString::fromUtf8((const char *)url0.ptr, url0.length);
    QWebHistoryInterface_QtDShell *__qt_this = (QWebHistoryInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_historyContains((const QString& )__qt_url0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebHistoryInterface::defaultInterface()
QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryInterface_defaultInterface
()
{
    QWebHistoryInterface*  __qt_return_value = QWebHistoryInterface_QtDShell::defaultInterface();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebHistoryInterface::setDefaultInterface(QWebHistoryInterface * defaultInterface)
QTD_EXTERN QTD_EXPORT void qtd_QWebHistoryInterface_setDefaultInterface_QWebHistoryInterface
(void* defaultInterface0)
{
    QWebHistoryInterface*  __qt_defaultInterface0 = (QWebHistoryInterface* ) defaultInterface0;
    QWebHistoryInterface_QtDShell::setDefaultInterface((QWebHistoryInterface* )__qt_defaultInterface0);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWebHistoryInterface_staticMetaObject() {
    return (void*)&QWebHistoryInterface::staticMetaObject;
}


