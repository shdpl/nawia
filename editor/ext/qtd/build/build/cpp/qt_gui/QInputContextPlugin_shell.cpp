#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QInputContextPlugin_shell.h"
#include <iostream>
#include <qinputcontextplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QInputContextFactoryInterface* qtd_QInputContextPlugin_cast_to_QAbstractInputContextFactory(QInputContextPlugin *ptr)
{
    return dynamic_cast<QInputContextFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QInputContextPlugin_cast_to_QAbstractFactory(QInputContextPlugin *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

class QInputContextPluginEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QInputContextPluginEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_createEntity(void *nativeId, void* dId)
{
    new QInputContextPluginEntity((QObject*)nativeId, dId);
}

QInputContextPlugin_QtDShell::QInputContextPlugin_QtDShell(void *d_ptr, QObject*  parent0)
    : QInputContextPlugin(parent0),
      QObjectLink(this, d_ptr)
{
}

QInputContextPlugin_QtDShell::~QInputContextPlugin_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QInputContextPlugin_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QInputContextPlugin::metaObject();
}

int QInputContextPlugin_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QInputContextPlugin::qt_metacall(_c, _id, _a);
}

int QInputContextPlugin_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QInputContextPlugin::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QInputContextPlugin_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QInputContextPlugin_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractInputContextFactory_create_string_dispatch, (void *dId, const unsigned short* key0, int key0_size))
QInputContext*  QInputContextPlugin_QtDShell::create(const QString&  key0)
{
    return (QInputContext*) qtd_QAbstractInputContextFactory_create_string_dispatch(QObjectLink::getLink(this)->dId, key0.utf16(), key0.size());
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputContextPlugin_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_description_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* key0, int key0_size))
QString  QInputContextPlugin_QtDShell::description(const QString&  key0)
{
    DArray ret_str;
    qtd_QAbstractInputContextFactory_description_string_dispatch(QObjectLink::getLink(this)->dId, &ret_str, key0.utf16(), key0.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_displayName_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* key0, int key0_size))
QString  QInputContextPlugin_QtDShell::displayName(const QString&  key0)
{
    DArray ret_str;
    qtd_QAbstractInputContextFactory_displayName_string_dispatch(QObjectLink::getLink(this)->dId, &ret_str, key0.utf16(), key0.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QInputContextPlugin_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QInputContextPlugin_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QInputContextPlugin_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_languages_string_dispatch, (void *dId, void * __d_arr, const unsigned short* key0, int key0_size))
QStringList  QInputContextPlugin_QtDShell::languages(const QString&  key0)
{
    QStringList __d_return_value;
    qtd_QAbstractInputContextFactory_languages_string_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, key0.utf16(), key0.size());
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QInputContextPlugin_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QInputContextPlugin_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QInputContextPlugin_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QInputContext*  QInputContextPlugin_QtDShell::__override_create(const QString&  key0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0);
    }
}

void QInputContextPlugin_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QString  QInputContextPlugin_QtDShell::__override_description(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return description((const QString& )key0);
    }
}

QString  QInputContextPlugin_QtDShell::__override_displayName(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return displayName((const QString& )key0);
    }
}

bool  QInputContextPlugin_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QInputContextPlugin_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QStringList  QInputContextPlugin_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

QStringList  QInputContextPlugin_QtDShell::__override_languages(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QStringList();
    } else {
        return languages((const QString& )key0);
    }
}

void QInputContextPlugin_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QInputContextPlugin::QInputContextPlugin(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QInputContextPlugin_QInputContextPlugin_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QInputContextPlugin_QtDShell *__qt_this = new QInputContextPlugin_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QInputContextPlugin::create(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QInputContextPlugin_create_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QInputContext*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QInputContextPlugin::description(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_description_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_description((const QString& )__qt_key0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContextPlugin::displayName(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_displayName_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_displayName((const QString& )__qt_key0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContextPlugin::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QInputContextPlugin::languages(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextPlugin_languages_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QInputContextPlugin_QtDShell *__qt_this = (QInputContextPlugin_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_languages((const QString& )__qt_key0, __do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QInputContextPlugin_staticMetaObject() {
    return (void*)&QInputContextPlugin::staticMetaObject;
}


