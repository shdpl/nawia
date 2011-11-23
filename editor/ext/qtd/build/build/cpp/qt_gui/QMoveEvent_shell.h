#ifndef QMOVEEVENT_SHELL_H
#define QMOVEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QMoveEvent_QtDShell : public QMoveEvent, public QtdObjectLink
{
public:
    QMoveEvent_QtDShell(void *d_ptr, const QPoint&  pos0, const QPoint&  oldPos1);
    ~QMoveEvent_QtDShell();

    QPoint  oldp_getter();
    void setOldp_setter(QPoint  oldp0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
};

#endif // QMOVEEVENT_SHELL_H
