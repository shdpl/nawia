#ifndef QACTIONEVENT_SHELL_H
#define QACTIONEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qaction.h>

class QActionEvent_QtDShell : public QActionEvent, public QtdObjectLink
{
public:
    QActionEvent_QtDShell(void *d_ptr, int  type0, QAction*  action1, QAction*  before2);
    ~QActionEvent_QtDShell();

};

#endif // QACTIONEVENT_SHELL_H
