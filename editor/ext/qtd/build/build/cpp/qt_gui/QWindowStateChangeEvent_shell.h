#ifndef QWINDOWSTATECHANGEEVENT_SHELL_H
#define QWINDOWSTATECHANGEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QWindowStateChangeEvent_QtDShell : public QWindowStateChangeEvent, public QtdObjectLink
{
public:
    QWindowStateChangeEvent_QtDShell(void *d_ptr, Qt::WindowStates  aOldState0);
    QWindowStateChangeEvent_QtDShell(void *d_ptr, Qt::WindowStates  aOldState0, bool  isOverride1);
    ~QWindowStateChangeEvent_QtDShell();

};

#endif // QWINDOWSTATECHANGEEVENT_SHELL_H
