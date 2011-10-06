#ifndef QGRAPHICSSCENEEVENT_SHELL_H
#define QGRAPHICSSCENEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneEvent_QtDShell : public QGraphicsSceneEvent, public QtdObjectLink
{
public:
    QGraphicsSceneEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneEvent_QtDShell();

};

#endif // QGRAPHICSSCENEEVENT_SHELL_H
