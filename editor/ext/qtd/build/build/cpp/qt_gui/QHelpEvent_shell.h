#ifndef QHELPEVENT_SHELL_H
#define QHELPEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QHelpEvent_QtDShell : public QHelpEvent, public QtdObjectLink
{
public:
    QHelpEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  globalPos2);
    ~QHelpEvent_QtDShell();

};

#endif // QHELPEVENT_SHELL_H
