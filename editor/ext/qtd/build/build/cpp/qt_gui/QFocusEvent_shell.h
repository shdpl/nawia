#ifndef QFOCUSEVENT_SHELL_H
#define QFOCUSEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QFocusEvent_QtDShell : public QFocusEvent, public QtdObjectLink
{
public:
    QFocusEvent_QtDShell(void *d_ptr, QEvent::Type  type0, Qt::FocusReason  reason1);
    ~QFocusEvent_QtDShell();

};

#endif // QFOCUSEVENT_SHELL_H
