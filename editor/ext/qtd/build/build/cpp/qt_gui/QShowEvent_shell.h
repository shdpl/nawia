#ifndef QSHOWEVENT_SHELL_H
#define QSHOWEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QShowEvent_QtDShell : public QShowEvent, public QtdObjectLink
{
public:
    QShowEvent_QtDShell(void *d_ptr);
    ~QShowEvent_QtDShell();

};

#endif // QSHOWEVENT_SHELL_H
