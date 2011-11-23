#ifndef QCONTEXTMENUEVENT_SHELL_H
#define QCONTEXTMENUEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QContextMenuEvent_QtDShell : public QContextMenuEvent, public QtdObjectLink
{
public:
    QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1);
    QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1, const QPoint&  globalPos2);
    QContextMenuEvent_QtDShell(void *d_ptr, QContextMenuEvent::Reason  reason0, const QPoint&  pos1, const QPoint&  globalPos2, Qt::KeyboardModifiers  modifiers3);
    ~QContextMenuEvent_QtDShell();

    uint  reas_getter();
    void setReas_setter(uint  reas0);
    QPoint  gp_getter();
    void setGp_setter(QPoint  gp0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
};

#endif // QCONTEXTMENUEVENT_SHELL_H
