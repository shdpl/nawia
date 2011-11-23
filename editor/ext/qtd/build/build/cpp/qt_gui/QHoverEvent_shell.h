#ifndef QHOVEREVENT_SHELL_H
#define QHOVEREVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QHoverEvent_QtDShell : public QHoverEvent, public QtdObjectLink
{
public:
    QHoverEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  oldPos2);
    ~QHoverEvent_QtDShell();

    QPoint  op_getter();
    void setOp_setter(QPoint  op0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
};

#endif // QHOVEREVENT_SHELL_H
