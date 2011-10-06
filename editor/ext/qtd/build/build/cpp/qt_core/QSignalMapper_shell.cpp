#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsignalmapper.h>
#include <qvariant.h>

#include "QSignalMapper_shell.h"
#include <iostream>
#include <qsignalmapper.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QSignalMapperEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSignalMapperEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_createEntity(void *nativeId, void* dId)
{
    new QSignalMapperEntity((QObject*)nativeId, dId);
}

QSignalMapper_QtDShell::QSignalMapper_QtDShell(void *d_ptr, QObject*  parent0)
    : QSignalMapper(parent0),
      QObjectLink(this, d_ptr)
{
}

QSignalMapper_QtDShell::~QSignalMapper_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSignalMapper_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSignalMapper::metaObject();
}

int QSignalMapper_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSignalMapper::qt_metacall(_c, _id, _a);
}

int QSignalMapper_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSignalMapper::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSignalMapper_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSignalMapper_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSignalMapper_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSignalMapper_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSignalMapper_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSignalMapper_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSignalMapper_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSignalMapper_QtDShell::__public_mapped(QObject*  arg__1)
{
    QSignalMapper::mapped((QObject* )arg__1);
}

void QSignalMapper_QtDShell::__public_mapped(const QString&  arg__1)
{
    QSignalMapper::mapped((const QString& )arg__1);
}

void QSignalMapper_QtDShell::__public_mapped(int  arg__1)
{
    QSignalMapper::mapped((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QSignalMapper_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSignalMapper_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSignalMapper_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSignalMapper_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSignalMapper_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QSignalMapper::mapped(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_mapped_QObject
(void* __this_nativeId,
 void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->__public_mapped((QObject* )__qt_arg__1);

}

// QSignalMapper::mapped(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_mapped_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->__public_mapped((const QString& )__qt_arg__1);

}

// QSignalMapper::mapped(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_mapped_int
(void* __this_nativeId,
 int arg__1)
{
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->__public_mapped((int )arg__1);

}

// ---externC---
// QSignalMapper::QSignalMapper(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSignalMapper_QSignalMapper_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSignalMapper_QtDShell *__qt_this = new QSignalMapper_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSignalMapper::map()
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_map
(void* __this_nativeId)
{
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->map();

}

// QSignalMapper::map(QObject * sender)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_map_QObject
(void* __this_nativeId,
 void* sender0)
{
    QObject*  __qt_sender0 = (QObject* ) sender0;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->map((QObject* )__qt_sender0);

}

// QSignalMapper::mapping(QObject * object) const
QTD_EXTERN QTD_EXPORT void* qtd_QSignalMapper_mapping_QObject_const
(void* __this_nativeId,
 void* object0)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->mapping((QObject* )__qt_object0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSignalMapper::mapping(const QString & text) const
QTD_EXTERN QTD_EXPORT void* qtd_QSignalMapper_mapping_string_const
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->mapping((const QString& )__qt_text0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSignalMapper::mapping(int id) const
QTD_EXTERN QTD_EXPORT void* qtd_QSignalMapper_mapping_int_const
(void* __this_nativeId,
 int id0)
{
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->mapping((int )id0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSignalMapper::removeMappings(QObject * sender)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_removeMappings_QObject
(void* __this_nativeId,
 void* sender0)
{
    QObject*  __qt_sender0 = (QObject* ) sender0;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->removeMappings((QObject* )__qt_sender0);

}

// QSignalMapper::setMapping(QObject * sender, QObject * object)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_setMapping_QObject_QObject
(void* __this_nativeId,
 void* sender0,
 void* object1)
{
    QObject*  __qt_sender0 = (QObject* ) sender0;
    QObject*  __qt_object1 = (QObject* ) object1;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->setMapping((QObject* )__qt_sender0, (QObject* )__qt_object1);

}

// QSignalMapper::setMapping(QObject * sender, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_setMapping_QObject_string
(void* __this_nativeId,
 void* sender0,
 DArray text1)
{
    QObject*  __qt_sender0 = (QObject* ) sender0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->setMapping((QObject* )__qt_sender0, (const QString& )__qt_text1);

}

// QSignalMapper::setMapping(QObject * sender, int id)
QTD_EXTERN QTD_EXPORT void qtd_QSignalMapper_setMapping_QObject_int
(void* __this_nativeId,
 void* sender0,
 int id1)
{
    QObject*  __qt_sender0 = (QObject* ) sender0;
    QSignalMapper_QtDShell *__qt_this = (QSignalMapper_QtDShell *) __this_nativeId;
    __qt_this->setMapping((QObject* )__qt_sender0, (int )id1);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSignalMapper_staticMetaObject() {
    return (void*)&QSignalMapper::staticMetaObject;
}


