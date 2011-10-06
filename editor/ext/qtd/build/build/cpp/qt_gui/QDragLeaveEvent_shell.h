#ifndef QDRAGLEAVEEVENT_SHELL_H
#define QDRAGLEAVEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QDragLeaveEvent_QtDShell : public QDragLeaveEvent, public QtdObjectLink
{
public:
    QDragLeaveEvent_QtDShell(void *d_ptr);
    ~QDragLeaveEvent_QtDShell();

};

#endif // QDRAGLEAVEEVENT_SHELL_H
