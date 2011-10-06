#ifndef QTOOLBARCHANGEEVENT_SHELL_H
#define QTOOLBARCHANGEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QToolBarChangeEvent_QtDShell : public QToolBarChangeEvent, public QtdObjectLink
{
public:
    QToolBarChangeEvent_QtDShell(void *d_ptr, bool  t0);
    ~QToolBarChangeEvent_QtDShell();

};

#endif // QTOOLBARCHANGEEVENT_SHELL_H
