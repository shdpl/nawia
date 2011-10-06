#ifndef QXMLENTITYRESOLVER_SHELL_H
#define QXMLENTITYRESOLVER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qxml.h>

class QXmlEntityResolver_QtDShell : public QXmlEntityResolver, public QtdObjectLink
{
public:
    QXmlEntityResolver_QtDShell(void *d_ptr);
    ~QXmlEntityResolver_QtDShell();

    QString  errorString() const;
    bool  resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2);
    QString  __override_errorString(bool static_call) const;
    bool  __override_resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2, bool static_call);
};

#endif // QXMLENTITYRESOLVER_SHELL_H
