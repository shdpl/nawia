#ifndef QHIDEEVENT_SHELL_H
#define QHIDEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QHideEvent_QtDShell : public QHideEvent, public QtdObjectLink
{
public:
    QHideEvent_QtDShell(void *d_ptr);
    ~QHideEvent_QtDShell();

};

#endif // QHIDEEVENT_SHELL_H
