#ifndef QACCESSIBLEBRIDGE_SHELL_H
#define QACCESSIBLEBRIDGE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessiblebridge.h>

#include <QVariant>
#include <qaccessible.h>

class QAccessibleBridge_QtDShell : public QAccessibleBridge, public QtdObjectLink
{
public:
    QAccessibleBridge_QtDShell(void *d_ptr);
    ~QAccessibleBridge_QtDShell();

    void notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3);
    void setRootObject(QAccessibleInterface*  arg__1);
    void __override_notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3, bool static_call);
    void __override_setRootObject(QAccessibleInterface*  arg__1, bool static_call);
};

#endif // QACCESSIBLEBRIDGE_SHELL_H
