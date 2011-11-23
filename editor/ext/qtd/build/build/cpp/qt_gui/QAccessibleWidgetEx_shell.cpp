#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QAccessibleWidgetEx_shell.h"
#include <iostream>
#include <qaccessiblewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QAccessibleWidgetEx_QtDShell::QAccessibleWidgetEx_QtDShell(void *d_ptr, QWidget*  o0, QAccessible::Role  r1, const QString&  name2)
    : QAccessibleWidgetEx(o0, r1, name2),
      QtdObjectLink(d_ptr)
{
}

QAccessibleWidgetEx_QtDShell::~QAccessibleWidgetEx_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAccessibleWidgetEx_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleWidgetEx*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAccessibleInterface_actionText_int_Text_int_const_dispatch, (void *dId, DArray* ret_str, int action0, int t1, int child2))
QString  QAccessibleWidgetEx_QtDShell::actionText(int  action0, QAccessible::Text  t1, int  child2) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch(this->dId, &ret_str, (int )action0, (QAccessible::Text )t1, (int )child2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childAt_int_int_const_dispatch, (void *dId, int x0, int y1))
int  QAccessibleWidgetEx_QtDShell::childAt(int  x0, int  y1) const
{
    return qtd_QAccessibleInterface_childAt_int_int_const_dispatch(this->dId, (int )x0, (int )y1);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childCount_const_dispatch, (void *dId))
int  QAccessibleWidgetEx_QtDShell::childCount() const
{
    return qtd_QAccessibleInterface_childCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_doAction_int_int_QList_dispatch, (void *dId, int action0, int child1, void* params2))
bool  QAccessibleWidgetEx_QtDShell::doAction(int  action0, int  child1, const QList<QVariant >&  params2)
{
    return qtd_QAccessibleInterface_doAction_int_int_QList_dispatch(this->dId, (int )action0, (int )child1, (void*)&params2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch, (void *dId, void* child0))
int  QAccessibleWidgetEx_QtDShell::indexOfChild(const QAccessibleInterface*  child0) const
{
    return qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch(this->dId, (QAccessibleInterface* )child0);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch, (void *dId, int method0, int child1, void* params2))
QVariant  QAccessibleWidgetEx_QtDShell::invokeMethodEx(QAccessible::Method  method0, int  child1, const QList<QVariant >&  params2)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch(this->dId, (QAccessible::Method )method0, (int )child1, (void*)&params2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_isValid_const_dispatch, (void *dId))
bool  QAccessibleWidgetEx_QtDShell::isValid() const
{
    return qtd_QAccessibleInterface_isValid_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch, (void *dId, int rel0, int entry1, QAccessibleInterface** target2))
int  QAccessibleWidgetEx_QtDShell::navigate(QAccessible::RelationFlag  rel0, int  entry1, QAccessibleInterface**  target2) const
{
    return qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch(this->dId, (QAccessible::RelationFlag )rel0, (int )entry1, (QAccessibleInterface** )target2);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterface_object_const_dispatch, (void *dId))
QObject*  QAccessibleWidgetEx_QtDShell::object() const
{
    return (QObject*) qtd_QAccessibleInterface_object_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_rect_int_const_dispatch, (void *dId, QRect *__d_return_value, int child0))
QRect  QAccessibleWidgetEx_QtDShell::rect(int  child0) const
{
    QRect __d_return_value;
    qtd_QAccessibleInterface_rect_int_const_dispatch(this->dId, &__d_return_value, (int )child0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch, (void *dId, int child0, void* other1, int otherChild2))
QAccessible::Relation  QAccessibleWidgetEx_QtDShell::relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const
{
    return (QFlags<QAccessible::RelationFlag>) qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch(this->dId, (int )child0, (QAccessibleInterface* )other1, (int )otherChild2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_role_int_const_dispatch, (void *dId, int child0))
QAccessible::Role  QAccessibleWidgetEx_QtDShell::role(int  child0) const
{
    return (QAccessible::Role) qtd_QAccessibleInterface_role_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_setText_Text_int_string_dispatch, (void *dId, int t0, int child1, const unsigned short* text2, int text2_size))
void QAccessibleWidgetEx_QtDShell::setText(QAccessible::Text  t0, int  child1, const QString&  text2)
{
    qtd_QAccessibleInterface_setText_Text_int_string_dispatch(this->dId, (QAccessible::Text )t0, (int )child1, text2.utf16(), text2.size());
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_state_int_const_dispatch, (void *dId, int child0))
QAccessible::State  QAccessibleWidgetEx_QtDShell::state(int  child0) const
{
    return (QFlags<QAccessible::StateFlag>) qtd_QAccessibleInterface_state_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_text_Text_int_const_dispatch, (void *dId, DArray* ret_str, int t0, int child1))
QString  QAccessibleWidgetEx_QtDShell::text(QAccessible::Text  t0, int  child1) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_text_Text_int_const_dispatch(this->dId, &ret_str, (QAccessible::Text )t0, (int )child1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_userActionCount_int_const_dispatch, (void *dId, int child0))
int  QAccessibleWidgetEx_QtDShell::userActionCount(int  child0) const
{
    return qtd_QAccessibleInterface_userActionCount_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch, (void *dId, void* data0))
QVariant  QAccessibleWidgetEx_QtDShell::virtual_hook(const QVariant&  data0)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch(this->dId, &(QVariant& )data0);
    return QVariant(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAccessibleWidgetEx_QtDShell::__public_addControllingSignal(const QString&  signal0)
{
    QAccessibleWidgetEx::addControllingSignal((const QString& )signal0);
}

QObject*  QAccessibleWidgetEx_QtDShell::__public_parentObject() const
{
    return QAccessibleWidgetEx::parentObject();
}

void QAccessibleWidgetEx_QtDShell::__public_setAccelerator(const QString&  accel0)
{
    QAccessibleWidgetEx::setAccelerator((const QString& )accel0);
}

void QAccessibleWidgetEx_QtDShell::__public_setDescription(const QString&  desc0)
{
    QAccessibleWidgetEx::setDescription((const QString& )desc0);
}

void QAccessibleWidgetEx_QtDShell::__public_setHelp(const QString&  help0)
{
    QAccessibleWidgetEx::setHelp((const QString& )help0);
}

void QAccessibleWidgetEx_QtDShell::__public_setValue(const QString&  value0)
{
    QAccessibleWidgetEx::setValue((const QString& )value0);
}

QWidget*  QAccessibleWidgetEx_QtDShell::__public_widget() const
{
    return QAccessibleWidgetEx::widget();
}

// Write virtual function overries used to decide on static/virtual calls
QString  QAccessibleWidgetEx_QtDShell::__override_actionText(int  action0, int  t1, int  child2, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    } else {
        return actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_childAt(int  x0, int  y1, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::childAt((int )x0, (int )y1);
    } else {
        return childAt((int )x0, (int )y1);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_childCount(bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::childCount();
    } else {
        return childCount();
    }
}

bool  QAccessibleWidgetEx_QtDShell::__override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return QAccessibleWidgetEx::doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    } else {
        return doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_indexOfChild(const QAccessibleInterface*  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::indexOfChild((const QAccessibleInterface* )child0);
    } else {
        return indexOfChild((const QAccessibleInterface* )child0);
    }
}

QVariant  QAccessibleWidgetEx_QtDShell::__override_invokeMethodEx(int  method0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return QAccessibleWidgetEx::invokeMethodEx((QAccessible::Method )method0, (int )child1, (const QList<QVariant >& )params2);
    } else {
        return invokeMethodEx((QAccessible::Method )method0, (int )child1, (const QList<QVariant >& )params2);
    }
}

bool  QAccessibleWidgetEx_QtDShell::__override_isValid(bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::isValid();
    } else {
        return isValid();
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_navigate(int  rel0, int  entry1, QAccessibleInterface**  target2, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::navigate((QAccessible::RelationFlag )rel0, (int )entry1, (QAccessibleInterface** )target2);
    } else {
        return navigate((QAccessible::RelationFlag )rel0, (int )entry1, (QAccessibleInterface** )target2);
    }
}

QObject*  QAccessibleWidgetEx_QtDShell::__override_object(bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::object();
    } else {
        return object();
    }
}

QRect  QAccessibleWidgetEx_QtDShell::__override_rect(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::rect((int )child0);
    } else {
        return rect((int )child0);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::relationTo((int )child0, (const QAccessibleInterface* )other1, (int )otherChild2);
    } else {
        return relationTo((int )child0, (const QAccessibleInterface* )other1, (int )otherChild2);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_role(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::role((int )child0);
    } else {
        return role((int )child0);
    }
}

void QAccessibleWidgetEx_QtDShell::__override_setText(int  t0, int  child1, const QString&  text2, bool static_call)
{
    if (static_call) {
        QAccessibleObjectEx::setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    } else {
        setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_state(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::state((int )child0);
    } else {
        return state((int )child0);
    }
}

QString  QAccessibleWidgetEx_QtDShell::__override_text(int  t0, int  child1, bool static_call) const
{
    if (static_call) {
        return QAccessibleWidgetEx::text((QAccessible::Text )t0, (int )child1);
    } else {
        return text((QAccessible::Text )t0, (int )child1);
    }
}

int  QAccessibleWidgetEx_QtDShell::__override_userActionCount(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::userActionCount((int )child0);
    } else {
        return userActionCount((int )child0);
    }
}

QVariant  QAccessibleWidgetEx_QtDShell::__override_virtual_hook(const QVariant&  data0, bool static_call)
{
    if (static_call) {
        return QAccessibleInterfaceEx::virtual_hook((const QVariant& )data0);
    } else {
        return virtual_hook((const QVariant& )data0);
    }
}

// ---externC---
// QAccessibleWidgetEx::QAccessibleWidgetEx(QWidget * o, QAccessible::Role r, const QString & name)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleWidgetEx_QAccessibleWidgetEx_QWidget_Role_string
(void *d_ptr,
 void* o0,
 int r1,
 DArray name2)
{
    QWidget*  __qt_o0 = (QWidget* ) o0;
    QAccessible::Role __qt_r1 = (QAccessible::Role) r1;
    QString __qt_name2 = QString::fromUtf8((const char *)name2.ptr, name2.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = new QAccessibleWidgetEx_QtDShell(d_ptr, (QWidget* )__qt_o0, (QAccessible::Role )__qt_r1, (const QString& )__qt_name2);
    return (void *) __qt_this;

}

// QAccessibleWidgetEx::addControllingSignal(const QString & signal)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_addControllingSignal_string
(void* __this_nativeId,
 DArray signal0)
{
    QString __qt_signal0 = QString::fromUtf8((const char *)signal0.ptr, signal0.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    __qt_this->__public_addControllingSignal((const QString& )__qt_signal0);

}

// QAccessibleWidgetEx::parentObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleWidgetEx_parentObject_const
(void* __this_nativeId)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->__public_parentObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::setAccelerator(const QString & accel)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_setAccelerator_string
(void* __this_nativeId,
 DArray accel0)
{
    QString __qt_accel0 = QString::fromUtf8((const char *)accel0.ptr, accel0.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    __qt_this->__public_setAccelerator((const QString& )__qt_accel0);

}

// QAccessibleWidgetEx::setDescription(const QString & desc)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_setDescription_string
(void* __this_nativeId,
 DArray desc0)
{
    QString __qt_desc0 = QString::fromUtf8((const char *)desc0.ptr, desc0.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    __qt_this->__public_setDescription((const QString& )__qt_desc0);

}

// QAccessibleWidgetEx::setHelp(const QString & help)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_setHelp_string
(void* __this_nativeId,
 DArray help0)
{
    QString __qt_help0 = QString::fromUtf8((const char *)help0.ptr, help0.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    __qt_this->__public_setHelp((const QString& )__qt_help0);

}

// QAccessibleWidgetEx::setValue(const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_setValue_string
(void* __this_nativeId,
 DArray value0)
{
    QString __qt_value0 = QString::fromUtf8((const char *)value0.ptr, value0.length);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    __qt_this->__public_setValue((const QString& )__qt_value0);

}

// QAccessibleWidgetEx::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleWidgetEx_widget_const
(void* __this_nativeId)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->__public_widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::actionText(int action, QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_actionText_int_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2)
{
    QAccessible::Text __qt_t1 = (QAccessible::Text) t1;
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_actionText((int )action0, (QAccessible::Text )__qt_t1, (int )child2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleWidgetEx::childAt(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_childAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childAt((int )x0, (int )y1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_childCount_const
(void* __this_nativeId)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::doAction(int action, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleWidgetEx_doAction_int_int_QList
(void* __this_nativeId,
 int action0,
 int child1,
 void* params2)
{
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_doAction((int )action0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::indexOfChild(const QAccessibleInterface * child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_indexOfChild_QAccessibleInterface_const
(void* __this_nativeId,
 void* child0)
{
    const QAccessibleInterface*  __qt_child0 = (const QAccessibleInterface* ) child0;
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_indexOfChild((const QAccessibleInterface* )__qt_child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::invokeMethodEx(QAccessible::Method method, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleWidgetEx_invokeMethodEx_Method_int_QList
(void* __this_nativeId,
 int method0,
 int child1,
 void* params2)
{
    QAccessible::Method __qt_method0 = (QAccessible::Method) method0;
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_invokeMethodEx((QAccessible::Method )__qt_method0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAccessibleWidgetEx::navigate(QAccessible::RelationFlag rel, int entry, QAccessibleInterface ** target) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const
(void* __this_nativeId,
 int rel0,
 int entry1,
 QAccessibleInterface** target2)
{
    QAccessible::RelationFlag __qt_rel0 = (QAccessible::RelationFlag) rel0;
    QAccessibleInterface**  __qt_target2 = (QAccessibleInterface** ) target2;
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_navigate((QAccessible::RelationFlag )__qt_rel0, (int )entry1, (QAccessibleInterface** )__qt_target2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::rect(int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_rect_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int child0)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_rect((int )child0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAccessibleWidgetEx::relationTo(int child, const QAccessibleInterface * other, int otherChild) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_relationTo_int_QAccessibleInterface_int_const
(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2)
{
    const QAccessibleInterface*  __qt_other1 = (const QAccessibleInterface* ) other1;
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_relationTo((int )child0, (const QAccessibleInterface* )__qt_other1, (int )otherChild2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::role(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_role_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_role((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::state(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleWidgetEx_state_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_state((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleWidgetEx::text(QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleWidgetEx_text_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QAccessibleWidgetEx_QtDShell *__qt_this = (QAccessibleWidgetEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_text((QAccessible::Text )__qt_t0, (int )child1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


