#ifndef QACCESSIBLEEVENT_SHELL_H
#define QACCESSIBLEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessible.h>

#include <QVariant>

class QAccessibleEvent_QtDShell : public QAccessibleEvent, public QtdObjectLink
{
public:
    QAccessibleEvent_QtDShell(void *d_ptr, QEvent::Type  type0, int  child1);
    ~QAccessibleEvent_QtDShell();

};

#endif // QACCESSIBLEEVENT_SHELL_H
