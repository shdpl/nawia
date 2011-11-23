#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsocketnotifier.h>
#include <qvariant.h>

#include "QSocketNotifier_shell.h"
#include <iostream>
#include <qsocketnotifier.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QSocketNotifierEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSocketNotifierEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSocketNotifier_createEntity(void *nativeId, void* dId)
{
    new QSocketNotifierEntity((QObject*)nativeId, dId);
}

QSocketNotifier_QtDShell::QSocketNotifier_QtDShell(void *d_ptr, int  socket0, QSocketNotifier::Type  arg__2, QObject*  parent2)
    : QSocketNotifier(socket0, arg__2, parent2),
      QObjectLink(this, d_ptr)
{
}

QSocketNotifier_QtDShell::~QSocketNotifier_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSocketNotifier_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSocketNotifier::metaObject();
}

int QSocketNotifier_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSocketNotifier::qt_metacall(_c, _id, _a);
}

int QSocketNotifier_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSocketNotifier::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSocketNotifier_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSocketNotifier_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSocketNotifier_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSocketNotifier_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSocketNotifier_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSocketNotifier_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSocketNotifier_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSocketNotifier_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSocketNotifier_QtDShell::__public_activated(int  socket0)
{
    QSocketNotifier::activated((int )socket0);
}

// Write virtual function overries used to decide on static/virtual calls
void QSocketNotifier_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSocketNotifier_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSocketNotifier_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QSocketNotifier::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSocketNotifier_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSocketNotifier_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QSocketNotifier::activated(int socket)
QTD_EXTERN QTD_EXPORT void qtd_QSocketNotifier_activated_int
(void* __this_nativeId,
 int socket0)
{
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((int )socket0);

}

// ---externC---
// QSocketNotifier::QSocketNotifier(int socket, QSocketNotifier::Type arg__2, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSocketNotifier_QSocketNotifier_int_Type_QObject
(void *d_ptr,
 int socket0,
 int arg__2,
 void* parent2)
{
    QSocketNotifier::Type __qt_arg__2 = (QSocketNotifier::Type) arg__2;
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QSocketNotifier_QtDShell *__qt_this = new QSocketNotifier_QtDShell(d_ptr, (int )socket0, (QSocketNotifier::Type )__qt_arg__2, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QSocketNotifier::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QSocketNotifier_isEnabled_const
(void* __this_nativeId)
{
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSocketNotifier::setEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSocketNotifier_setEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )arg__1);

}

// QSocketNotifier::socket() const
QTD_EXTERN QTD_EXPORT int qtd_QSocketNotifier_socket_const
(void* __this_nativeId)
{
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->socket();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSocketNotifier::type() const
QTD_EXTERN QTD_EXPORT int qtd_QSocketNotifier_type_const
(void* __this_nativeId)
{
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSocketNotifier::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QSocketNotifier_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QSocketNotifier_QtDShell *__qt_this = (QSocketNotifier_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSocketNotifier_staticMetaObject() {
    return (void*)&QSocketNotifier::staticMetaObject;
}


