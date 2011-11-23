#ifndef QCLOSEEVENT_SHELL_H
#define QCLOSEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QCloseEvent_QtDShell : public QCloseEvent, public QtdObjectLink
{
public:
    QCloseEvent_QtDShell(void *d_ptr);
    ~QCloseEvent_QtDShell();

};

#endif // QCLOSEEVENT_SHELL_H
