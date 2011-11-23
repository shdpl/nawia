#ifndef QACCESSIBLEWIDGETEX_SHELL_H
#define QACCESSIBLEWIDGETEX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessiblewidget.h>

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

class QAccessibleWidgetEx_QtDShell : public QAccessibleWidgetEx, public QtdObjectLink
{
public:
    QAccessibleWidgetEx_QtDShell(void *d_ptr, QWidget*  o0, QAccessible::Role  r1, const QString&  name2);
    ~QAccessibleWidgetEx_QtDShell();

    QString  actionText(int  action0, QAccessible::Text  t1, int  child2) const;
    int  childAt(int  x0, int  y1) const;
    int  childCount() const;
    bool  doAction(int  action0, int  child1, const QList<QVariant >&  params2);
    int  indexOfChild(const QAccessibleInterface*  child0) const;
    QVariant  invokeMethodEx(QAccessible::Method  method0, int  child1, const QList<QVariant >&  params2);
    bool  isValid() const;
    int  navigate(QAccessible::RelationFlag  rel0, int  entry1, QAccessibleInterface**  target2) const;
    QObject*  object() const;
    QRect  rect(int  child0) const;
    QAccessible::Relation  relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2) const;
    QAccessible::Role  role(int  child0) const;
    void setText(QAccessible::Text  t0, int  child1, const QString&  text2);
    QAccessible::State  state(int  child0) const;
    QString  text(QAccessible::Text  t0, int  child1) const;
    int  userActionCount(int  child0) const;
    QVariant  virtual_hook(const QVariant&  data0);
    void __public_addControllingSignal(const QString&  signal0);
    QObject*  __public_parentObject() const;
    void __public_setAccelerator(const QString&  accel0);
    void __public_setDescription(const QString&  desc0);
    void __public_setHelp(const QString&  help0);
    void __public_setValue(const QString&  value0);
    QWidget*  __public_widget() const;
    QString  __override_actionText(int  action0, int  t1, int  child2, bool static_call) const;
    int  __override_childAt(int  x0, int  y1, bool static_call) const;
    int  __override_childCount(bool static_call) const;
    bool  __override_doAction(int  action0, int  child1, const QList<QVariant >&  params2, bool static_call);
    int  __override_indexOfChild(const QAccessibleInterface*  child0, bool static_call) const;
    QVariant  __override_invokeMethodEx(int  method0, int  child1, const QList<QVariant >&  params2, bool static_call);
    bool  __override_isValid(bool static_call) const;
    int  __override_navigate(int  rel0, int  entry1, QAccessibleInterface**  target2, bool static_call) const;
    QObject*  __override_object(bool static_call) const;
    QRect  __override_rect(int  child0, bool static_call) const;
    int  __override_relationTo(int  child0, const QAccessibleInterface*  other1, int  otherChild2, bool static_call) const;
    int  __override_role(int  child0, bool static_call) const;
    void __override_setText(int  t0, int  child1, const QString&  text2, bool static_call);
    int  __override_state(int  child0, bool static_call) const;
    QString  __override_text(int  t0, int  child1, bool static_call) const;
    int  __override_userActionCount(int  child0, bool static_call) const;
    QVariant  __override_virtual_hook(const QVariant&  data0, bool static_call);
};

#endif // QACCESSIBLEWIDGETEX_SHELL_H
