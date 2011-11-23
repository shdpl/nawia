#ifndef QGRAPHICSSCENECONTEXTMENUEVENT_SHELL_H
#define QGRAPHICSSCENECONTEXTMENUEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneContextMenuEvent_QtDShell : public QGraphicsSceneContextMenuEvent, public QtdObjectLink
{
public:
    QGraphicsSceneContextMenuEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneContextMenuEvent_QtDShell();

};

#endif // QGRAPHICSSCENECONTEXTMENUEVENT_SHELL_H
