#ifndef QPAINTEVENT_SHELL_H
#define QPAINTEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qregion.h>

class QPaintEvent_QtDShell : public QPaintEvent, public QtdObjectLink
{
public:
    QPaintEvent_QtDShell(void *d_ptr, const QRect&  paintRect0);
    QPaintEvent_QtDShell(void *d_ptr, const QRegion&  paintRegion0);
    ~QPaintEvent_QtDShell();

    QRect  m_rect_getter();
    void setM_rect_setter(QRect  m_rect0);
    bool  m_erased_getter();
    void setM_erased_setter(bool  m_erased0);
    QRegion  m_region_getter();
    void setM_region_setter(QRegion  m_region0);
};

#endif // QPAINTEVENT_SHELL_H
