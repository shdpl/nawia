#ifndef QXMLSIMPLEREADER_SHELL_H
#define QXMLSIMPLEREADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qxml.h>

class QXmlSimpleReader_QtDShell : public QXmlSimpleReader, public QtdObjectLink
{
public:
    QXmlSimpleReader_QtDShell(void *d_ptr);
    ~QXmlSimpleReader_QtDShell();

    QXmlDTDHandler*  DTDHandler() const;
    QXmlContentHandler*  contentHandler() const;
    QXmlDeclHandler*  declHandler() const;
    QXmlEntityResolver*  entityResolver() const;
    QXmlErrorHandler*  errorHandler() const;
    bool  feature(const QString&  name0, bool*  ok1) const;
    bool  hasFeature(const QString&  name0) const;
    bool  hasProperty(const QString&  name0) const;
    QXmlLexicalHandler*  lexicalHandler() const;
    bool  parse(const QXmlInputSource*  input0);
    bool  parse(const QXmlInputSource*  input0, bool  incremental1);
    bool  parseContinue();
    void*  property(const QString&  name0, bool*  ok1) const;
    void setContentHandler(QXmlContentHandler*  handler0);
    void setDTDHandler(QXmlDTDHandler*  handler0);
    void setDeclHandler(QXmlDeclHandler*  handler0);
    void setEntityResolver(QXmlEntityResolver*  handler0);
    void setErrorHandler(QXmlErrorHandler*  handler0);
    void setFeature(const QString&  name0, bool  value1);
    void setLexicalHandler(QXmlLexicalHandler*  handler0);
    void setProperty(const QString&  name0, void*  value1);
    QXmlDTDHandler*  __override_DTDHandler(bool static_call) const;
    QXmlContentHandler*  __override_contentHandler(bool static_call) const;
    QXmlDeclHandler*  __override_declHandler(bool static_call) const;
    QXmlEntityResolver*  __override_entityResolver(bool static_call) const;
    QXmlErrorHandler*  __override_errorHandler(bool static_call) const;
    bool  __override_feature(const QString&  name0, bool*  ok1, bool static_call) const;
    bool  __override_hasFeature(const QString&  name0, bool static_call) const;
    bool  __override_hasProperty(const QString&  name0, bool static_call) const;
    QXmlLexicalHandler*  __override_lexicalHandler(bool static_call) const;
    bool  __override_parse(const QXmlInputSource*  input0, bool static_call);
    bool  __override_parse(const QXmlInputSource*  input0, bool  incremental1, bool static_call);
    bool  __override_parseContinue(bool static_call);
    void __override_setContentHandler(QXmlContentHandler*  handler0, bool static_call);
    void __override_setDTDHandler(QXmlDTDHandler*  handler0, bool static_call);
    void __override_setDeclHandler(QXmlDeclHandler*  handler0, bool static_call);
    void __override_setEntityResolver(QXmlEntityResolver*  handler0, bool static_call);
    void __override_setErrorHandler(QXmlErrorHandler*  handler0, bool static_call);
    void __override_setFeature(const QString&  name0, bool  value1, bool static_call);
    void __override_setLexicalHandler(QXmlLexicalHandler*  handler0, bool static_call);
};

#endif // QXMLSIMPLEREADER_SHELL_H
