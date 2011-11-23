#ifndef QABSTRACTFILEENGINEHANDLER_SHELL_H
#define QABSTRACTFILEENGINEHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstractfileengine.h>

#include <QVariant>
#include <qabstractfileengine.h>

class QAbstractFileEngineHandler_QtDShell : public QAbstractFileEngineHandler, public QtdObjectLink
{
public:
    QAbstractFileEngineHandler_QtDShell(void *d_ptr);
    ~QAbstractFileEngineHandler_QtDShell();

    QAbstractFileEngine*  create(const QString&  fileName0) const;
    QAbstractFileEngine*  __override_create(const QString&  fileName0, bool static_call) const;
};

#endif // QABSTRACTFILEENGINEHANDLER_SHELL_H
