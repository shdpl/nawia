#ifndef QLISTWIDGETITEM_SHELL_H
#define QLISTWIDGETITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qlistwidget.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlistwidget.h>
#include <qvariant.h>

class QListWidgetItem_QtDShell : public QListWidgetItem, public QtdObjectLink
{
public:
    QListWidgetItem_QtDShell(void *d_ptr, QListWidget*  view0, int  type1);
    QListWidgetItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1, QListWidget*  view2, int  type3);
    QListWidgetItem_QtDShell(void *d_ptr, const QListWidgetItem&  other0);
    QListWidgetItem_QtDShell(void *d_ptr, const QString&  text0, QListWidget*  view1, int  type2);
    ~QListWidgetItem_QtDShell();

    QListWidgetItem*  clone() const;
    QVariant  data(int  role0) const;
    bool  operator<(const QListWidgetItem&  other0) const;
    void read(QDataStream&  in0);
    void setData(int  role0, const QVariant&  value1);
    void write(QDataStream&  out0) const;
    QListWidgetItem*  __override_clone(bool static_call) const;
    QVariant  __override_data(int  role0, bool static_call) const;
    bool  __override_operator_less(const QListWidgetItem&  other0, bool static_call) const;
    void __override_read(QDataStream&  in0, bool static_call);
    void __override_setData(int  role0, const QVariant&  value1, bool static_call);
    void __override_write(QDataStream&  out0, bool static_call) const;
};

#endif // QLISTWIDGETITEM_SHELL_H
