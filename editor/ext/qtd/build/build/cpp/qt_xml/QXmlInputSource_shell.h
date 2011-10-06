#ifndef QXMLINPUTSOURCE_SHELL_H
#define QXMLINPUTSOURCE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>

class QXmlInputSource_QtDShell : public QXmlInputSource, public QtdObjectLink
{
public:
    QXmlInputSource_QtDShell(void *d_ptr);
    QXmlInputSource_QtDShell(void *d_ptr, QIODevice*  dev0);
    ~QXmlInputSource_QtDShell();

    QString  data() const;
    void fetchData();
    QString  fromRawData(const QByteArray&  data0, bool  beginning1);
    void reset();
    void setData(const QByteArray&  dat0);
    void setData(const QString&  dat0);
    QString  __override_data(bool static_call) const;
    void __override_fetchData(bool static_call);
    QString  __override_fromRawData(const QByteArray&  data0, bool  beginning1, bool static_call);
    void __override_reset(bool static_call);
    void __override_setData(const QByteArray&  dat0, bool static_call);
    void __override_setData(const QString&  dat0, bool static_call);
};

#endif // QXMLINPUTSOURCE_SHELL_H
