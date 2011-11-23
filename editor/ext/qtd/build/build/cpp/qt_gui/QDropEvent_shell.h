#ifndef QDROPEVENT_SHELL_H
#define QDROPEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

class QDropEvent_QtDShell : public QDropEvent, public QtdObjectLink
{
public:
    QDropEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, QEvent::Type  type5);
    ~QDropEvent_QtDShell();

    const QMimeData*  mdata_getter();
    Qt::DropAction  default_action_getter();
    void setDefault_action_setter(Qt::DropAction  default_action0);
    Qt::KeyboardModifiers  modState_getter();
    void setModState_setter(Qt::KeyboardModifiers  modState0);
    QList<QByteArray >  fmts_getter();
    void setFmts_setter(QList<QByteArray >  fmts0);
    Qt::MouseButtons  mouseState_getter();
    void setMouseState_setter(Qt::MouseButtons  mouseState0);
    Qt::DropAction  drop_action_getter();
    void setDrop_action_setter(Qt::DropAction  drop_action0);
    QPoint  p_getter();
    void setP_setter(QPoint  p0);
    Qt::DropActions  act_getter();
    void setAct_setter(Qt::DropActions  act0);
};

#endif // QDROPEVENT_SHELL_H
