#ifndef QGRAPHICSSCENEWHEELEVENT_SHELL_H
#define QGRAPHICSSCENEWHEELEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneWheelEvent_QtDShell : public QGraphicsSceneWheelEvent, public QtdObjectLink
{
public:
    QGraphicsSceneWheelEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneWheelEvent_QtDShell();

};

#endif // QGRAPHICSSCENEWHEELEVENT_SHELL_H
