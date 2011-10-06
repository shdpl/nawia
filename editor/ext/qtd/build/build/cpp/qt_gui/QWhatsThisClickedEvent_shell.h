#ifndef QWHATSTHISCLICKEDEVENT_SHELL_H
#define QWHATSTHISCLICKEDEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QWhatsThisClickedEvent_QtDShell : public QWhatsThisClickedEvent, public QtdObjectLink
{
public:
    QWhatsThisClickedEvent_QtDShell(void *d_ptr, const QString&  href0);
    ~QWhatsThisClickedEvent_QtDShell();

};

#endif // QWHATSTHISCLICKEDEVENT_SHELL_H
