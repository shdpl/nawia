#ifndef QINPUTEVENT_SHELL_H
#define QINPUTEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QInputEvent_QtDShell : public QInputEvent, public QtdObjectLink
{
public:
    QInputEvent_QtDShell(void *d_ptr, QEvent::Type  type0, Qt::KeyboardModifiers  modifiers1);
    ~QInputEvent_QtDShell();

    Qt::KeyboardModifiers  modState_getter();
    void setModState_setter(Qt::KeyboardModifiers  modState0);
};

#endif // QINPUTEVENT_SHELL_H
