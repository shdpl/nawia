#ifndef QXMLDECLHANDLER_SHELL_H
#define QXMLDECLHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>

class QXmlDeclHandler_QtDShell : public QXmlDeclHandler, public QtdObjectLink
{
public:
    QXmlDeclHandler_QtDShell(void *d_ptr);
    ~QXmlDeclHandler_QtDShell();

    bool  attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4);
    QString  errorString() const;
    bool  externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  internalEntityDecl(const QString&  name0, const QString&  value1);
    bool  __override_attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4, bool static_call);
    QString  __override_errorString(bool static_call) const;
    bool  __override_externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_internalEntityDecl(const QString&  name0, const QString&  value1, bool static_call);
};

#endif // QXMLDECLHANDLER_SHELL_H
