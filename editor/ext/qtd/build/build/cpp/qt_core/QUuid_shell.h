#ifndef QUUID_SHELL_H
#define QUUID_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <quuid.h>

#include <QVariant>
#include <qdatastream.h>
#include <quuid.h>

class QUuid_QtDShell : public QUuid
{
public:
    QUuid_QtDShell();
    QUuid_QtDShell(const QString&  arg__1);
    ~QUuid_QtDShell();

};

#endif // QUUID_SHELL_H
