#ifndef QEVENT_SHELL_H
#define QEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcoreevent.h>

#include <QVariant>

class QEvent_QtDShell : public QEvent, public QtdObjectLink
{
public:
    QEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QEvent_QtDShell();

};

#endif // QEVENT_SHELL_H
