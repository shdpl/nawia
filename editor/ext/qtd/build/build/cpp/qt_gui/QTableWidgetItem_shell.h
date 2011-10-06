#ifndef QTABLEWIDGETITEM_SHELL_H
#define QTABLEWIDGETITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtablewidget.h>

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qtablewidget.h>
#include <qvariant.h>

class QTableWidgetItem_QtDShell : public QTableWidgetItem, public QtdObjectLink
{
public:
    QTableWidgetItem_QtDShell(void *d_ptr, const QIcon&  icon0, const QString&  text1, int  type2);
    QTableWidgetItem_QtDShell(void *d_ptr, const QString&  text0, int  type1);
    QTableWidgetItem_QtDShell(void *d_ptr, const QTableWidgetItem&  other0);
    QTableWidgetItem_QtDShell(void *d_ptr, int  type0);
    ~QTableWidgetItem_QtDShell();

    QTableWidgetItem*  clone() const;
    QVariant  data(int  role0) const;
    bool  operator<(const QTableWidgetItem&  other0) const;
    void read(QDataStream&  in0);
    void setData(int  role0, const QVariant&  value1);
    void write(QDataStream&  out0) const;
    QTableWidgetItem*  __override_clone(bool static_call) const;
    QVariant  __override_data(int  role0, bool static_call) const;
    bool  __override_operator_less(const QTableWidgetItem&  other0, bool static_call) const;
    void __override_read(QDataStream&  in0, bool static_call);
    void __override_setData(int  role0, const QVariant&  value1, bool static_call);
    void __override_write(QDataStream&  out0, bool static_call) const;
};

#endif // QTABLEWIDGETITEM_SHELL_H
