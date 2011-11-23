#ifndef QCHILDEVENT_SHELL_H
#define QCHILDEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcoreevent.h>

#include <QVariant>
#include <qobject.h>

class QChildEvent_QtDShell : public QChildEvent, public QtdObjectLink
{
public:
    QChildEvent_QtDShell(void *d_ptr, QEvent::Type  type0, QObject*  child1);
    ~QChildEvent_QtDShell();

    QObject*  c_getter();
    void setC_setter(QObject*  c0);
};

#endif // QCHILDEVENT_SHELL_H
