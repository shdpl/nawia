#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qvariant.h>

#include "QTextCodecPlugin_shell.h"
#include <iostream>
#include <qtextcodecplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QTextCodecFactoryInterface* qtd_QTextCodecPlugin_cast_to_QAbstractTextCodecFactory(QTextCodecPlugin *ptr)
{
    return dynamic_cast<QTextCodecFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QTextCodecPlugin_cast_to_QAbstractFactory(QTextCodecPlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QTextCodecPluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextCodecPluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextCodecPlugin_createEntity(void *nativeId, void* dId)
{
    new QTextCodecPluginEntity((QObject*)nativeId, dId);
}

QTextCodecPlugin_QtDShell::QTextCodecPlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QTextCodecPlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QTextCodecPlugin_QtDShell::~QTextCodecPlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextCodecPlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextCodecPlugin::metaObject();
}

int QTextCodecPlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextCodecPlugin::qt_metacall(_c, _id, _a);
}

int QTextCodecPlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextCodecPlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextCodecPlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QTextCodecPlugin_aliases_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QTextCodecPlugin_aliases_const_dispatch)
QList<QByteArray >  QTextCodecPlugin_QtDShell::aliases() const
{
    QList<QByteArray > __d_return_value;
    qtd_QTextCodecPlugin_aliases_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextCodecPlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QTextCodecPlugin_createForMib_int_dispatch, (void *dId, int mib0))
QTD_FUNC(GUI, QTextCodecPlugin_createForMib_int_dispatch)
QTextCodec*  QTextCodecPlugin_QtDShell::createForMib(int  mib0)
{
    return (QTextCodec*) qtd_QTextCodecPlugin_createForMib_int_dispatch(QObjectLink::getLink(this)->dId, (int )mib0);
}

QTD_FUNC_DECL(GUI, void*, QTextCodecPlugin_createForName_QByteArray_dispatch, (void *dId, void* name0))
QTD_FUNC(GUI, QTextCodecPlugin_createForName_QByteArray_dispatch)
QTextCodec*  QTextCodecPlugin_QtDShell::createForName(const QByteArray&  name0)
{
    return (QTextCodec*) qtd_QTextCodecPlugin_createForName_QByteArray_dispatch(QObjectLink::getLink(this)->dId, &(QByteArray& )name0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextCodecPlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextCodecPlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextCodecPlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QTextCodecPlugin_mibEnums_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QTextCodecPlugin_mibEnums_const_dispatch)
QList<int >  QTextCodecPlugin_QtDShell::mibEnums() const
{
    QList<int > __d_return_value;
    qtd_QTextCodecPlugin_mibEnums_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QTextCodecPlugin_names_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QTextCodecPlugin_names_const_dispatch)
QList<QByteArray >  QTextCodecPlugin_QtDShell::names() const
{
    QList<QByteArray > __d_return_value;
    qtd_QTextCodecPlugin_names_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTextCodecPlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextCodecPlugin_initCallBacks(VoidFunc *virts) {
    qtd_QTextCodecPlugin_aliases_const_dispatch = (qtd_QTextCodecPlugin_aliases_const_dispatch_t) virts[0];
    qtd_QTextCodecPlugin_createForMib_int_dispatch = (qtd_QTextCodecPlugin_createForMib_int_dispatch_t) virts[1];
    qtd_QTextCodecPlugin_createForName_QByteArray_dispatch = (qtd_QTextCodecPlugin_createForName_QByteArray_dispatch_t) virts[2];
    qtd_QTextCodecPlugin_mibEnums_const_dispatch = (qtd_QTextCodecPlugin_mibEnums_const_dispatch_t) virts[3];
    qtd_QTextCodecPlugin_names_const_dispatch = (qtd_QTextCodecPlugin_names_const_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTextCodecPlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
QList<QByteArray >  QTextCodecPlugin_QtDShell::__override_aliases(bool static_call) const
{
    if (static_call) {
        return QList<QByteArray >();
    } else {
        return aliases();
    }
}

void QTextCodecPlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QTextCodec*  QTextCodecPlugin_QtDShell::__override_createForMib(int  mib0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return createForMib((int )mib0);
    }
}

QTextCodec*  QTextCodecPlugin_QtDShell::__override_createForName(const QByteArray&  name0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return createForName((const QByteArray& )name0);
    }
}

void QTextCodecPlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTextCodecPlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTextCodecPlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QList<int >  QTextCodecPlugin_QtDShell::__override_mibEnums(bool static_call) const
{
    if (static_call) {
        return QList<int >();
    } else {
        return mibEnums();
    }
}

QList<QByteArray >  QTextCodecPlugin_QtDShell::__override_names(bool static_call) const
{
    if (static_call) {
        return QList<QByteArray >();
    } else {
        return names();
    }
}

void QTextCodecPlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QTextCodecPlugin::QTextCodecPlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodecPlugin_QTextCodecPlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTextCodecPlugin_QtDShell *__qt_this = new QTextCodecPlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTextCodecPlugin::aliases() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodecPlugin_aliases_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QByteArray >  __qt_return_value = __qt_this->__override_aliases(__do_static_call);

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCodecPlugin::createForMib(int mib)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodecPlugin_createForMib_int
(void* __this_nativeId,
 int mib0)
{
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QTextCodec*  __qt_return_value = __qt_this->__override_createForMib((int )mib0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodecPlugin::createForName(const QByteArray & name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextCodecPlugin_createForName_QByteArray
(void* __this_nativeId,
 void* name0)
{
    const QByteArray&  __qt_name0 = (const QByteArray& ) *(QByteArray *)name0;
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QTextCodec*  __qt_return_value = __qt_this->__override_createForName((const QByteArray& )__qt_name0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextCodecPlugin::mibEnums() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodecPlugin_mibEnums_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<int >  __qt_return_value = __qt_this->__override_mibEnums(__do_static_call);

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextCodecPlugin::names() const
QTD_EXTERN QTD_EXPORT void qtd_QTextCodecPlugin_names_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextCodecPlugin_QtDShell *__qt_this = (QTextCodecPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QByteArray >  __qt_return_value = __qt_this->__override_names(__do_static_call);

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextCodecPlugin_staticMetaObject() {
    return (void*)&QTextCodecPlugin::staticMetaObject;
}


