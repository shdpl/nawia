#ifndef QGRAPHICSSCENEHELPEVENT_SHELL_H
#define QGRAPHICSSCENEHELPEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneHelpEvent_QtDShell : public QGraphicsSceneHelpEvent, public QtdObjectLink
{
public:
    QGraphicsSceneHelpEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneHelpEvent_QtDShell();

};

#endif // QGRAPHICSSCENEHELPEVENT_SHELL_H
