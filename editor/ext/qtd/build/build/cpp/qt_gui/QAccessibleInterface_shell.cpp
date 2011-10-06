#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QAccessibleInterface_shell.h"
#include <iostream>
#include <qaccessible.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_delete(void* nativeId)
{
    delete (QAccessibleInterface_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_destroy(void* nativeId)
{
    call_destructor((QAccessibleInterface_QtDShell*)nativeId);
}

QAccessibleInterface_QtDShell::QAccessibleInterface_QtDShell(void *d_ptr)
    : QAccessibleInterface(),
      QtdObjectLink(d_ptr)
{
}

QAccessibleInterface_QtDShell::~QAccessibleInterface_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAccessibleInterface_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAccessibleInterface_actionText_int_Text_int_const_dispatch, (void *dId, DArray* ret_str, int action0, int t1, int child2))
QTD_FUNC(GUI, QAccessibleInterface_actionText_int_Text_int_const_dispatch)
QString  QAccessibleInterface_QtDShell::actionText(int  action0, QAccessible::Text  t1, int  child2) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch(this->dId, &ret_str, (int )action0, (QAccessible::Text )t1, (int )child2);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childAt_int_int_const_dispatch, (void *dId, int x0, int y1))
QTD_FUNC(GUI, QAccessibleInterface_childAt_int_int_const_dispatch)
int  QAccessibleInterface_QtDShell::childAt(int  x0, int  y1) const
{
    return qtd_QAccessibleInterface_childAt_int_int_const_dispatch(this->dId, (int )x0, (int )y1);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_childCount_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAccessibleInterface_childCount_const_dispatch)
int  QAccessibleInterface_QtDShell::childCount() const
{
    return qtd_QAccessibleInterface_childCount_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_doAction_int_int_QList_dispatch, (void *dId, int action0, int child1, void* params2))
QTD_FUNC(GUI, QAccessibleInterface_doAction_int_int_QList_dispatch)
bool  QAccessibleInterface_QtDShell::doAction(int  action0, int  child1, const QList<QVariant >&  params2)
{
    return qtd_QAccessibleInterface_doAction_int_int_QList_dispatch(this->dId, (int )action0, (int )child1, (void*)&params2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch)
int  QAccessibleInterface_QtDShell::indexOfChild(const QAccessibleInterface*  arg__1) const
{
    return qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch(this->dId, (QAccessibleInterface* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAccessibleInterface_isValid_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAccessibleInterface_isValid_const_dispatch)
bool  QAccessibleInterface_QtDShell::isValid() const
{
    return qtd_QAccessibleInterface_isValid_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch, (void *dId, int relation0, int index1, QAccessibleInterface** iface2))
QTD_FUNC(GUI, QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch)
int  QAccessibleInterface_QtDShell::navigate(QAccessible::RelationFlag  relation0, int  index1, QAccessibleInterface**  iface2) const
{
    return qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch(this->dId, (QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
}

QTD_FUNC_DECL(GUI, void*, QAccessibleInterface_object_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAccessibleInterface_object_const_dispatch)
QObject*  QAccessibleInterface_QtDShell::object() const
{
    return (QObject*) qtd_QAccessibleInterface_object_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_rect_int_const_dispatch, (void *dId, QRect *__d_return_value, int child0))
QTD_FUNC(GUI, QAccessibleInterface_rect_int_const_dispatch)
QRect  QAccessibleInterface_QtDShell::rect(int  child0) const
{
    QRect __d_return_value;
    qtd_QAccessibleInterface_rect_int_const_dispatch(this->dId, &__d_return_value, (int )child0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch, (void *dId, int child0, void* other1, int otherChild2))
QTD_FUNC(GUI, QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch)
QAccessible::Relation  QAccessibleInterface_QtDShell::relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const
{
    return (QFlags<QAccessible::RelationFlag>) qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch(this->dId, (int )child0, (QAccessibleInterface* )other1, (int )otherChild2);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_role_int_const_dispatch, (void *dId, int child0))
QTD_FUNC(GUI, QAccessibleInterface_role_int_const_dispatch)
QAccessible::Role  QAccessibleInterface_QtDShell::role(int  child0) const
{
    return (QAccessible::Role) qtd_QAccessibleInterface_role_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_setText_Text_int_string_dispatch, (void *dId, int t0, int child1, const unsigned short* text2, int text2_size))
QTD_FUNC(GUI, QAccessibleInterface_setText_Text_int_string_dispatch)
void QAccessibleInterface_QtDShell::setText(QAccessible::Text  t0, int  child1, const QString&  text2)
{
    qtd_QAccessibleInterface_setText_Text_int_string_dispatch(this->dId, (QAccessible::Text )t0, (int )child1, text2.utf16(), text2.size());
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_state_int_const_dispatch, (void *dId, int child0))
QTD_FUNC(GUI, QAccessibleInterface_state_int_const_dispatch)
QAccessible::State  QAccessibleInterface_QtDShell::state(int  child0) const
{
    return (QFlags<QAccessible::StateFlag>) qtd_QAccessibleInterface_state_int_const_dispatch(this->dId, (int )child0);
}

QTD_FUNC_DECL(GUI, void, QAccessibleInterface_text_Text_int_const_dispatch, (void *dId, DArray* ret_str, int t0, int child1))
QTD_FUNC(GUI, QAccessibleInterface_text_Text_int_const_dispatch)
QString  QAccessibleInterface_QtDShell::text(QAccessible::Text  t0, int  child1) const
{
    DArray ret_str;
    qtd_QAccessibleInterface_text_Text_int_const_dispatch(this->dId, &ret_str, (QAccessible::Text )t0, (int )child1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, int, QAccessibleInterface_userActionCount_int_const_dispatch, (void *dId, int child0))
QTD_FUNC(GUI, QAccessibleInterface_userActionCount_int_const_dispatch)
int  QAccessibleInterface_QtDShell::userActionCount(int  child0) const
{
    return qtd_QAccessibleInterface_userActionCount_int_const_dispatch(this->dId, (int )child0);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_initCallBacks(VoidFunc *virts) {
    qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch = (qtd_QAccessibleInterface_actionText_int_Text_int_const_dispatch_t) virts[0];
    qtd_QAccessibleInterface_childAt_int_int_const_dispatch = (qtd_QAccessibleInterface_childAt_int_int_const_dispatch_t) virts[1];
    qtd_QAccessibleInterface_childCount_const_dispatch = (qtd_QAccessibleInterface_childCount_const_dispatch_t) virts[2];
    qtd_QAccessibleInterface_doAction_int_int_QList_dispatch = (qtd_QAccessibleInterface_doAction_int_int_QList_dispatch_t) virts[3];
    qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch = (qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const_dispatch_t) virts[4];
    qtd_QAccessibleInterface_isValid_const_dispatch = (qtd_QAccessibleInterface_isValid_const_dispatch_t) virts[5];
    qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch = (qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const_dispatch_t) virts[6];
    qtd_QAccessibleInterface_object_const_dispatch = (qtd_QAccessibleInterface_object_const_dispatch_t) virts[7];
    qtd_QAccessibleInterface_rect_int_const_dispatch = (qtd_QAccessibleInterface_rect_int_const_dispatch_t) virts[8];
    qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch = (qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const_dispatch_t) virts[9];
    qtd_QAccessibleInterface_role_int_const_dispatch = (qtd_QAccessibleInterface_role_int_const_dispatch_t) virts[10];
    qtd_QAccessibleInterface_setText_Text_int_string_dispatch = (qtd_QAccessibleInterface_setText_Text_int_string_dispatch_t) virts[11];
    qtd_QAccessibleInterface_state_int_const_dispatch = (qtd_QAccessibleInterface_state_int_const_dispatch_t) virts[12];
    qtd_QAccessibleInterface_text_Text_int_const_dispatch = (qtd_QAccessibleInterface_text_Text_int_const_dispatch_t) virts[13];
    qtd_QAccessibleInterface_userActionCount_int_const_dispatch = (qtd_QAccessibleInterface_userActionCount_int_const_dispatch_t) virts[14];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QString  QAccessibleInterface_QtDShell::__override_actionText(int  action0, int  t1, int  child2, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return actionText((int )action0, (QAccessible::Text )t1, (int )child2);
    }
}

int  QAccessibleInterface_QtDShell::__override_childAt(int  x0, int  y1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childAt((int )x0, (int )y1);
    }
}

int  QAccessibleInterface_QtDShell::__override_childCount(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return childCount();
    }
}

bool  QAccessibleInterface_QtDShell::__override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return doAction((int )action0, (int )child1, (const QList<QVariant >& )params2);
    }
}

int  QAccessibleInterface_QtDShell::__override_indexOfChild(const QAccessibleInterface*  arg__1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return indexOfChild((const QAccessibleInterface* )arg__1);
    }
}

bool  QAccessibleInterface_QtDShell::__override_isValid(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return isValid();
    }
}

int  QAccessibleInterface_QtDShell::__override_navigate(int  relation0, int  index1, QAccessibleInterface**  iface2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return navigate((QAccessible::RelationFlag )relation0, (int )index1, (QAccessibleInterface** )iface2);
    }
}

QObject*  QAccessibleInterface_QtDShell::__override_object(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return object();
    }
}

QRect  QAccessibleInterface_QtDShell::__override_rect(int  child0, bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return rect((int )child0);
    }
}

int  QAccessibleInterface_QtDShell::__override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return relationTo((int )child0, (const QAccessibleInterface* )other1, (int )otherChild2);
    }
}

int  QAccessibleInterface_QtDShell::__override_role(int  child0, bool static_call) const
{
    if (static_call) {
        return QAccessible::Role(0);
    } else {
        return role((int )child0);
    }
}

void QAccessibleInterface_QtDShell::__override_setText(int  t0, int  child1, const QString&  text2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setText((QAccessible::Text )t0, (int )child1, (const QString& )text2);
    }
}

int  QAccessibleInterface_QtDShell::__override_state(int  child0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return state((int )child0);
    }
}

QString  QAccessibleInterface_QtDShell::__override_text(int  t0, int  child1, bool static_call) const
{
    if (static_call) {
        return QString();
    } else {
        return text((QAccessible::Text )t0, (int )child1);
    }
}

int  QAccessibleInterface_QtDShell::__override_userActionCount(int  child0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return userActionCount((int )child0);
    }
}

// ---externC---
// QAccessibleInterface::()
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterface_QAccessibleInterface
(void *d_ptr)
{
    QAccessibleInterface_QtDShell *__qt_this = new QAccessibleInterface_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAccessibleInterface::invokeMethod(QAccessible::Method method, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterface_invokeMethod_Method_int_QList
(void* __this_nativeId,
 int method0,
 int child1,
 void* params2)
{
    QAccessible::Method __qt_method0 = (QAccessible::Method) method0;
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->invokeMethod((QAccessible::Method )__qt_method0, (int )child1, (const QList<QVariant >& )__qt_params2);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAccessibleInterface::supportedMethods()
// QAccessibleInterface::actionText(int action, QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_actionText_int_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int action0,
 int t1,
 int child2)
{
    QAccessible::Text __qt_t1 = (QAccessible::Text) t1;
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_actionText((int )action0, (QAccessible::Text )__qt_t1, (int )child2, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleInterface::childAt(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_childAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childAt((int )x0, (int )y1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::childCount() const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_childCount_const
(void* __this_nativeId)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_childCount(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::doAction(int action, int child, const QList<QVariant > & params)
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleInterface_doAction_int_int_QList
(void* __this_nativeId,
 int action0,
 int child1,
 void* params2)
{
QList<QVariant > __qt_params2 = (*(QList<QVariant > *)params2);
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_doAction((int )action0, (int )child1, (const QList<QVariant >& )__qt_params2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::indexOfChild(const QAccessibleInterface * arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_indexOfChild_QAccessibleInterface_const
(void* __this_nativeId,
 void* arg__1)
{
    const QAccessibleInterface*  __qt_arg__1 = (const QAccessibleInterface* ) arg__1;
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_indexOfChild((const QAccessibleInterface* )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QAccessibleInterface_isValid_const
(void* __this_nativeId)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isValid(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::navigate(QAccessible::RelationFlag relation, int index, QAccessibleInterface ** iface) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_navigate_RelationFlag_int_nativepointerQAccessibleInterface_const
(void* __this_nativeId,
 int relation0,
 int index1,
 QAccessibleInterface** iface2)
{
    QAccessible::RelationFlag __qt_relation0 = (QAccessible::RelationFlag) relation0;
    QAccessibleInterface**  __qt_iface2 = (QAccessibleInterface** ) iface2;
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_navigate((QAccessible::RelationFlag )__qt_relation0, (int )index1, (QAccessibleInterface** )__qt_iface2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::object() const
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleInterface_object_const
(void* __this_nativeId)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QObject*  __qt_return_value = __qt_this->__override_object(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::rect(int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_rect_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int child0)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_rect((int )child0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAccessibleInterface::relationTo(int child, const QAccessibleInterface * other, int otherChild) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_relationTo_int_QAccessibleInterface_int_const
(void* __this_nativeId,
 int child0,
 void* other1,
 int otherChild2)
{
    const QAccessibleInterface*  __qt_other1 = (const QAccessibleInterface* ) other1;
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_relationTo((int )child0, (const QAccessibleInterface* )__qt_other1, (int )otherChild2, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::role(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_role_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_role((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::setText(QAccessible::Text t, int child, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_setText_Text_int_string
(void* __this_nativeId,
 int t0,
 int child1,
 DArray text2)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    __qt_this->__override_setText((QAccessible::Text )__qt_t0, (int )child1, (const QString& )__qt_text2, __do_static_call);

}

// QAccessibleInterface::state(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_state_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_state((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleInterface::text(QAccessible::Text t, int child) const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleInterface_text_Text_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int t0,
 int child1)
{
    QAccessible::Text __qt_t0 = (QAccessible::Text) t0;
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_text((QAccessible::Text )__qt_t0, (int )child1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAccessibleInterface::userActionCount(int child) const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleInterface_userActionCount_int_const
(void* __this_nativeId,
 int child0)
{
    QAccessibleInterface_QtDShell *__qt_this = (QAccessibleInterface_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleInterface*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_userActionCount((int )child0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


