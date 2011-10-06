#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QAction_shell.h"
#include <iostream>
#include <qaction.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QActionEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QActionEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAction_createEntity(void *nativeId, void* dId)
{
    new QActionEntity((QObject*)nativeId, dId);
}

QAction_QtDShell::QAction_QtDShell(void *d_ptr, QObject*  parent0)
    : QAction(parent0),
      QObjectLink(this, d_ptr)
{
}

QAction_QtDShell::QAction_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1, QObject*  parent2)
    : QAction(icon0, text1, parent2),
      QObjectLink(this, d_ptr)
{
}

QAction_QtDShell::QAction_QtDShell(void *d_ptr, const QString&  text0, QObject*  parent1)
    : QAction(text0, parent1),
      QObjectLink(this, d_ptr)
{
}

QAction_QtDShell::~QAction_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAction_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAction::metaObject();
}

int QAction_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAction::qt_metacall(_c, _id, _a);
}

int QAction_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAction::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAction_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAction_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAction_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAction_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAction_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAction_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAction_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QAction_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAction_QtDShell::__public_changed()
{
    QAction::changed();
}

void QAction_QtDShell::__public_hovered()
{
    QAction::hovered();
}

void QAction_QtDShell::__public_toggled(bool  arg__1)
{
    QAction::toggled((bool )arg__1);
}

void QAction_QtDShell::__public_triggered(bool  checked0)
{
    QAction::triggered((bool )checked0);
}

// Write virtual function overries used to decide on static/virtual calls
void QAction_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAction_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QAction_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAction::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAction_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAction_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QAction::changed()
QTD_EXTERN QTD_EXPORT void qtd_QAction_changed
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->__public_changed();

}

// QAction::hovered()
QTD_EXTERN QTD_EXPORT void qtd_QAction_hovered
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->__public_hovered();

}

// QAction::toggled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_toggled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->__public_toggled((bool )arg__1);

}

// QAction::triggered(bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QAction_triggered_bool
(void* __this_nativeId,
 bool checked0)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->__public_triggered((bool )checked0);

}

// ---externC---
// QAction::QAction(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAction_QAction_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAction_QtDShell *__qt_this = new QAction_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAction::QAction(const QIcon & icon, const QString & text, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAction_QAction_QIcon_string_QObject
(void *d_ptr,
 void* icon0,
 DArray text1,
 void* parent2)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QAction_QtDShell *__qt_this = new QAction_QtDShell(d_ptr, (const QIcon& )__qt_icon0, (const QString& )__qt_text1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QAction::QAction(const QString & text, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAction_QAction_string_QObject
(void *d_ptr,
 DArray text0,
 void* parent1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QAction_QtDShell *__qt_this = new QAction_QtDShell(d_ptr, (const QString& )__qt_text0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QAction::actionGroup() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_actionGroup_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QActionGroup*  __qt_return_value = __qt_this->actionGroup();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAction::activate(QAction::ActionEvent event)
QTD_EXTERN QTD_EXPORT void qtd_QAction_activate_ActionEvent
(void* __this_nativeId,
 int event0)
{
    QAction::ActionEvent __qt_event0 = (QAction::ActionEvent) event0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->activate((QAction::ActionEvent )__qt_event0);

}

// QAction::associatedGraphicsWidgets() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_associatedGraphicsWidgets_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QList<QGraphicsWidget* >  __qt_return_value = __qt_this->associatedGraphicsWidgets();

QList<QGraphicsWidget* > &__d_return_value_tmp = (*(QList<QGraphicsWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAction::associatedWidgets() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_associatedWidgets_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QList<QWidget* >  __qt_return_value = __qt_this->associatedWidgets();

QList<QWidget* > &__d_return_value_tmp = (*(QList<QWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAction::autoRepeat() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_autoRepeat_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoRepeat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::data() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_data_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->data();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAction::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_font_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QAction::hover()
QTD_EXTERN QTD_EXPORT void qtd_QAction_hover
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->hover();

}

// QAction::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_icon_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QAction::iconText() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_iconText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->iconText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAction::isCheckable() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isCheckable_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCheckable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::isChecked() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isChecked_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isChecked();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isEnabled_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::isIconVisibleInMenu() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isIconVisibleInMenu_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isIconVisibleInMenu();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::isSeparator() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isSeparator_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSeparator();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QAction_isVisible_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::menu() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_menu_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->menu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAction::menuRole() const
QTD_EXTERN QTD_EXPORT int qtd_QAction_menuRole_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->menuRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_parentWidget_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAction::setActionGroup(QActionGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setActionGroup_QActionGroup
(void* __this_nativeId,
 void* group0)
{
    QActionGroup*  __qt_group0 = (QActionGroup* ) group0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setActionGroup((QActionGroup* )__qt_group0);

}

// QAction::setAutoRepeat(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setAutoRepeat_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setAutoRepeat((bool )arg__1);

}

// QAction::setCheckable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setCheckable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setCheckable((bool )arg__1);

}

// QAction::setChecked(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setChecked_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setChecked((bool )arg__1);

}

// QAction::setData(const QVariant & var)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setData_QVariant
(void* __this_nativeId,
 QVariant* var0)
{
    QVariant __qt_var0 = var0 == NULL ? QVariant() : QVariant(*var0);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setData((const QVariant& )__qt_var0);

}

// QAction::setDisabled(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setDisabled_bool
(void* __this_nativeId,
 bool b0)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setDisabled((bool )b0);

}

// QAction::setEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )arg__1);

}

// QAction::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QAction::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QAction::setIconText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setIconText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setIconText((const QString& )__qt_text0);

}

// QAction::setIconVisibleInMenu(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setIconVisibleInMenu_bool
(void* __this_nativeId,
 bool visible0)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setIconVisibleInMenu((bool )visible0);

}

// QAction::setMenu(QMenu * menu)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setMenu_QMenu
(void* __this_nativeId,
 void* menu0)
{
    QMenu*  __qt_menu0 = (QMenu* ) menu0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setMenu((QMenu* )__qt_menu0);

}

// QAction::setMenuRole(QAction::MenuRole menuRole)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setMenuRole_MenuRole
(void* __this_nativeId,
 int menuRole0)
{
    QAction::MenuRole __qt_menuRole0 = (QAction::MenuRole) menuRole0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setMenuRole((QAction::MenuRole )__qt_menuRole0);

}

// QAction::setSeparator(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setSeparator_bool
(void* __this_nativeId,
 bool b0)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setSeparator((bool )b0);

}

// QAction::setShortcut(const QKeySequence & shortcut)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setShortcut_QKeySequence
(void* __this_nativeId,
 void* shortcut0)
{
    const QKeySequence&  __qt_shortcut0 = (const QKeySequence& ) *(QKeySequence *)shortcut0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setShortcut((const QKeySequence& )__qt_shortcut0);

}

// QAction::setShortcutContext(Qt::ShortcutContext context)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setShortcutContext_ShortcutContext
(void* __this_nativeId,
 int context0)
{
    Qt::ShortcutContext __qt_context0 = (Qt::ShortcutContext) context0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setShortcutContext((Qt::ShortcutContext )__qt_context0);

}

// QAction::setShortcuts(QKeySequence::StandardKey arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setShortcuts_StandardKey
(void* __this_nativeId,
 int arg__1)
{
    QKeySequence::StandardKey __qt_arg__1 = (QKeySequence::StandardKey) arg__1;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setShortcuts((QKeySequence::StandardKey )__qt_arg__1);

}

// QAction::setShortcuts(const QList<QKeySequence > & shortcuts)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setShortcuts_QList
(void* __this_nativeId,
 void* shortcuts0)
{
QList<QKeySequence > __qt_shortcuts0 = (*(QList<QKeySequence > *)shortcuts0);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setShortcuts((const QList<QKeySequence >& )__qt_shortcuts0);

}

// QAction::setStatusTip(const QString & statusTip)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setStatusTip_string
(void* __this_nativeId,
 DArray statusTip0)
{
    QString __qt_statusTip0 = QString::fromUtf8((const char *)statusTip0.ptr, statusTip0.length);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((const QString& )__qt_statusTip0);

}

// QAction::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QAction::setToolTip(const QString & tip)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setToolTip_string
(void* __this_nativeId,
 DArray tip0)
{
    QString __qt_tip0 = QString::fromUtf8((const char *)tip0.ptr, tip0.length);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_tip0);

}

// QAction::setVisible(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setVisible_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setVisible((bool )arg__1);

}

// QAction::setWhatsThis(const QString & what)
QTD_EXTERN QTD_EXPORT void qtd_QAction_setWhatsThis_string
(void* __this_nativeId,
 DArray what0)
{
    QString __qt_what0 = QString::fromUtf8((const char *)what0.ptr, what0.length);
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_what0);

}

// QAction::shortcut() const
QTD_EXTERN QTD_EXPORT void* qtd_QAction_shortcut_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QKeySequence  __qt_return_value = __qt_this->shortcut();

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// QAction::shortcutContext() const
QTD_EXTERN QTD_EXPORT int qtd_QAction_shortcutContext_const
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->shortcutContext();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::shortcuts() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_shortcuts_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QList<QKeySequence >  __qt_return_value = __qt_this->shortcuts();

QList<QKeySequence > &__d_return_value_tmp = (*(QList<QKeySequence > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAction::showStatusText(QWidget * widget)
QTD_EXTERN QTD_EXPORT bool qtd_QAction_showStatusText_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->showStatusText((QWidget* )__qt_widget0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAction::statusTip() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_statusTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAction::text() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAction::toggle()
QTD_EXTERN QTD_EXPORT void qtd_QAction_toggle
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->toggle();

}

// QAction::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAction::trigger()
QTD_EXTERN QTD_EXPORT void qtd_QAction_trigger
(void* __this_nativeId)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    __qt_this->trigger();

}

// QAction::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QAction_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAction::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QAction_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QAction_QtDShell *__qt_this = (QAction_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAction_staticMetaObject() {
    return (void*)&QAction::staticMetaObject;
}


