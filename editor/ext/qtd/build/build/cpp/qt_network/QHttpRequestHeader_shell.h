#ifndef QHTTPREQUESTHEADER_SHELL_H
#define QHTTPREQUESTHEADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qhttp.h>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class QHttpRequestHeader_QtDShell : public QHttpRequestHeader, public QtdObjectLink
{
public:
    QHttpRequestHeader_QtDShell(void *d_ptr);
    QHttpRequestHeader_QtDShell(void *d_ptr, const QHttpRequestHeader&  header0);
    QHttpRequestHeader_QtDShell(void *d_ptr, const QString&  method0, const QString&  path1, int  majorVer2, int  minorVer3);
    QHttpRequestHeader_QtDShell(void *d_ptr, const QString&  str0);
    ~QHttpRequestHeader_QtDShell();

    int  majorVersion() const;
    int  minorVersion() const;
    bool  parseLine(const QString&  line0, int  number1);
    QString  toString() const;
    bool  __public_parse(const QString&  str0);
    void __public_setValid(bool  arg__1);
    int  __override_majorVersion(bool static_call) const;
    int  __override_minorVersion(bool static_call) const;
    bool  __override_parseLine(const QString&  line0, int  number1, bool static_call);
    QString  __override_toString(bool static_call) const;
};

#endif // QHTTPREQUESTHEADER_SHELL_H
