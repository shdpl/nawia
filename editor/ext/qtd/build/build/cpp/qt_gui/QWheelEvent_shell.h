#ifndef QWHEELEVENT_SHELL_H
#define QWHEELEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QWheelEvent_QtDShell : public QWheelEvent, public QtdObjectLink
{
public:
    QWheelEvent_QtDShell(void *d_ptr, const QPoint&  pos0, const QPoint&  globalPos1, int  delta2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, Qt::Orientation  orient5);
    QWheelEvent_QtDShell(void *d_ptr, const QPoint&  pos0, int  delta1, Qt::MouseButtons  buttons2, Qt::KeyboardModifiers  modifiers3, Qt::Orientation  orient4);
    ~QWheelEvent_QtDShell();

    QPoint  g_getter();
    void setG_setter(QPoint  g0);
    Qt::MouseButtons  mouseState_getter();
    void setMouseState_setter(Qt::MouseButtons  mouseState0);
    Qt::Orientation  o_getter();
    void setO_setter(Qt::Orientation  o0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
};

#endif // QWHEELEVENT_SHELL_H
