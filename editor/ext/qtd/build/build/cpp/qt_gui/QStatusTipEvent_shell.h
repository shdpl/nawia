#ifndef QSTATUSTIPEVENT_SHELL_H
#define QSTATUSTIPEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QStatusTipEvent_QtDShell : public QStatusTipEvent, public QtdObjectLink
{
public:
    QStatusTipEvent_QtDShell(void *d_ptr, const QString&  tip0);
    ~QStatusTipEvent_QtDShell();

};

#endif // QSTATUSTIPEVENT_SHELL_H
