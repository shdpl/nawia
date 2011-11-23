#ifndef QXMLDTDHANDLER_SHELL_H
#define QXMLDTDHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>

class QXmlDTDHandler_QtDShell : public QXmlDTDHandler, public QtdObjectLink
{
public:
    QXmlDTDHandler_QtDShell(void *d_ptr);
    ~QXmlDTDHandler_QtDShell();

    QString  errorString() const;
    bool  notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3);
    QString  __override_errorString(bool static_call) const;
    bool  __override_notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3, bool static_call);
};

#endif // QXMLDTDHANDLER_SHELL_H
