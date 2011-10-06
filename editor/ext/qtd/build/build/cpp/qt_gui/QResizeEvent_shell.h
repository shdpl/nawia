#ifndef QRESIZEEVENT_SHELL_H
#define QRESIZEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QResizeEvent_QtDShell : public QResizeEvent, public QtdObjectLink
{
public:
    QResizeEvent_QtDShell(void *d_ptr, const QSize&  size0, const QSize&  oldSize1);
    ~QResizeEvent_QtDShell();

    QSize  olds_getter();
    void setOlds_setter(QSize  olds0);
    QSize  s_getter();
    void setS_setter(QSize  s0);
};

#endif // QRESIZEEVENT_SHELL_H
