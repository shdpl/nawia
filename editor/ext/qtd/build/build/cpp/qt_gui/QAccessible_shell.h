#ifndef QACCESSIBLE_SHELL_H
#define QACCESSIBLE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessible.h>

#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>

class QAccessible_QtDShell : public QAccessible
{
public:
    QAccessible_QtDShell();
    ~QAccessible_QtDShell();

};

#endif // QACCESSIBLE_SHELL_H
