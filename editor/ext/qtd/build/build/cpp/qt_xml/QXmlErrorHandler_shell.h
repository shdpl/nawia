#ifndef QXMLERRORHANDLER_SHELL_H
#define QXMLERRORHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qxml.h>

class QXmlErrorHandler_QtDShell : public QXmlErrorHandler, public QtdObjectLink
{
public:
    QXmlErrorHandler_QtDShell(void *d_ptr);
    ~QXmlErrorHandler_QtDShell();

    bool  error(const QXmlParseException&  exception0);
    QString  errorString() const;
    bool  fatalError(const QXmlParseException&  exception0);
    bool  warning(const QXmlParseException&  exception0);
    bool  __override_error(const QXmlParseException&  exception0, bool static_call);
    QString  __override_errorString(bool static_call) const;
    bool  __override_fatalError(const QXmlParseException&  exception0, bool static_call);
    bool  __override_warning(const QXmlParseException&  exception0, bool static_call);
};

#endif // QXMLERRORHANDLER_SHELL_H
