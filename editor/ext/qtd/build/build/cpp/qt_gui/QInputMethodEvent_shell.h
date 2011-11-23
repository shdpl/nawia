#ifndef QINPUTMETHODEVENT_SHELL_H
#define QINPUTMETHODEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QInputMethodEvent>
#include <QVariant>
#include <qevent.h>
#include <qlist.h>

class QInputMethodEvent_QtDShell : public QInputMethodEvent, public QtdObjectLink
{
public:
    QInputMethodEvent_QtDShell(void *d_ptr);
    QInputMethodEvent_QtDShell(void *d_ptr, const QInputMethodEvent&  other0);
    QInputMethodEvent_QtDShell(void *d_ptr, const QString&  preeditText0, const QList<QInputMethodEvent::Attribute >&  attributes1);
    ~QInputMethodEvent_QtDShell();

};

#endif // QINPUTMETHODEVENT_SHELL_H
