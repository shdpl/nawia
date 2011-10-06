#ifndef QDRAGENTEREVENT_SHELL_H
#define QDRAGENTEREVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

class QDragEnterEvent_QtDShell : public QDragEnterEvent, public QtdObjectLink
{
public:
    QDragEnterEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4);
    ~QDragEnterEvent_QtDShell();

};

#endif // QDRAGENTEREVENT_SHELL_H
