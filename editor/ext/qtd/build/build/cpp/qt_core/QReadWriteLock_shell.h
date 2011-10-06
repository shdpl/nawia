#ifndef QREADWRITELOCK_SHELL_H
#define QREADWRITELOCK_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qreadwritelock.h>

#include <QVariant>
#include <qreadwritelock.h>

class QReadWriteLock_QtDShell : public QReadWriteLock
{
public:
    QReadWriteLock_QtDShell();
    QReadWriteLock_QtDShell(QReadWriteLock::RecursionMode  recursionMode0);
    ~QReadWriteLock_QtDShell();

};

#endif // QREADWRITELOCK_SHELL_H
