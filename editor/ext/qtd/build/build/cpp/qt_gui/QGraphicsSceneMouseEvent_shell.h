#ifndef QGRAPHICSSCENEMOUSEEVENT_SHELL_H
#define QGRAPHICSSCENEMOUSEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneMouseEvent_QtDShell : public QGraphicsSceneMouseEvent, public QtdObjectLink
{
public:
    QGraphicsSceneMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneMouseEvent_QtDShell();

};

#endif // QGRAPHICSSCENEMOUSEEVENT_SHELL_H
