#ifndef QRUNNABLE_SHELL_H
#define QRUNNABLE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qrunnable.h>

#include <QVariant>

class QRunnable_QtDShell : public QRunnable, public QtdObjectLink
{
public:
    QRunnable_QtDShell(void *d_ptr);
    ~QRunnable_QtDShell();

    void run();
    void __override_run(bool static_call);
};

#endif // QRUNNABLE_SHELL_H
