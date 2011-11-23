#ifndef QXMLDEFAULTHANDLER_SHELL_H
#define QXMLDEFAULTHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qxml.h>

class QXmlDefaultHandler_QtDShell : public QXmlDefaultHandler, public QtdObjectLink
{
public:
    QXmlDefaultHandler_QtDShell(void *d_ptr);
    ~QXmlDefaultHandler_QtDShell();

    bool  attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4);
    bool  characters(const QString&  ch0);
    bool  comment(const QString&  ch0);
    bool  endCDATA();
    bool  endDTD();
    bool  endDocument();
    bool  endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2);
    bool  endEntity(const QString&  name0);
    bool  endPrefixMapping(const QString&  prefix0);
    bool  error(const QXmlParseException&  exception0);
    QString  errorString() const;
    bool  externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  fatalError(const QXmlParseException&  exception0);
    bool  ignorableWhitespace(const QString&  ch0);
    bool  internalEntityDecl(const QString&  name0, const QString&  value1);
    bool  notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  processingInstruction(const QString&  target0, const QString&  data1);
    bool  resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2);
    void setDocumentLocator(QXmlLocator*  locator0);
    bool  skippedEntity(const QString&  name0);
    bool  startCDATA();
    bool  startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2);
    bool  startDocument();
    bool  startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3);
    bool  startEntity(const QString&  name0);
    bool  startPrefixMapping(const QString&  prefix0, const QString&  uri1);
    bool  unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3);
    bool  warning(const QXmlParseException&  exception0);
    bool  __override_attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4, bool static_call);
    bool  __override_characters(const QString&  ch0, bool static_call);
    bool  __override_comment(const QString&  ch0, bool static_call);
    bool  __override_endCDATA(bool static_call);
    bool  __override_endDTD(bool static_call);
    bool  __override_endDocument(bool static_call);
    bool  __override_endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, bool static_call);
    bool  __override_endEntity(const QString&  name0, bool static_call);
    bool  __override_endPrefixMapping(const QString&  prefix0, bool static_call);
    bool  __override_error(const QXmlParseException&  exception0, bool static_call);
    QString  __override_errorString(bool static_call) const;
    bool  __override_externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_fatalError(const QXmlParseException&  exception0, bool static_call);
    bool  __override_ignorableWhitespace(const QString&  ch0, bool static_call);
    bool  __override_internalEntityDecl(const QString&  name0, const QString&  value1, bool static_call);
    bool  __override_notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_processingInstruction(const QString&  target0, const QString&  data1, bool static_call);
    bool  __override_resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2, bool static_call);
    void __override_setDocumentLocator(QXmlLocator*  locator0, bool static_call);
    bool  __override_skippedEntity(const QString&  name0, bool static_call);
    bool  __override_startCDATA(bool static_call);
    bool  __override_startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2, bool static_call);
    bool  __override_startDocument(bool static_call);
    bool  __override_startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3, bool static_call);
    bool  __override_startEntity(const QString&  name0, bool static_call);
    bool  __override_startPrefixMapping(const QString&  prefix0, const QString&  uri1, bool static_call);
    bool  __override_unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3, bool static_call);
    bool  __override_warning(const QXmlParseException&  exception0, bool static_call);
};

#endif // QXMLDEFAULTHANDLER_SHELL_H
