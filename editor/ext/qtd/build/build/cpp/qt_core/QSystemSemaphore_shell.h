#ifndef QSYSTEMSEMAPHORE_SHELL_H
#define QSYSTEMSEMAPHORE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsystemsemaphore.h>

#include <QVariant>
#include <qsystemsemaphore.h>

class QSystemSemaphore_QtDShell : public QSystemSemaphore
{
public:
    QSystemSemaphore_QtDShell(const QString&  key0, int  initialValue1, QSystemSemaphore::AccessMode  mode2);
    ~QSystemSemaphore_QtDShell();

};

#endif // QSYSTEMSEMAPHORE_SHELL_H
