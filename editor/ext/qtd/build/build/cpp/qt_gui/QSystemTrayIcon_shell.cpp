#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qsystemtrayicon.h>
#include <qvariant.h>

#include "QSystemTrayIcon_shell.h"
#include <iostream>
#include <qsystemtrayicon.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSystemTrayIconEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSystemTrayIconEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_createEntity(void *nativeId, void* dId)
{
    new QSystemTrayIconEntity((QObject*)nativeId, dId);
}

QSystemTrayIcon_QtDShell::QSystemTrayIcon_QtDShell(void *d_ptr, QObject*  parent0)
    : QSystemTrayIcon(parent0),
      QObjectLink(this, d_ptr)
{
}

QSystemTrayIcon_QtDShell::QSystemTrayIcon_QtDShell(void *d_ptr, const QIcon&  icon0, QObject*  parent1)
    : QSystemTrayIcon(icon0, parent1),
      QObjectLink(this, d_ptr)
{
}

QSystemTrayIcon_QtDShell::~QSystemTrayIcon_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSystemTrayIcon_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSystemTrayIcon::metaObject();
}

int QSystemTrayIcon_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSystemTrayIcon::qt_metacall(_c, _id, _a);
}

int QSystemTrayIcon_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSystemTrayIcon::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSystemTrayIcon_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSystemTrayIcon_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSystemTrayIcon_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QSystemTrayIcon_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSystemTrayIcon_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSystemTrayIcon_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QSystemTrayIcon_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSystemTrayIcon_QtDShell::__public_activated(int  reason0)
{
    QSystemTrayIcon::activated((QSystemTrayIcon::ActivationReason )reason0);
}

void QSystemTrayIcon_QtDShell::__public_messageClicked()
{
    QSystemTrayIcon::messageClicked();
}

// Write virtual function overries used to decide on static/virtual calls
void QSystemTrayIcon_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSystemTrayIcon_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QSystemTrayIcon_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QSystemTrayIcon::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QSystemTrayIcon_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSystemTrayIcon_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason reason)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_activated_ActivationReason
(void* __this_nativeId,
 int reason0)
{
    QSystemTrayIcon::ActivationReason __qt_reason0 = (QSystemTrayIcon::ActivationReason) reason0;
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((QSystemTrayIcon::ActivationReason )__qt_reason0);

}

// QSystemTrayIcon::messageClicked()
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_messageClicked
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->__public_messageClicked();

}

// ---externC---
// QSystemTrayIcon::QSystemTrayIcon(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSystemTrayIcon_QSystemTrayIcon_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSystemTrayIcon_QtDShell *__qt_this = new QSystemTrayIcon_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSystemTrayIcon::QSystemTrayIcon(const QIcon & icon, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSystemTrayIcon_QSystemTrayIcon_QIcon_QObject
(void *d_ptr,
 void* icon0,
 void* parent1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QSystemTrayIcon_QtDShell *__qt_this = new QSystemTrayIcon_QtDShell(d_ptr, (const QIcon& )__qt_icon0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QSystemTrayIcon::contextMenu() const
QTD_EXTERN QTD_EXPORT void* qtd_QSystemTrayIcon_contextMenu_const
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->contextMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSystemTrayIcon::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->geometry();

    *__d_return_value = __qt_return_value;

}

// QSystemTrayIcon::hide()
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_hide
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->hide();

}

// QSystemTrayIcon::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QSystemTrayIcon_icon_const
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QSystemTrayIcon::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QSystemTrayIcon_isVisible_const
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemTrayIcon::setContextMenu(QMenu * menu)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_setContextMenu_QMenu
(void* __this_nativeId,
 void* menu0)
{
    QMenu*  __qt_menu0 = (QMenu* ) menu0;
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->setContextMenu((QMenu* )__qt_menu0);

}

// QSystemTrayIcon::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QSystemTrayIcon::setToolTip(const QString & tip)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_setToolTip_string
(void* __this_nativeId,
 DArray tip0)
{
    QString __qt_tip0 = QString::fromUtf8((const char *)tip0.ptr, tip0.length);
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_tip0);

}

// QSystemTrayIcon::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->setVisible((bool )visible0);

}

// QSystemTrayIcon::show()
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_show
(void* __this_nativeId)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->show();

}

// QSystemTrayIcon::showMessage(const QString & title, const QString & msg, QSystemTrayIcon::MessageIcon icon, int msecs)
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_showMessage_string_string_MessageIcon_int
(void* __this_nativeId,
 DArray title0,
 DArray msg1,
 int icon2,
 int msecs3)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QString __qt_msg1 = QString::fromUtf8((const char *)msg1.ptr, msg1.length);
    QSystemTrayIcon::MessageIcon __qt_icon2 = (QSystemTrayIcon::MessageIcon) icon2;
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    __qt_this->showMessage((const QString& )__qt_title0, (const QString& )__qt_msg1, (QSystemTrayIcon::MessageIcon )__qt_icon2, (int )msecs3);

}

// QSystemTrayIcon::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QSystemTrayIcon_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSystemTrayIcon::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QSystemTrayIcon_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QSystemTrayIcon_QtDShell *__qt_this = (QSystemTrayIcon_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemTrayIcon::isSystemTrayAvailable()
QTD_EXTERN QTD_EXPORT bool qtd_QSystemTrayIcon_isSystemTrayAvailable
()
{
    bool  __qt_return_value = QSystemTrayIcon_QtDShell::isSystemTrayAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemTrayIcon::supportsMessages()
QTD_EXTERN QTD_EXPORT bool qtd_QSystemTrayIcon_supportsMessages
()
{
    bool  __qt_return_value = QSystemTrayIcon_QtDShell::supportsMessages();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSystemTrayIcon_staticMetaObject() {
    return (void*)&QSystemTrayIcon::staticMetaObject;
}


