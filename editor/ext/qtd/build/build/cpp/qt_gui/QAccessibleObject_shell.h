#ifndef QACCESSIBLEOBJECT_SHELL_H
#define QACCESSIBLEOBJECT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessibleobject.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QAccessibleObject_QtDShell : public QAccessibleObject, public QtdObjectLink
{
public:
    QAccessibleObject_QtDShell(void *d_ptr, QObject*  object0);
    ~QAccessibleObject_QtDShell();

    QString  actionText(int  action0, QAccessible::Text  t1, int  child2) const;
    int  childAt(int  x0, int  y1) const;
    int  childCount() const;
    bool  doAction(int  action0, int  child1, const QList<QVariant >&  params2);
    int  indexOfChild(const QAccessibleInterface*  arg__1) const;
    bool  isValid() const;
    int  navigate(QAccessible::RelationFlag  relation0, int  index1, QAccessibleInterface**  iface2) const;
    QObject*  object() const;
    QRect  rect(int  child0) const;
    QAccessible::Relation  relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const;
    QAccessible::Role  role(int  child0) const;
    void setText(QAccessible::Text  t0, int  child1, const QString&  text2);
    QAccessible::State  state(int  child0) const;
    QString  text(QAccessible::Text  t0, int  child1) const;
    int  userActionCount(int  child0) const;
    QString  __override_actionText(int  action0, int  t1, int  child2, bool static_call) const;
    int  __override_childAt(int  x0, int  y1, bool static_call) const;
    int  __override_childCount(bool static_call) const;
    bool  __override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call);
    int  __override_indexOfChild(const QAccessibleInterface*  arg__1, bool static_call) const;
    bool  __override_isValid(bool static_call) const;
    int  __override_navigate(int  relation0, int  index1, QAccessibleInterface**  iface2, bool static_call) const;
    QObject*  __override_object(bool static_call) const;
    QRect  __override_rect(int  child0, bool static_call) const;
    int  __override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const;
    int  __override_role(int  child0, bool static_call) const;
    void __override_setText(int  t0, int  child1, const QString&  text2, bool static_call);
    int  __override_state(int  child0, bool static_call) const;
    QString  __override_text(int  t0, int  child1, bool static_call) const;
    int  __override_userActionCount(int  child0, bool static_call) const;
};

#endif // QACCESSIBLEOBJECT_SHELL_H
