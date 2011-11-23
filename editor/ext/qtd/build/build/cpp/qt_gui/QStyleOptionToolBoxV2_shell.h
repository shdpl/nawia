#ifndef QSTYLEOPTIONTOOLBOXV2_SHELL_H
#define QSTYLEOPTIONTOOLBOXV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionToolBoxV2_QtDShell : public QStyleOptionToolBoxV2
{
public:
    QStyleOptionToolBoxV2_QtDShell();
    QStyleOptionToolBoxV2_QtDShell(const QStyleOptionToolBox&  other0);
    QStyleOptionToolBoxV2_QtDShell(const QStyleOptionToolBoxV2&  other0);
    QStyleOptionToolBoxV2_QtDShell(int  version0);
    ~QStyleOptionToolBoxV2_QtDShell();

};

#endif // QSTYLEOPTIONTOOLBOXV2_SHELL_H
