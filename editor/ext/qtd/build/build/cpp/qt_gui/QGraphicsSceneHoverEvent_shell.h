#ifndef QGRAPHICSSCENEHOVEREVENT_SHELL_H
#define QGRAPHICSSCENEHOVEREVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneHoverEvent_QtDShell : public QGraphicsSceneHoverEvent, public QtdObjectLink
{
public:
    QGraphicsSceneHoverEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneHoverEvent_QtDShell();

};

#endif // QGRAPHICSSCENEHOVEREVENT_SHELL_H
