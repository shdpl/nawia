#ifndef QDRAGMOVEEVENT_SHELL_H
#define QDRAGMOVEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

class QDragMoveEvent_QtDShell : public QDragMoveEvent, public QtdObjectLink
{
public:
    QDragMoveEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, QEvent::Type  type5);
    ~QDragMoveEvent_QtDShell();

    QRect  rect_getter();
    void setRect_setter(QRect  rect0);
};

#endif // QDRAGMOVEEVENT_SHELL_H
