#ifndef QXMLCONTENTHANDLER_SHELL_H
#define QXMLCONTENTHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qxml.h>

class QXmlContentHandler_QtDShell : public QXmlContentHandler, public QtdObjectLink
{
public:
    QXmlContentHandler_QtDShell(void *d_ptr);
    ~QXmlContentHandler_QtDShell();

    bool  characters(const QString&  ch0);
    bool  endDocument();
    bool  endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2);
    bool  endPrefixMapping(const QString&  prefix0);
    QString  errorString() const;
    bool  ignorableWhitespace(const QString&  ch0);
    bool  processingInstruction(const QString&  target0, const QString&  data1);
    void setDocumentLocator(QXmlLocator*  locator0);
    bool  skippedEntity(const QString&  name0);
    bool  startDocument();
    bool  startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3);
    bool  startPrefixMapping(const QString&  prefix0, const QString&  uri1);
    bool  __override_characters(const QString&  ch0, bool static_call);
    bool  __override_endDocument(bool static_call);
    bool  __override_endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, bool static_call);
    bool  __override_endPrefixMapping(const QString&  prefix0, bool static_call);
    QString  __override_errorString(bool static_call) const;
    bool  __override_ignorableWhitespace(const QString&  ch0, bool static_call);
    bool  __override_processingInstruction(const QString&  target0, const QString&  data1, bool static_call);
    void __override_setDocumentLocator(QXmlLocator*  locator0, bool static_call);
    bool  __override_skippedEntity(const QString&  name0, bool static_call);
    bool  __override_startDocument(bool static_call);
    bool  __override_startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3, bool static_call);
    bool  __override_startPrefixMapping(const QString&  prefix0, const QString&  uri1, bool static_call);
};

#endif // QXMLCONTENTHANDLER_SHELL_H
