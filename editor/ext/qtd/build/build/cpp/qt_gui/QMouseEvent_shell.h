#ifndef QMOUSEEVENT_SHELL_H
#define QMOUSEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QMouseEvent_QtDShell : public QMouseEvent, public QtdObjectLink
{
public:
    QMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, Qt::MouseButton  button2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4);
    QMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0, const QPoint&  pos1, const QPoint&  globalPos2, Qt::MouseButton  button3, Qt::MouseButtons  buttons4, Qt::KeyboardModifiers  modifiers5);
    ~QMouseEvent_QtDShell();

    QPoint  g_getter();
    void setG_setter(QPoint  g0);
    Qt::MouseButtons  mouseState_getter();
    void setMouseState_setter(Qt::MouseButtons  mouseState0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
    Qt::MouseButton  b_getter();
    void setB_setter(Qt::MouseButton  b0);
};

#endif // QMOUSEEVENT_SHELL_H
