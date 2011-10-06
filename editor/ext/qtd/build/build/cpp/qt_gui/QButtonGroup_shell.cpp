#include <QVariant>
#include <qabstractbutton.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QButtonGroup_shell.h"
#include <iostream>
#include <qbuttongroup.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QButtonGroupEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QButtonGroupEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_createEntity(void *nativeId, void* dId)
{
    new QButtonGroupEntity((QObject*)nativeId, dId);
}

QButtonGroup_QtDShell::QButtonGroup_QtDShell(void *d_ptr, QObject*  parent0)
    : QButtonGroup(parent0),
      QObjectLink(this, d_ptr)
{
}

QButtonGroup_QtDShell::~QButtonGroup_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QButtonGroup_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QButtonGroup::metaObject();
}

int QButtonGroup_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QButtonGroup::qt_metacall(_c, _id, _a);
}

int QButtonGroup_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QButtonGroup::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QButtonGroup_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QButtonGroup_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QButtonGroup_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QButtonGroup_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QButtonGroup_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QButtonGroup_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QButtonGroup_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QButtonGroup_QtDShell::__public_buttonClicked(QAbstractButton*  arg__1)
{
    QButtonGroup::buttonClicked((QAbstractButton* )arg__1);
}

void QButtonGroup_QtDShell::__public_buttonClicked(int  arg__1)
{
    QButtonGroup::buttonClicked((int )arg__1);
}

void QButtonGroup_QtDShell::__public_buttonPressed(QAbstractButton*  arg__1)
{
    QButtonGroup::buttonPressed((QAbstractButton* )arg__1);
}

void QButtonGroup_QtDShell::__public_buttonPressed(int  arg__1)
{
    QButtonGroup::buttonPressed((int )arg__1);
}

void QButtonGroup_QtDShell::__public_buttonReleased(QAbstractButton*  arg__1)
{
    QButtonGroup::buttonReleased((QAbstractButton* )arg__1);
}

void QButtonGroup_QtDShell::__public_buttonReleased(int  arg__1)
{
    QButtonGroup::buttonReleased((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QButtonGroup_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QButtonGroup_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QButtonGroup_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QButtonGroup_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QButtonGroup_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QButtonGroup::buttonClicked(QAbstractButton * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonClicked_QAbstractButton
(void* __this_nativeId,
 void* arg__1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonClicked((QAbstractButton* )__qt_arg__1);

}

// QButtonGroup::buttonClicked(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonClicked_int
(void* __this_nativeId,
 int arg__1)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonClicked((int )arg__1);

}

// QButtonGroup::buttonPressed(QAbstractButton * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonPressed_QAbstractButton
(void* __this_nativeId,
 void* arg__1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonPressed((QAbstractButton* )__qt_arg__1);

}

// QButtonGroup::buttonPressed(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonPressed_int
(void* __this_nativeId,
 int arg__1)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonPressed((int )arg__1);

}

// QButtonGroup::buttonReleased(QAbstractButton * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonReleased_QAbstractButton
(void* __this_nativeId,
 void* arg__1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonReleased((QAbstractButton* )__qt_arg__1);

}

// QButtonGroup::buttonReleased(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttonReleased_int
(void* __this_nativeId,
 int arg__1)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonReleased((int )arg__1);

}

// ---externC---
// QButtonGroup::QButtonGroup(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QButtonGroup_QButtonGroup_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QButtonGroup_QtDShell *__qt_this = new QButtonGroup_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QButtonGroup::addButton(QAbstractButton * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_addButton_QAbstractButton
(void* __this_nativeId,
 void* arg__1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->addButton((QAbstractButton* )__qt_arg__1);

}

// QButtonGroup::addButton(QAbstractButton * arg__1, int id)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_addButton_QAbstractButton_int
(void* __this_nativeId,
 void* arg__1,
 int id1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->addButton((QAbstractButton* )__qt_arg__1, (int )id1);

}

// QButtonGroup::button(int id) const
QTD_EXTERN QTD_EXPORT void* qtd_QButtonGroup_button_int_const
(void* __this_nativeId,
 int id0)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->button((int )id0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QButtonGroup::buttons() const
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_buttons_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    QList<QAbstractButton* >  __qt_return_value = __qt_this->buttons();

QList<QAbstractButton* > &__d_return_value_tmp = (*(QList<QAbstractButton* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QButtonGroup::checkedButton() const
QTD_EXTERN QTD_EXPORT void* qtd_QButtonGroup_checkedButton_const
(void* __this_nativeId)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->checkedButton();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QButtonGroup::checkedId() const
QTD_EXTERN QTD_EXPORT int qtd_QButtonGroup_checkedId_const
(void* __this_nativeId)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->checkedId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QButtonGroup::exclusive() const
QTD_EXTERN QTD_EXPORT bool qtd_QButtonGroup_exclusive_const
(void* __this_nativeId)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->exclusive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QButtonGroup::id(QAbstractButton * button) const
QTD_EXTERN QTD_EXPORT int qtd_QButtonGroup_id_QAbstractButton_const
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->id((QAbstractButton* )__qt_button0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QButtonGroup::removeButton(QAbstractButton * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_removeButton_QAbstractButton
(void* __this_nativeId,
 void* arg__1)
{
    QAbstractButton*  __qt_arg__1 = (QAbstractButton* ) arg__1;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->removeButton((QAbstractButton* )__qt_arg__1);

}

// QButtonGroup::setExclusive(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_setExclusive_bool
(void* __this_nativeId,
 bool arg__1)
{
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->setExclusive((bool )arg__1);

}

// QButtonGroup::setId(QAbstractButton * button, int id)
QTD_EXTERN QTD_EXPORT void qtd_QButtonGroup_setId_QAbstractButton_int
(void* __this_nativeId,
 void* button0,
 int id1)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QButtonGroup_QtDShell *__qt_this = (QButtonGroup_QtDShell *) __this_nativeId;
    __qt_this->setId((QAbstractButton* )__qt_button0, (int )id1);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QButtonGroup_staticMetaObject() {
    return (void*)&QButtonGroup::staticMetaObject;
}


