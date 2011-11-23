#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiconengine.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QIconEnginePluginV2_shell.h"
#include <iostream>
#include <qiconengineplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QIconEngineFactoryInterfaceV2* qtd_QIconEnginePluginV2_cast_to_QAbstractIconEngineFactoryV2(QIconEnginePluginV2 *ptr)
{
    return dynamic_cast<QIconEngineFactoryInterfaceV2*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QIconEnginePluginV2_cast_to_QAbstractFactory(QIconEnginePluginV2 *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QIconEnginePluginV2Entity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QIconEnginePluginV2Entity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QIconEnginePluginV2_createEntity(void *nativeId, void* dId)
{
    new QIconEnginePluginV2Entity((QObject*)nativeId, dId);
}

QIconEnginePluginV2_QtDShell::QIconEnginePluginV2_QtDShell(void *d_ptr, QObject*  parent0)
    : QIconEnginePluginV2(parent0),
      QObjectLink(this, d_ptr)
{
}

QIconEnginePluginV2_QtDShell::~QIconEnginePluginV2_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QIconEnginePluginV2_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QIconEnginePluginV2::metaObject();
}

int QIconEnginePluginV2_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QIconEnginePluginV2::qt_metacall(_c, _id, _a);
}

int QIconEnginePluginV2_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QIconEnginePluginV2::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QIconEnginePluginV2_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QIconEnginePluginV2_QtDShell *__qt_this = (QIconEnginePluginV2_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QIconEnginePluginV2_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractIconEngineFactoryV2_create_string_dispatch, (void *dId, const unsigned short* filename0, int filename0_size))
QIconEngineV2*  QIconEnginePluginV2_QtDShell::create(const QString&  filename0)
{
    return (QIconEngineV2*) qtd_QAbstractIconEngineFactoryV2_create_string_dispatch(QObjectLink::getLink(this)->dId, filename0.utf16(), filename0.size());
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QIconEnginePluginV2_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QIconEnginePluginV2_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QIconEnginePluginV2_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QIconEnginePluginV2_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QIconEnginePluginV2_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QIconEnginePluginV2_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QIconEnginePluginV2_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QIconEnginePluginV2_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QIconEngineV2*  QIconEnginePluginV2_QtDShell::__override_create(const QString&  filename0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )filename0);
    }
}

void QIconEnginePluginV2_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QIconEnginePluginV2_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QIconEnginePluginV2_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QIconEnginePluginV2_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

void QIconEnginePluginV2_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QIconEnginePluginV2::QIconEnginePluginV2(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QIconEnginePluginV2_QIconEnginePluginV2_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QIconEnginePluginV2_QtDShell *__qt_this = new QIconEnginePluginV2_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QIconEnginePluginV2::create(const QString & filename)
QTD_EXTERN QTD_EXPORT void* qtd_QIconEnginePluginV2_create_string
(void* __this_nativeId,
 DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QIconEnginePluginV2_QtDShell *__qt_this = (QIconEnginePluginV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QIconEngineV2*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_filename0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QIconEnginePluginV2::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QIconEnginePluginV2_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QIconEnginePluginV2_QtDShell *__qt_this = (QIconEnginePluginV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QIconEnginePluginV2_staticMetaObject() {
    return (void*)&QIconEnginePluginV2::staticMetaObject;
}


