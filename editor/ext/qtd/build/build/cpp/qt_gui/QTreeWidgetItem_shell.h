#ifndef QTREEWIDGETITEM_SHELL_H
#define QTREEWIDGETITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtreewidget.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qstringlist.h>
#include <qtreewidget.h>
#include <qvariant.h>

class QTreeWidgetItem_QtDShell : public QTreeWidgetItem, public QtdObjectLink
{
public:
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, QTreeWidgetItem*  after1, int  type2);
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, const QStringList&  strings1, int  type2);
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidget*  view0, int  type1);
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, QTreeWidgetItem*  after1, int  type2);
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, const QStringList&  strings1, int  type2);
    QTreeWidgetItem_QtDShell(void *d_ptr, QTreeWidgetItem*  parent0, int  type1);
    QTreeWidgetItem_QtDShell(void *d_ptr, const QStringList&  strings0, int  type1);
    QTreeWidgetItem_QtDShell(void *d_ptr, int  type0);
    ~QTreeWidgetItem_QtDShell();

    QTreeWidgetItem*  clone() const;
    QVariant  data(int  column0, int  role1) const;
    bool  operator<(const QTreeWidgetItem&  other0) const;
    void read(QDataStream&  in0);
    void setData(int  column0, int  role1, const QVariant&  value2);
    void write(QDataStream&  out0) const;
    void __public_emitDataChanged();
    QTreeWidgetItem*  __override_clone(bool static_call) const;
    QVariant  __override_data(int  column0, int  role1, bool static_call) const;
    bool  __override_operator_less(const QTreeWidgetItem&  other0, bool static_call) const;
    void __override_read(QDataStream&  in0, bool static_call);
    void __override_setData(int  column0, int  role1, const QVariant&  value2, bool static_call);
    void __override_write(QDataStream&  out0, bool static_call) const;
};

#endif // QTREEWIDGETITEM_SHELL_H
