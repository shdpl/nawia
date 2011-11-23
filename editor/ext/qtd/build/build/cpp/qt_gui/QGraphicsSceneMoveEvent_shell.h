#ifndef QGRAPHICSSCENEMOVEEVENT_SHELL_H
#define QGRAPHICSSCENEMOVEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneMoveEvent_QtDShell : public QGraphicsSceneMoveEvent, public QtdObjectLink
{
public:
    QGraphicsSceneMoveEvent_QtDShell(void *d_ptr);
    ~QGraphicsSceneMoveEvent_QtDShell();

};

#endif // QGRAPHICSSCENEMOVEEVENT_SHELL_H
