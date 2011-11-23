#ifndef QSTYLEOPTIONTOOLBOX_SHELL_H
#define QSTYLEOPTIONTOOLBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionToolBox_QtDShell : public QStyleOptionToolBox
{
public:
    QStyleOptionToolBox_QtDShell();
    QStyleOptionToolBox_QtDShell(const QStyleOptionToolBox&  other0);
    QStyleOptionToolBox_QtDShell(int  version0);
    ~QStyleOptionToolBox_QtDShell();

};

#endif // QSTYLEOPTIONTOOLBOX_SHELL_H
