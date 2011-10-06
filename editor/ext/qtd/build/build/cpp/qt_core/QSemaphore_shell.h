#ifndef QSEMAPHORE_SHELL_H
#define QSEMAPHORE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsemaphore.h>

#include <QVariant>
#include <qsemaphore.h>

class QSemaphore_QtDShell : public QSemaphore
{
public:
    QSemaphore_QtDShell(int  n0);
    ~QSemaphore_QtDShell();

};

#endif // QSEMAPHORE_SHELL_H
