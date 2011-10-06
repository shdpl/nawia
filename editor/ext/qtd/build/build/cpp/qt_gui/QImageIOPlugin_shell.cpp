#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QImageIOPlugin_shell.h"
#include <iostream>
#include <qimageiohandler.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QImageIOHandlerFactoryInterface* qtd_QImageIOPlugin_cast_to_QAbstractImageIOHandlerFactory(QImageIOPlugin *ptr)
{
    return dynamic_cast<QImageIOHandlerFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QImageIOPlugin_cast_to_QAbstractFactory(QImageIOPlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QImageIOPluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QImageIOPluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QImageIOPlugin_createEntity(void *nativeId, void* dId)
{
    new QImageIOPluginEntity((QObject*)nativeId, dId);
}

QImageIOPlugin_QtDShell::QImageIOPlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QImageIOPlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QImageIOPlugin_QtDShell::~QImageIOPlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QImageIOPlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QImageIOPlugin::metaObject();
}

int QImageIOPlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QImageIOPlugin::qt_metacall(_c, _id, _a);
}

int QImageIOPlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QImageIOPlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QImageIOPlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QImageIOPlugin_QtDShell *__qt_this = (QImageIOPlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch, (void *dId, void* device0, void* format1))
QTD_FUNC(GUI, QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch)
QImageIOPlugin::Capabilities  QImageIOPlugin_QtDShell::capabilities(QIODevice*  device0, const QByteArray&  format1) const
{
    return (QFlags<QImageIOPlugin::Capability>) qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch(QObjectLink::getLink(this)->dId, (QIODevice* )device0, &(QByteArray& )format1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QImageIOPlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch, (void *dId, void* device0, void* format1))
QImageIOHandler*  QImageIOPlugin_QtDShell::create(QIODevice*  device0, const QByteArray&  format1) const
{
    return (QImageIOHandler*) qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch(QObjectLink::getLink(this)->dId, (QIODevice* )device0, &(QByteArray& )format1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QImageIOPlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QImageIOPlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QImageIOPlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QImageIOPlugin_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QImageIOPlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QImageIOPlugin_initCallBacks(VoidFunc *virts) {
    qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch = (qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QImageIOPlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
int  QImageIOPlugin_QtDShell::__override_capabilities(QIODevice*  device0, const QByteArray&  format1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return capabilities((QIODevice* )device0, (const QByteArray& )format1);
    }
}

void QImageIOPlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QImageIOHandler*  QImageIOPlugin_QtDShell::__override_create(QIODevice*  device0, const QByteArray&  format1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return create((QIODevice* )device0, (const QByteArray& )format1);
    }
}

void QImageIOPlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QImageIOPlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QImageIOPlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QImageIOPlugin_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

void QImageIOPlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QImageIOPlugin::QImageIOPlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOPlugin_QImageIOPlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QImageIOPlugin_QtDShell *__qt_this = new QImageIOPlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QImageIOPlugin::capabilities(QIODevice * device, const QByteArray & format) const
QTD_EXTERN QTD_EXPORT int qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const
(void* __this_nativeId,
 void* device0,
 void* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageIOPlugin_QtDShell *__qt_this = (QImageIOPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_capabilities((QIODevice* )__qt_device0, (const QByteArray& )__qt_format1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImageIOPlugin::create(QIODevice * device, const QByteArray & format) const
QTD_EXTERN QTD_EXPORT void* qtd_QImageIOPlugin_create_QIODevice_QByteArray_const
(void* __this_nativeId,
 void* device0,
 void* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const QByteArray&  __qt_format1 = (const QByteArray& ) *(QByteArray *)format1;
    QImageIOPlugin_QtDShell *__qt_this = (QImageIOPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QImageIOHandler*  __qt_return_value = __qt_this->__override_create((QIODevice* )__qt_device0, (const QByteArray& )__qt_format1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QImageIOPlugin::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QImageIOPlugin_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImageIOPlugin_QtDShell *__qt_this = (QImageIOPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QImageIOPlugin_staticMetaObject() {
    return (void*)&QImageIOPlugin::staticMetaObject;
}


