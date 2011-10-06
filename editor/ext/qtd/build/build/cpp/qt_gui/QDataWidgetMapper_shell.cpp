#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QDataWidgetMapper_shell.h"
#include <iostream>
#include <qdatawidgetmapper.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDataWidgetMapperEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDataWidgetMapperEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_createEntity(void *nativeId, void* dId)
{
    new QDataWidgetMapperEntity((QObject*)nativeId, dId);
}

QDataWidgetMapper_QtDShell::QDataWidgetMapper_QtDShell(void *d_ptr, QObject*  parent0)
    : QDataWidgetMapper(parent0),
      QObjectLink(this, d_ptr)
{
}

QDataWidgetMapper_QtDShell::~QDataWidgetMapper_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDataWidgetMapper_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDataWidgetMapper::metaObject();
}

int QDataWidgetMapper_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDataWidgetMapper::qt_metacall(_c, _id, _a);
}

int QDataWidgetMapper_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDataWidgetMapper::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDataWidgetMapper_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDataWidgetMapper_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDataWidgetMapper_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QDataWidgetMapper_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDataWidgetMapper_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QDataWidgetMapper_setCurrentIndex_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QDataWidgetMapper_setCurrentIndex_int_dispatch)
void QDataWidgetMapper_QtDShell::setCurrentIndex(int  index0)
{
    qtd_QDataWidgetMapper_setCurrentIndex_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDataWidgetMapper_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_initCallBacks(VoidFunc *virts) {
    qtd_QDataWidgetMapper_setCurrentIndex_int_dispatch = (qtd_QDataWidgetMapper_setCurrentIndex_int_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QDataWidgetMapper_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDataWidgetMapper_QtDShell::__public_currentIndexChanged(int  index0)
{
    QDataWidgetMapper::currentIndexChanged((int )index0);
}

// Write virtual function overries used to decide on static/virtual calls
void QDataWidgetMapper_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDataWidgetMapper_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QDataWidgetMapper_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QDataWidgetMapper_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDataWidgetMapper_QtDShell::__override_setCurrentIndex(int  index0, bool static_call)
{
    if (static_call) {
        QDataWidgetMapper::setCurrentIndex((int )index0);
    } else {
        setCurrentIndex((int )index0);
    }
}

void QDataWidgetMapper_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QDataWidgetMapper::currentIndexChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_currentIndexChanged_int
(void* __this_nativeId,
 int index0)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->__public_currentIndexChanged((int )index0);

}

// ---externC---
// QDataWidgetMapper::QDataWidgetMapper(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_QDataWidgetMapper_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QDataWidgetMapper_QtDShell *__qt_this = new QDataWidgetMapper_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QDataWidgetMapper::addMapping(QWidget * widget, int section)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_addMapping_QWidget_int
(void* __this_nativeId,
 void* widget0,
 int section1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->addMapping((QWidget* )__qt_widget0, (int )section1);

}

// QDataWidgetMapper::addMapping(QWidget * widget, int section, const QByteArray & propertyName)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_addMapping_QWidget_int_QByteArray
(void* __this_nativeId,
 void* widget0,
 int section1,
 void* propertyName2)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    const QByteArray&  __qt_propertyName2 = (const QByteArray& ) *(QByteArray *)propertyName2;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->addMapping((QWidget* )__qt_widget0, (int )section1, (const QByteArray& )__qt_propertyName2);

}

// QDataWidgetMapper::clearMapping()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_clearMapping
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->clearMapping();

}

// QDataWidgetMapper::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QDataWidgetMapper_currentIndex_const
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::itemDelegate() const
QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_itemDelegate_const
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegate();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::mappedPropertyName(QWidget * widget) const
QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_mappedPropertyName_QWidget_const
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->mappedPropertyName((QWidget* )__qt_widget0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QDataWidgetMapper::mappedSection(QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QDataWidgetMapper_mappedSection_QWidget_const
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->mappedSection((QWidget* )__qt_widget0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::mappedWidgetAt(int section) const
QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_mappedWidgetAt_int_const
(void* __this_nativeId,
 int section0)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->mappedWidgetAt((int )section0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_model_const
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QDataWidgetMapper_orientation_const
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::removeMapping(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_removeMapping_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->removeMapping((QWidget* )__qt_widget0);

}

// QDataWidgetMapper::revert()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_revert
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->revert();

}

// QDataWidgetMapper::rootIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_rootIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->rootIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QDataWidgetMapper::setCurrentModelIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setCurrentModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setCurrentModelIndex((const QModelIndex& )__qt_index0);

}

// QDataWidgetMapper::setItemDelegate(QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setItemDelegate_QAbstractItemDelegate
(void* __this_nativeId,
 void* delegate0)
{
    QAbstractItemDelegate*  __qt_delegate0 = (QAbstractItemDelegate* ) delegate0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegate((QAbstractItemDelegate* )__qt_delegate0);

}

// QDataWidgetMapper::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setModel((QAbstractItemModel* )__qt_model0);

}

// QDataWidgetMapper::setOrientation(Qt::Orientation aOrientation)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setOrientation_Orientation
(void* __this_nativeId,
 int aOrientation0)
{
    Qt::Orientation __qt_aOrientation0 = (Qt::Orientation) aOrientation0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_aOrientation0);

}

// QDataWidgetMapper::setRootIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setRootIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setRootIndex((const QModelIndex& )__qt_index0);

}

// QDataWidgetMapper::setSubmitPolicy(QDataWidgetMapper::SubmitPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setSubmitPolicy_SubmitPolicy
(void* __this_nativeId,
 int policy0)
{
    QDataWidgetMapper::SubmitPolicy __qt_policy0 = (QDataWidgetMapper::SubmitPolicy) policy0;
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->setSubmitPolicy((QDataWidgetMapper::SubmitPolicy )__qt_policy0);

}

// QDataWidgetMapper::submit()
QTD_EXTERN QTD_EXPORT bool qtd_QDataWidgetMapper_submit
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->submit();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::submitPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QDataWidgetMapper_submitPolicy_const
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->submitPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDataWidgetMapper::toFirst()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_toFirst
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->toFirst();

}

// QDataWidgetMapper::toLast()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_toLast
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->toLast();

}

// QDataWidgetMapper::toNext()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_toNext
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->toNext();

}

// QDataWidgetMapper::toPrevious()
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_toPrevious
(void* __this_nativeId)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    __qt_this->toPrevious();

}

// QDataWidgetMapper::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QDataWidgetMapper_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QDataWidgetMapper_QtDShell *__qt_this = (QDataWidgetMapper_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setCurrentIndex((int )index0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDataWidgetMapper_staticMetaObject() {
    return (void*)&QDataWidgetMapper::staticMetaObject;
}


