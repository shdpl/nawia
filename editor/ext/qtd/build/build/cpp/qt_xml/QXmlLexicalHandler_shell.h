#ifndef QXMLLEXICALHANDLER_SHELL_H
#define QXMLLEXICALHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>

class QXmlLexicalHandler_QtDShell : public QXmlLexicalHandler, public QtdObjectLink
{
public:
    QXmlLexicalHandler_QtDShell(void *d_ptr);
    ~QXmlLexicalHandler_QtDShell();

    bool  comment(const QString&  ch0);
    bool  endCDATA();
    bool  endDTD();
    bool  endEntity(const QString&  name0);
    QString  errorString() const;
    bool  startCDATA();
    bool  startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  startEntity(const QString&  name0);
    bool  __override_comment(const QString&  ch0, bool static_call);
    bool  __override_endCDATA(bool static_call);
    bool  __override_endDTD(bool static_call);
    bool  __override_endEntity(const QString&  name0, bool static_call);
    QString  __override_errorString(bool static_call) const;
    bool  __override_startCDATA(bool static_call);
    bool  __override_startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_startEntity(const QString&  name0, bool static_call);
};

#endif // QXMLLEXICALHANDLER_SHELL_H
