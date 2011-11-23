#ifndef QXMLSTREAMENTITYRESOLVER_SHELL_H
#define QXMLSTREAMENTITYRESOLVER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxmlstream.h>

#include <QVariant>

class QXmlStreamEntityResolver_QtDShell : public QXmlStreamEntityResolver, public QtdObjectLink
{
public:
    QXmlStreamEntityResolver_QtDShell(void *d_ptr);
    ~QXmlStreamEntityResolver_QtDShell();

    QString  resolveEntity(const QString&  publicId0, const QString&  systemId1);
    QString  resolveUndeclaredEntity(const QString&  name0);
    QString  __override_resolveEntity(const QString&  publicId0, const QString&  systemId1, bool static_call);
    QString  __override_resolveUndeclaredEntity(const QString&  name0, bool static_call);
};

#endif // QXMLSTREAMENTITYRESOLVER_SHELL_H
