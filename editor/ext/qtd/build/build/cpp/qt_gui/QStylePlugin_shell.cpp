#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qvariant.h>

#include "QStylePlugin_shell.h"
#include <iostream>
#include <qstyleplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QStyleFactoryInterface* qtd_QStylePlugin_cast_to_QAbstractStyleFactory(QStylePlugin *ptr)
{
    return dynamic_cast<QStyleFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QStylePlugin_cast_to_QAbstractFactory(QStylePlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QStylePluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QStylePluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QStylePlugin_createEntity(void *nativeId, void* dId)
{
    new QStylePluginEntity((QObject*)nativeId, dId);
}

QStylePlugin_QtDShell::QStylePlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QStylePlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QStylePlugin_QtDShell::~QStylePlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QStylePlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QStylePlugin::metaObject();
}

int QStylePlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QStylePlugin::qt_metacall(_c, _id, _a);
}

int QStylePlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QStylePlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QStylePlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QStylePlugin_QtDShell *__qt_this = (QStylePlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QStylePlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractStyleFactory_create_string_dispatch, (void *dId, const unsigned short* key0, int key0_size))
QStyle*  QStylePlugin_QtDShell::create(const QString&  key0)
{
    return (QStyle*) qtd_QAbstractStyleFactory_create_string_dispatch(QObjectLink::getLink(this)->dId, key0.utf16(), key0.size());
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QStylePlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QStylePlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QStylePlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QStylePlugin_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QStylePlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QStylePlugin_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QStylePlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QStylePlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QStyle*  QStylePlugin_QtDShell::__override_create(const QString&  key0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0);
    }
}

void QStylePlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QStylePlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QStylePlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QStylePlugin_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

void QStylePlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QStylePlugin::QStylePlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QStylePlugin_QStylePlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QStylePlugin_QtDShell *__qt_this = new QStylePlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QStylePlugin::create(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QStylePlugin_create_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QStylePlugin_QtDShell *__qt_this = (QStylePlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStyle*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStylePlugin::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QStylePlugin_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStylePlugin_QtDShell *__qt_this = (QStylePlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QStylePlugin_staticMetaObject() {
    return (void*)&QStylePlugin::staticMetaObject;
}


