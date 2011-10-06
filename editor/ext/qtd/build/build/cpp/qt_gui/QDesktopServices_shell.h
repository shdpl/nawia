#ifndef QDESKTOPSERVICES_SHELL_H
#define QDESKTOPSERVICES_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qdesktopservices.h>

#include <QVariant>
#include <qobject.h>
#include <qurl.h>

class QDesktopServices_QtDShell : public QDesktopServices
{
public:
    QDesktopServices_QtDShell();
    ~QDesktopServices_QtDShell();

};

#endif // QDESKTOPSERVICES_SHELL_H
