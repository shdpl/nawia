#ifndef QHTTPHEADER_SHELL_H
#define QHTTPHEADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qhttp.h>

#include <QVariant>
#include <qhttp.h>
#include <qlist.h>
#include <qpair.h>
#include <qstringlist.h>

class QHttpHeader_QtDShell : public QHttpHeader, public QtdObjectLink
{
public:
    QHttpHeader_QtDShell(void *d_ptr);
    QHttpHeader_QtDShell(void *d_ptr, const QHttpHeader&  header0);
    QHttpHeader_QtDShell(void *d_ptr, const QString&  str0);
    ~QHttpHeader_QtDShell();

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

#endif // QHTTPHEADER_SHELL_H
