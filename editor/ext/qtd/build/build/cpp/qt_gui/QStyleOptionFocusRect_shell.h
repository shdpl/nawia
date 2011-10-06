#ifndef QSTYLEOPTIONFOCUSRECT_SHELL_H
#define QSTYLEOPTIONFOCUSRECT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionFocusRect_QtDShell : public QStyleOptionFocusRect
{
public:
    QStyleOptionFocusRect_QtDShell();
    QStyleOptionFocusRect_QtDShell(const QStyleOptionFocusRect&  other0);
    QStyleOptionFocusRect_QtDShell(int  version0);
    ~QStyleOptionFocusRect_QtDShell();

};

#endif // QSTYLEOPTIONFOCUSRECT_SHELL_H
