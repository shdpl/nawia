#ifndef QHTTPRESPONSEHEADER_SHELL_H
#define QHTTPRESPONSEHEADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qhttp.h>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class QHttpResponseHeader_QtDShell : public QHttpResponseHeader, public QtdObjectLink
{
public:
    QHttpResponseHeader_QtDShell(void *d_ptr);
    QHttpResponseHeader_QtDShell(void *d_ptr, const QHttpResponseHeader&  header0);
    QHttpResponseHeader_QtDShell(void *d_ptr, const QString&  str0);
    QHttpResponseHeader_QtDShell(void *d_ptr, int  code0, const QString&  text1, int  majorVer2, int  minorVer3);
    ~QHttpResponseHeader_QtDShell();

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

#endif // QHTTPRESPONSEHEADER_SHELL_H
