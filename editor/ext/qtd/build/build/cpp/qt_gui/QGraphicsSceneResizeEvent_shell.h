#ifndef QGRAPHICSSCENERESIZEEVENT_SHELL_H
#define QGRAPHICSSCENERESIZEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicssceneevent.h>

#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

class QGraphicsSceneResizeEvent_QtDShell : public QGraphicsSceneResizeEvent, public QtdObjectLink
{
public:
    QGraphicsSceneResizeEvent_QtDShell(void *d_ptr);
    ~QGraphicsSceneResizeEvent_QtDShell();

};

#endif // QGRAPHICSSCENERESIZEEVENT_SHELL_H
