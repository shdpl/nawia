#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QAccessibleInterfaceEx_shell.h"
#include <iostream>
#include <qaccessible.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QAccessibleInterfaceEx_QtDShell::QAccessibleInterfaceEx_QtDShell(void *d_ptr)
    : QAccessibleInterfaceEx(),
      QtdObjectLink(d_ptr)
{
}

QAccessibleInterfaceEx_QtDShell::~QAccessibleInterfaceEx_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAccessibleInterfaceEx_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleInterfaceEx*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAccessibleInterface_actionText_int_Text_int_const_dispatch, (void *dId, DArray* ret_str, int action0, int t1, int child2))
QString  QAccessibleInterfaceEx_QtDShell::actionText(int  action0, QAccessible::Text  t1, int  child2) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch(this->dId, &ret_str, (int )action0, (QAccessible::Text )t1, (int )child2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childAt_int_int_const_dispatch, (void *dId, int x0, int y1))
int  QAccessibleInterfaceEx_QtDShell::childAt(int  x0, int  y1) const
{
    return qtd_QAccessibleInterface_childAt_int_int_const_dispatch(this->dId, (int )x0, (int )y1);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childCount_const_dispatch, (void *dId))
int  QAccessibleInterfaceEx_QtDShell::childCount() const
{
    return qtd_QAccessibleInterface_childCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_doAction_int_int_QList_dispatch, (void *dId, int action0, int child1, void* params2))
bool  QAccessibleInterfaceEx_QtDShell::doAction(int  action0, int  child1, const QList<QVariant >&  params2)
{
    return qtd_QAccessibleInterface_doAction_int_int_QList_dispatch(this->dId, (int )action0, (int )child1, (void*)&params2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch, (void *dId, void* arg__1))
int  QAccessibleInterfaceEx_QtDShell::indexOfChild(const QAccessibleInterface*  arg__1) const
{
    return qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch(this->dId, (QAccessibleInterface* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch, (void *dId, int method0, int child1, void* params2))
QTD_FUNC(GUI, QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch)
QVariant  QAccessibleInterfaceEx_QtDShell::invokeMethodEx(QAccessible::Method  method0, int  child1, const QList<QVariant >&  params2)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch(this->dId, (QAccessible::Method )method0, (int )child1, (void*)&params2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_isValid_const_dispatch, (void *dId))
bool  QAccessibleInterfaceEx_QtDShell::isValid() const
{
    return qtd_QAccessibleInterface_isValid_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch, (void *dId, int relation0, int index1, QAccessibleInterface** iface2))
int  QAccessibleInterfaceEx_QtDShell::navigate(QAccessible::RelationFlag  relation0, int  index1, QAccessibleInterface**  iface2) const
{
    return qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch(this->dId, (QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterface_object_const_dispatch, (void *dId))
QObject*  QAccessibleInterfaceEx_QtDShell::object() const
{
    return (QObject*) qtd_QAccessibleInterface_object_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_rect_int_const_dispatch, (void *dId, QRect *__d_return_value, int child0))
QRect  QAccessibleInterfaceEx_QtDShell::rect(int  child0) const
{
    QRect __d_return_value;
    qtd_QAccessibleInterface_rect_int_const_dispatch(this->dId, &__d_return_value, (int )child0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch, (void *dId, int child0, void* other1, int otherChild2))
QAccessible::Relation  QAccessibleInterfaceEx_QtDShell::relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const
{
    return (QFlags<QAccessible::RelationFlag>) qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch(this->dId, (int )child0, (QAccessibleInterface* )other1, (int )otherChild2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_role_int_const_dispatch, (void *dId, int child0))
QAccessible::Role  QAccessibleInterfaceEx_QtDShell::role(int  child0) const
{
    return (QAccessible::Role) qtd_QAccessibleInterface_role_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_setText_Text_int_string_dispatch, (void *dId, int t0, int child1, const unsigned short* text2, int text2_size))
void QAccessibleInterfaceEx_QtDShell::setText(QAccessible::Text  t0, int  child1, const QString&  text2)
{
    qtd_QAccessibleInterface_setText_Text_int_string_dispatch(this->dId, (QAccessible::Text )t0, (int )child1, text2.utf16(), text2.size());
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_state_int_const_dispatch, (void *dId, int child0))
QAccessible::State  QAccessibleInterfaceEx_QtDShell::state(int  child0) const
{
    return (QFlags<QAccessible::StateFlag>) qtd_QAccessibleInterface_state_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_text_Text_int_const_dispatch, (void *dId, DArray* ret_str, int t0, int child1))
QString  QAccessibleInterfaceEx_QtDShell::text(QAccessible::Text  t0, int  child1) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_text_Text_int_const_dispatch(this->dId, &ret_str, (QAccessible::Text )t0, (int )child1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_userActionCount_int_const_dispatch, (void *dId, int child0))
int  QAccessibleInterfaceEx_QtDShell::userActionCount(int  child0) const
{
    return qtd_QAccessibleInterface_userActionCount_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch, (void *dId, void* data0))
QTD_FUNC(GUI, QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch)
QVariant  QAccessibleInterfaceEx_QtDShell::virtual_hook(const QVariant&  data0)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch(this->dId, &(QVariant& )data0);
    return QVariant(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterfaceEx_initCallBacks(VoidFunc *virts) {
    qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch = (qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch_t) virts[0];
    qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch = (qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QAccessibleInterfaceEx_QtDShell::__override_actionText(int  action0, int  t1, int  child2, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_childAt(int  x0, int  y1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childAt((int )x0, (int )y1);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_childCount(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childCount();
    }
}

bool  QAccessibleInterfaceEx_QtDShell::__override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_indexOfChild(const QAccessibleInterface*  arg__1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return indexOfChild((const QAccessibleInterface* )arg__1);
    }
}

QVariant  QAccessibleInterfaceEx_QtDShell::__override_invokeMethodEx(int  method0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return QVariant();
    } else {
        return invokeMethodEx((QAccessible::Method )method0, (int )child1, (const QList<QVariant >& )params2);
    }
}

bool  QAccessibleInterfaceEx_QtDShell::__override_isValid(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return isValid();
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_navigate(int  relation0, int  index1, QAccessibleInterface**  iface2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return navigate((QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
    }
}

QObject*  QAccessibleInterfaceEx_QtDShell::__override_object(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return object();
    }
}

QRect  QAccessibleInterfaceEx_QtDShell::__override_rect(int  child0, bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return rect((int )child0);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return relationTo((int )child0, (const QAccessibleInterface* )other1, (int )otherChild2);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_role(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessible::Role(0);
    } else {
        return role((int )child0);
    }
}

void QAccessibleInterfaceEx_QtDShell::__override_setText(int  t0, int  child1, const QString&  text2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_state(int  child0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return state((int )child0);
    }
}

QString  QAccessibleInterfaceEx_QtDShell::__override_text(int  t0, int  child1, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return text((QAccessible::Text )t0, (int )child1);
    }
}

int  QAccessibleInterfaceEx_QtDShell::__override_userActionCount(int  child0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return userActionCount((int )child0);
    }
}

QVariant  QAccessibleInterfaceEx_QtDShell::__override_virtual_hook(const QVariant&  data0, bool static_call)
{
    if (static_call) {
        return QAccessibleInterfaceEx::virtual_hook((const QVariant& )data0);
    } else {
        return virtual_hook((const QVariant& )data0);
    }
}

// ---externC---
// QAccessibleInterfaceEx::()
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterfaceEx_QAccessibleInterfaceEx
(void *d_ptr)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = new QAccessibleInterfaceEx_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAccessibleInterfaceEx::invokeMethodEx(QAccessible::Method method, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList
(void* __this_nativeId,
 int method0,
 int child1,
 void* params2)
{
    QAccessible::Method __qt_method0 = (QAccessible::Method) method0;
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_invokeMethodEx((QAccessible::Method )__qt_method0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAccessibleInterfaceEx::virtual_hook(const QVariant & data)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterfaceEx_virtual_hook_QVariant
(void* __this_nativeId,
 QVariant* data0)
{
    QVariant __qt_data0 = data0 == NULL ? QVariant() : QVariant(*data0);
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_virtual_hook((const QVariant& )__qt_data0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// QAccessibleInterfaceEx::actionText(int action, QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterfaceEx_actionText_int_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2)
{
    QAccessible::Text __qt_t1 = (QAccessible::Text) t1;
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_actionText((int )action0, (QAccessible::Text )__qt_t1, (int )child2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleInterfaceEx::childAt(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_childAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childAt((int )x0, (int )y1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_childCount_const
(void* __this_nativeId)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::doAction(int action, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleInterfaceEx_doAction_int_int_QList
(void* __this_nativeId,
 int action0,
 int child1,
 void* params2)
{
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_doAction((int )action0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::indexOfChild(const QAccessibleInterface * arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_indexOfChild_QAccessibleInterface_const
(void* __this_nativeId,
 void* arg__1)
{
    const QAccessibleInterface*  __qt_arg__1 = (const QAccessibleInterface* ) arg__1;
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_indexOfChild((const QAccessibleInterface* )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleInterfaceEx_isValid_const
(void* __this_nativeId)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isValid(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::navigate(QAccessible::RelationFlag relation, int index, QAccessibleInterface ** iface) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const
(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface** iface2)
{
    QAccessible::RelationFlag __qt_relation0 = (QAccessible::RelationFlag) relation0;
    QAccessibleInterface**  __qt_iface2 = (QAccessibleInterface** ) iface2;
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_navigate((QAccessible::RelationFlag )__qt_relation0, (int )index1, (QAccessibleInterface** )__qt_iface2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::object() const
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterfaceEx_object_const
(void* __this_nativeId)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QObject*  __qt_return_value = __qt_this->__override_object(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::rect(int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterfaceEx_rect_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int child0)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_rect((int )child0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAccessibleInterfaceEx::relationTo(int child, const QAccessibleInterface * other, int otherChild) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_relationTo_int_QAccessibleInterface_int_const
(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2)
{
    const QAccessibleInterface*  __qt_other1 = (const QAccessibleInterface* ) other1;
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_relationTo((int )child0, (const QAccessibleInterface* )__qt_other1, (int )otherChild2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::role(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_role_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_role((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::setText(QAccessible::Text t, int child, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterfaceEx_setText_Text_int_string
(void* __this_nativeId,
 int t0,
 int child1,
 DArray text2)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    __qt_this->__override_setText((QAccessible::Text )__qt_t0, (int )child1, (const QString& )__qt_text2, __do_static_call);

}

// QAccessibleInterfaceEx::state(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_state_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_state((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterfaceEx::text(QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterfaceEx_text_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_text((QAccessible::Text )__qt_t0, (int )child1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleInterfaceEx::userActionCount(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterfaceEx_userActionCount_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterfaceEx_QtDShell *__qt_this = (QAccessibleInterfaceEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_userActionCount((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// Field accessors


