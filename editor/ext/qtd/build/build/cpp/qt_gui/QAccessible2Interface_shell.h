#ifndef QACCESSIBLE2INTERFACE_SHELL_H
#define QACCESSIBLE2INTERFACE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessible2.h>

#include <QVariant>

class QAccessible2Interface_QtDShell : public QAccessible2Interface, public QtdObjectLink
{
public:
    QAccessible2Interface_QtDShell(void *d_ptr);
    ~QAccessible2Interface_QtDShell();

};

#endif // QACCESSIBLE2INTERFACE_SHELL_H
