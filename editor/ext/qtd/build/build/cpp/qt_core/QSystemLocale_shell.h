#ifndef QSYSTEMLOCALE_SHELL_H
#define QSYSTEMLOCALE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qlocale.h>

#include <QVariant>
#include <qlocale.h>
#include <qvariant.h>

class QSystemLocale_QtDShell : public QSystemLocale, public QtdObjectLink
{
public:
    QSystemLocale_QtDShell(void *d_ptr);
    ~QSystemLocale_QtDShell();

    QLocale  fallbackLocale() const;
    QVariant  query(QSystemLocale::QueryType  type0, QVariant  in1) const;
    QLocale  __override_fallbackLocale(bool static_call) const;
    QVariant  __override_query(int  type0, QVariant  in1, bool static_call) const;
};

#endif // QSYSTEMLOCALE_SHELL_H
