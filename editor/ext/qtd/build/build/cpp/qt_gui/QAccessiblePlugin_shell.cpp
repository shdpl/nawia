#include <QVariant>
#include <qaccessible.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QAccessiblePlugin_shell.h"
#include <iostream>
#include <qaccessibleplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QAccessibleFactoryInterface* qtd_QAccessiblePlugin_cast_to_QAbstractAccessibleFactory(QAccessiblePlugin *ptr)
{
    return dynamic_cast<QAccessibleFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAccessiblePlugin_cast_to_QAbstractFactory(QAccessiblePlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QAccessiblePluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAccessiblePluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAccessiblePlugin_createEntity(void *nativeId, void* dId)
{
    new QAccessiblePluginEntity((QObject*)nativeId, dId);
}

QAccessiblePlugin_QtDShell::QAccessiblePlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QAccessiblePlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QAccessiblePlugin_QtDShell::~QAccessiblePlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAccessiblePlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAccessiblePlugin::metaObject();
}

int QAccessiblePlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAccessiblePlugin::qt_metacall(_c, _id, _a);
}

int QAccessiblePlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAccessiblePlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAccessiblePlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAccessiblePlugin_QtDShell *__qt_this = (QAccessiblePlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAccessiblePlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractAccessibleFactory_create_string_QObject_dispatch, (void *dId, const unsigned short* key0, int key0_size, void* object1))
QAccessibleInterface*  QAccessiblePlugin_QtDShell::create(const QString&  key0, QObject*  object1)
{
    return (QAccessibleInterface*) qtd_QAbstractAccessibleFactory_create_string_QObject_dispatch(QObjectLink::getLink(this)->dId, key0.utf16(), key0.size(), (QObject* )object1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAccessiblePlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAccessiblePlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAccessiblePlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAccessiblePlugin_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAccessiblePlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessiblePlugin_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QAccessiblePlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QAccessiblePlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QAccessibleInterface*  QAccessiblePlugin_QtDShell::__override_create(const QString&  key0, QObject*  object1, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0, (QObject* )object1);
    }
}

void QAccessiblePlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QAccessiblePlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAccessiblePlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QAccessiblePlugin_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

void QAccessiblePlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QAccessiblePlugin::QAccessiblePlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessiblePlugin_QAccessiblePlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAccessiblePlugin_QtDShell *__qt_this = new QAccessiblePlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAccessiblePlugin::create(const QString & key, QObject * object)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessiblePlugin_create_string_QObject
(void* __this_nativeId,
 DArray key0,
 void* object1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QObject*  __qt_object1 = (QObject* ) object1;
    QAccessiblePlugin_QtDShell *__qt_this = (QAccessiblePlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QAccessibleInterface*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, (QObject* )__qt_object1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessiblePlugin::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAccessiblePlugin_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAccessiblePlugin_QtDShell *__qt_this = (QAccessiblePlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAccessiblePlugin_staticMetaObject() {
    return (void*)&QAccessiblePlugin::staticMetaObject;
}


