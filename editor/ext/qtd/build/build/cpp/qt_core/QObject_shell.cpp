#include <QVarLengthArray>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QObject_shell.h"
#include <iostream>
#include <qobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QObject_delete(void* nativeId)
{
    delete (QObject_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QObject_destroy(void* nativeId)
{
    call_destructor((QObject_QtDShell*)nativeId);
}

class QObjectEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QObjectEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QObject_createEntity(void *nativeId, void* dId)
{
    new QObjectEntity((QObject*)nativeId, dId);
}

QObject_QtDShell::QObject_QtDShell(void *d_ptr, QObject*  parent0)
    : QObject(parent0),
      QObjectLink(this, d_ptr)
{
}

QObject_QtDShell::~QObject_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))
QTD_FUNC(CORE, QObject_metaObject_dispatch)
QTD_FUNC(CORE, QObject_qt_metacall_dispatch)

const QMetaObject * QObject_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QObject::metaObject();
}

int QObject_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QObject::qt_metacall(_c, _id, _a);
}

int QObject_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QObject::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QObject_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(CORE, QObject_childEvent_QChildEvent_dispatch)
void QObject_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(CORE, QObject_customEvent_QEvent_dispatch)
void QObject_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(CORE, QObject_event_QEvent_dispatch)
bool  QObject_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
QTD_FUNC(CORE, QObject_eventFilter_QObject_QEvent_dispatch)
bool  QObject_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(CORE, QObject_timerEvent_QTimerEvent_dispatch)
void QObject_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QObject_initCallBacks(VoidFunc *virts, VoidFunc *sigs) {
    qtd_QObject_childEvent_QChildEvent_dispatch = (qtd_QObject_childEvent_QChildEvent_dispatch_t) virts[0];
    qtd_QObject_customEvent_QEvent_dispatch = (qtd_QObject_customEvent_QEvent_dispatch_t) virts[1];
    qtd_QObject_event_QEvent_dispatch = (qtd_QObject_event_QEvent_dispatch_t) virts[2];
    qtd_QObject_eventFilter_QObject_QEvent_dispatch = (qtd_QObject_eventFilter_QObject_QEvent_dispatch_t) virts[3];
    qtd_QObject_timerEvent_QTimerEvent_dispatch = (qtd_QObject_timerEvent_QTimerEvent_dispatch_t) virts[4];
    qtd_QObject_qt_metacall_dispatch = (QtMetacallCallback)sigs[0];
    qtd_QObject_metaObject_dispatch = (MetaObjectCallback)sigs[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QObject_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QObject_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QObject_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QObject_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QObject_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QObject_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QTD_EXTERN QTD_EXPORT void* qtd_get_d_qobject(void *nativeId)
{
    return QObjectEntity::getDId((QObject*)nativeId);
}

QTD_EXTERN QTD_EXPORT void qtd_create_qobject_entity(void* nativeId, void *dId)
{
    new QObjectLink((QObject*)nativeId, dId);
}

QTD_EXTERN QTD_EXPORT void* qtd_QObject_metaObject(void* nativeId)
{
    return (void*)((QObject*)nativeId)->metaObject();
}


// ---externC---
// QObject::QObject(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QObject_QObject_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QObject_QtDShell *__qt_this = new QObject_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QObject::blockSignals(bool b)
QTD_EXTERN QTD_EXPORT bool qtd_QObject_blockSignals_bool
(void* __this_nativeId,
 bool b0)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->blockSignals((bool )b0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::children() const
QTD_EXTERN QTD_EXPORT void qtd_QObject_children_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    const QList<QObject* >&  __qt_return_value = __qt_this->children();

QList<QObject* > &__d_return_value_tmp = (*(QList<QObject* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QObject::deleteLater()
QTD_EXTERN QTD_EXPORT void qtd_QObject_deleteLater
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->deleteLater();

}

// QObject::dumpObjectInfo()
QTD_EXTERN QTD_EXPORT void qtd_QObject_dumpObjectInfo
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->dumpObjectInfo();

}

// QObject::dumpObjectTree()
QTD_EXTERN QTD_EXPORT void qtd_QObject_dumpObjectTree
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->dumpObjectTree();

}

// QObject::dynamicPropertyNames() const
QTD_EXTERN QTD_EXPORT void qtd_QObject_dynamicPropertyNames_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    QList<QByteArray >  __qt_return_value = __qt_this->dynamicPropertyNames();

QList<QByteArray > &__d_return_value_tmp = (*(QList<QByteArray > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QObject::installEventFilter(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_installEventFilter_QObject
(void* __this_nativeId,
 void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->installEventFilter((QObject* )__qt_arg__1);

}

// QObject::isWidgetType() const
QTD_EXTERN QTD_EXPORT bool qtd_QObject_isWidgetType_const
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWidgetType();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::killTimer(int id)
QTD_EXTERN QTD_EXPORT void qtd_QObject_killTimer_int
(void* __this_nativeId,
 int id0)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->killTimer((int )id0);

}

// QObject::moveToThread(QThread * thread)
// QObject::objectName() const
QTD_EXTERN QTD_EXPORT void qtd_QObject_objectName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->objectName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QObject::parent() const
QTD_EXTERN QTD_EXPORT void* qtd_QObject_parent_const
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->parent();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QObject::property(const char * name) const
QTD_EXTERN QTD_EXPORT void* qtd_QObject_property_nativepointerchar_const
(void* __this_nativeId,
 char* name0)
{
    const char*  __qt_name0 = (const char* ) name0;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->property((const char* )__qt_name0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QObject::removeEventFilter(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_removeEventFilter_QObject
(void* __this_nativeId,
 void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->removeEventFilter((QObject* )__qt_arg__1);

}

// QObject::sender() const
QTD_EXTERN QTD_EXPORT void* qtd_QObject_sender_const
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->__public_sender();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QObject::setObjectName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QObject_setObjectName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->setObjectName((const QString& )__qt_name0);

}

// QObject::setParent(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_setParent_QObject
(void* __this_nativeId,
 void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    __qt_this->setParent((QObject* )__qt_arg__1);

}

// QObject::setProperty(const char * name, const QVariant & value)
QTD_EXTERN QTD_EXPORT bool qtd_QObject_setProperty_nativepointerchar_QVariant
(void* __this_nativeId,
 char* name0,
 QVariant* value1)
{
    const char*  __qt_name0 = (const char* ) name0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setProperty((const char* )__qt_name0, (const QVariant& )__qt_value1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::signalsBlocked() const
QTD_EXTERN QTD_EXPORT bool qtd_QObject_signalsBlocked_const
(void* __this_nativeId)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->signalsBlocked();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::startTimer(int interval)
QTD_EXTERN QTD_EXPORT int qtd_QObject_startTimer_int
(void* __this_nativeId,
 int interval0)
{
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->startTimer((int )interval0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::thread() const
// QObject::childEvent(QChildEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_childEvent_QChildEvent
(void* __this_nativeId,
 void* arg__1)
{
    QChildEvent*  __qt_arg__1 = (QChildEvent* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_arg__1, __do_static_call);

}

// QObject::customEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_customEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_customEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QObject::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QObject_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::eventFilter(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QObject_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QObject::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QObject_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QObject_QtDShell *__qt_this = (QObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QObject_staticMetaObject() {
    return (void*)&QObject::staticMetaObject;
}


