#ifndef QSTANDARDITEM_SHELL_H
#define QSTANDARDITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstandarditemmodel.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
#include <qvariant.h>

class QStandardItem_QtDShell : public QStandardItem, public QtdObjectLink
{
public:
    QStandardItem_QtDShell(void *d_ptr);
    QStandardItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1);
    QStandardItem_QtDShell(void *d_ptr, const QStandardItem&  other0);
    QStandardItem_QtDShell(void *d_ptr, const QString&  text0);
    QStandardItem_QtDShell(void *d_ptr, int  rows0, int  columns1);
    ~QStandardItem_QtDShell();

    QStandardItem*  clone() const;
    QVariant  data(int  role0) const;
    bool  operator<(const QStandardItem&  other0) const;
    void read(QDataStream&  in0);
    void setData(const QVariant&  value0, int  role1);
    int  type() const;
    void write(QDataStream&  out0) const;
    void __public_emitDataChanged();
    QStandardItem*  __override_clone(bool static_call) const;
    QVariant  __override_data(int  role0, bool static_call) const;
    bool  __override_operator_less(const QStandardItem&  other0, bool static_call) const;
    void __override_read(QDataStream&  in0, bool static_call);
    void __override_setData(const QVariant&  value0, int  role1, bool static_call);
    int  __override_type(bool static_call) const;
    void __override_write(QDataStream&  out0, bool static_call) const;
};

#endif // QSTANDARDITEM_SHELL_H
