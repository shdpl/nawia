#ifndef QGRAPHICSSCENEDRAGDROPEVENT_SHELL_H
#define QGRAPHICSSCENEDRAGDROPEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qmimedata.h>
#include <qwidget.h>

class QGraphicsSceneDragDropEvent_QtDShell : public QGraphicsSceneDragDropEvent, public QtdObjectLink
{
public:
    QGraphicsSceneDragDropEvent_QtDShell(void *d_ptr, QEvent::Type  type0);
    ~QGraphicsSceneDragDropEvent_QtDShell();

};

#endif // QGRAPHICSSCENEDRAGDROPEVENT_SHELL_H
