#ifndef QDRAGRESPONSEEVENT_SHELL_H
#define QDRAGRESPONSEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QDragResponseEvent_QtDShell : public QDragResponseEvent, public QtdObjectLink
{
public:
    QDragResponseEvent_QtDShell(void *d_ptr, bool  accepted0);
    ~QDragResponseEvent_QtDShell();

    bool  a_getter();
    void setA_setter(bool  a0);
};

#endif // QDRAGRESPONSEEVENT_SHELL_H
