#ifndef QMUTEX_SHELL_H
#define QMUTEX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qmutex.h>

#include <QVariant>
#include <qmutex.h>

class QMutex_QtDShell : public QMutex
{
public:
    QMutex_QtDShell(QMutex::RecursionMode  mode0);
    ~QMutex_QtDShell();

};

#endif // QMUTEX_SHELL_H
