#ifndef QTIMEREVENT_SHELL_H
#define QTIMEREVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcoreevent.h>

#include <QVariant>

class QTimerEvent_QtDShell : public QTimerEvent, public QtdObjectLink
{
public:
    QTimerEvent_QtDShell(void *d_ptr, int  timerId0);
    ~QTimerEvent_QtDShell();

    int  id_getter();
    void setId_setter(int  id0);
};

#endif // QTIMEREVENT_SHELL_H
