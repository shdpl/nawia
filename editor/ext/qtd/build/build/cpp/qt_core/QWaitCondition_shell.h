#ifndef QWAITCONDITION_SHELL_H
#define QWAITCONDITION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwaitcondition.h>

#include <QVariant>
#include <qmutex.h>
#include <qreadwritelock.h>
#include <qwaitcondition.h>

class QWaitCondition_QtDShell : public QWaitCondition
{
public:
    QWaitCondition_QtDShell();
    ~QWaitCondition_QtDShell();

};

#endif // QWAITCONDITION_SHELL_H
