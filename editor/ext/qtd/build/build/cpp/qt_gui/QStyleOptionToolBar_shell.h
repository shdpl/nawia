#ifndef QSTYLEOPTIONTOOLBAR_SHELL_H
#define QSTYLEOPTIONTOOLBAR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionToolBar_QtDShell : public QStyleOptionToolBar
{
public:
    QStyleOptionToolBar_QtDShell();
    QStyleOptionToolBar_QtDShell(const QStyleOptionToolBar&  other0);
    QStyleOptionToolBar_QtDShell(int  version0);
    ~QStyleOptionToolBar_QtDShell();

};

#endif // QSTYLEOPTIONTOOLBAR_SHELL_H
