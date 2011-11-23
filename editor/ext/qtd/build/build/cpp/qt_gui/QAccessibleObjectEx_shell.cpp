#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QAccessibleObjectEx_shell.h"
#include <iostream>
#include <qaccessibleobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QAccessibleObjectEx_QtDShell::QAccessibleObjectEx_QtDShell(void *d_ptr, QObject*  object0)
    : QAccessibleObjectEx(object0),
      QtdObjectLink(d_ptr)
{
}

QAccessibleObjectEx_QtDShell::~QAccessibleObjectEx_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAccessibleObjectEx_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleObjectEx*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAccessibleInterface_actionText_int_Text_int_const_dispatch, (void *dId, DArray* ret_str, int action0, int t1, int child2))
QString  QAccessibleObjectEx_QtDShell::actionText(int  action0, QAccessible::Text  t1, int  child2) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch(this->dId, &ret_str, (int )action0, (QAccessible::Text )t1, (int )child2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childAt_int_int_const_dispatch, (void *dId, int x0, int y1))
int  QAccessibleObjectEx_QtDShell::childAt(int  x0, int  y1) const
{
    return qtd_QAccessibleInterface_childAt_int_int_const_dispatch(this->dId, (int )x0, (int )y1);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childCount_const_dispatch, (void *dId))
int  QAccessibleObjectEx_QtDShell::childCount() const
{
    return qtd_QAccessibleInterface_childCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_doAction_int_int_QList_dispatch, (void *dId, int action0, int child1, void* params2))
bool  QAccessibleObjectEx_QtDShell::doAction(int  action0, int  child1, const QList<QVariant >&  params2)
{
    return qtd_QAccessibleInterface_doAction_int_int_QList_dispatch(this->dId, (int )action0, (int )child1, (void*)&params2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch, (void *dId, void* arg__1))
int  QAccessibleObjectEx_QtDShell::indexOfChild(const QAccessibleInterface*  arg__1) const
{
    return qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch(this->dId, (QAccessibleInterface* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch, (void *dId, int method0, int child1, void* params2))
QVariant  QAccessibleObjectEx_QtDShell::invokeMethodEx(QAccessible::Method  method0, int  child1, const QList<QVariant >&  params2)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_invokeMethodEx_Method_int_QList_dispatch(this->dId, (QAccessible::Method )method0, (int )child1, (void*)&params2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_isValid_const_dispatch, (void *dId))
bool  QAccessibleObjectEx_QtDShell::isValid() const
{
    return qtd_QAccessibleInterface_isValid_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch, (void *dId, int relation0, int index1, QAccessibleInterface** iface2))
int  QAccessibleObjectEx_QtDShell::navigate(QAccessible::RelationFlag  relation0, int  index1, QAccessibleInterface**  iface2) const
{
    return qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch(this->dId, (QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterface_object_const_dispatch, (void *dId))
QObject*  QAccessibleObjectEx_QtDShell::object() const
{
    return (QObject*) qtd_QAccessibleInterface_object_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_rect_int_const_dispatch, (void *dId, QRect *__d_return_value, int child0))
QRect  QAccessibleObjectEx_QtDShell::rect(int  child0) const
{
    QRect __d_return_value;
    qtd_QAccessibleInterface_rect_int_const_dispatch(this->dId, &__d_return_value, (int )child0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch, (void *dId, int child0, void* other1, int otherChild2))
QAccessible::Relation  QAccessibleObjectEx_QtDShell::relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const
{
    return (QFlags<QAccessible::RelationFlag>) qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch(this->dId, (int )child0, (QAccessibleInterface* )other1, (int )otherChild2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_role_int_const_dispatch, (void *dId, int child0))
QAccessible::Role  QAccessibleObjectEx_QtDShell::role(int  child0) const
{
    return (QAccessible::Role) qtd_QAccessibleInterface_role_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_setText_Text_int_string_dispatch, (void *dId, int t0, int child1, const unsigned short* text2, int text2_size))
void QAccessibleObjectEx_QtDShell::setText(QAccessible::Text  t0, int  child1, const QString&  text2)
{
    qtd_QAccessibleInterface_setText_Text_int_string_dispatch(this->dId, (QAccessible::Text )t0, (int )child1, text2.utf16(), text2.size());
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_state_int_const_dispatch, (void *dId, int child0))
QAccessible::State  QAccessibleObjectEx_QtDShell::state(int  child0) const
{
    return (QFlags<QAccessible::StateFlag>) qtd_QAccessibleInterface_state_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_text_Text_int_const_dispatch, (void *dId, DArray* ret_str, int t0, int child1))
QString  QAccessibleObjectEx_QtDShell::text(QAccessible::Text  t0, int  child1) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_text_Text_int_const_dispatch(this->dId, &ret_str, (QAccessible::Text )t0, (int )child1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_userActionCount_int_const_dispatch, (void *dId, int child0))
int  QAccessibleObjectEx_QtDShell::userActionCount(int  child0) const
{
    return qtd_QAccessibleInterface_userActionCount_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch, (void *dId, void* data0))
QVariant  QAccessibleObjectEx_QtDShell::virtual_hook(const QVariant&  data0)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAccessibleInterfaceEx_virtual_hook_QVariant_dispatch(this->dId, &(QVariant& )data0);
    return QVariant(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleObjectEx_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QAccessibleObjectEx_QtDShell::__override_actionText(int  action0, int  t1, int  child2, bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    } else {
        return actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_childAt(int  x0, int  y1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childAt((int )x0, (int )y1);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_childCount(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childCount();
    }
}

bool  QAccessibleObjectEx_QtDShell::__override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return QAccessibleObjectEx::doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    } else {
        return doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_indexOfChild(const QAccessibleInterface*  arg__1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return indexOfChild((const QAccessibleInterface* )arg__1);
    }
}

QVariant  QAccessibleObjectEx_QtDShell::__override_invokeMethodEx(int  method0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return QVariant();
    } else {
        return invokeMethodEx((QAccessible::Method )method0, (int )child1, (const QList<QVariant >& )params2);
    }
}

bool  QAccessibleObjectEx_QtDShell::__override_isValid(bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::isValid();
    } else {
        return isValid();
    }
}

int  QAccessibleObjectEx_QtDShell::__override_navigate(int  relation0, int  index1, QAccessibleInterface**  iface2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return navigate((QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
    }
}

QObject*  QAccessibleObjectEx_QtDShell::__override_object(bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::object();
    } else {
        return object();
    }
}

QRect  QAccessibleObjectEx_QtDShell::__override_rect(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::rect((int )child0);
    } else {
        return rect((int )child0);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return relationTo((int )child0, (const QAccessibleInterface* )other1, (int )otherChild2);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_role(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessible::Role(0);
    } else {
        return role((int )child0);
    }
}

void QAccessibleObjectEx_QtDShell::__override_setText(int  t0, int  child1, const QString&  text2, bool static_call)
{
    if (static_call) {
        QAccessibleObjectEx::setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    } else {
        setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_state(int  child0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return state((int )child0);
    }
}

QString  QAccessibleObjectEx_QtDShell::__override_text(int  t0, int  child1, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return text((QAccessible::Text )t0, (int )child1);
    }
}

int  QAccessibleObjectEx_QtDShell::__override_userActionCount(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessibleObjectEx::userActionCount((int )child0);
    } else {
        return userActionCount((int )child0);
    }
}

QVariant  QAccessibleObjectEx_QtDShell::__override_virtual_hook(const QVariant&  data0, bool static_call)
{
    if (static_call) {
        return QAccessibleInterfaceEx::virtual_hook((const QVariant& )data0);
    } else {
        return virtual_hook((const QVariant& )data0);
    }
}

// ---externC---
// QAccessibleObjectEx::QAccessibleObjectEx(QObject * object)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleObjectEx_QAccessibleObjectEx_QObject
(void *d_ptr,
 void* object0)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QAccessibleObjectEx_QtDShell *__qt_this = new QAccessibleObjectEx_QtDShell(d_ptr, (QObject* )__qt_object0);
    return (void *) __qt_this;

}

// QAccessibleObjectEx::actionText(int action, QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleObjectEx_actionText_int_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2)
{
    QAccessible::Text __qt_t1 = (QAccessible::Text) t1;
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_actionText((int )action0, (QAccessible::Text )__qt_t1, (int )child2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleObjectEx::doAction(int action, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleObjectEx_doAction_int_int_QList
(void* __this_nativeId,
 int action0,
 int child1,
 void* params2)
{
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_doAction((int )action0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleObjectEx_isValid_const
(void* __this_nativeId)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isValid(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::object() const
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleObjectEx_object_const
(void* __this_nativeId)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QObject*  __qt_return_value = __qt_this->__override_object(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::rect(int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleObjectEx_rect_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int child0)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_rect((int )child0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAccessibleObjectEx::setText(QAccessible::Text t, int child, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleObjectEx_setText_Text_int_string
(void* __this_nativeId,
 int t0,
 int child1,
 DArray text2)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    __qt_this->__override_setText((QAccessible::Text )__qt_t0, (int )child1, (const QString& )__qt_text2, __do_static_call);

}

// QAccessibleObjectEx::userActionCount(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_userActionCount_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_userActionCount((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// QAccessibleObjectEx::childAt(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_childAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childAt((int )x0, (int )y1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_childCount_const
(void* __this_nativeId)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::indexOfChild(const QAccessibleInterface * arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_indexOfChild_QAccessibleInterface_const
(void* __this_nativeId,
 void* arg__1)
{
    const QAccessibleInterface*  __qt_arg__1 = (const QAccessibleInterface* ) arg__1;
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_indexOfChild((const QAccessibleInterface* )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::invokeMethodEx(QAccessible::Method method, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleObjectEx_invokeMethodEx_Method_int_QList
(void* __this_nativeId,
 int method0,
 int child1,
 void* params2)
{
    QAccessible::Method __qt_method0 = (QAccessible::Method) method0;
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_invokeMethodEx((QAccessible::Method )__qt_method0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAccessibleObjectEx::navigate(QAccessible::RelationFlag relation, int index, QAccessibleInterface ** iface) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const
(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface** iface2)
{
    QAccessible::RelationFlag __qt_relation0 = (QAccessible::RelationFlag) relation0;
    QAccessibleInterface**  __qt_iface2 = (QAccessibleInterface** ) iface2;
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_navigate((QAccessible::RelationFlag )__qt_relation0, (int )index1, (QAccessibleInterface** )__qt_iface2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::relationTo(int child, const QAccessibleInterface * other, int otherChild) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_relationTo_int_QAccessibleInterface_int_const
(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2)
{
    const QAccessibleInterface*  __qt_other1 = (const QAccessibleInterface* ) other1;
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_relationTo((int )child0, (const QAccessibleInterface* )__qt_other1, (int )otherChild2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::role(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_role_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_role((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::state(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleObjectEx_state_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_state((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleObjectEx::text(QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleObjectEx_text_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QAccessibleObjectEx_QtDShell *__qt_this = (QAccessibleObjectEx_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_text((QAccessible::Text )__qt_t0, (int )child1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// Field accessors


