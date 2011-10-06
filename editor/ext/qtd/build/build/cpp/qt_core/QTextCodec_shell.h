#ifndef QTEXTCODEC_SHELL_H
#define QTEXTCODEC_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextcodec.h>

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qlist.h>
#include <qtextcodec.h>

class QTextCodec_QtDShell : public QTextCodec, public QtdObjectLink
{
public:
    QTextCodec_QtDShell(void *d_ptr);
    ~QTextCodec_QtDShell();

    QList<QByteArray >  aliases() const;
    QByteArray  convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2) const;
    QString  convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2) const;
    int  mibEnum() const;
    QByteArray  name() const;
    QList<QByteArray >  __override_aliases(bool static_call) const;
    QByteArray  __override_convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2, bool static_call) const;
    QString  __override_convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2, bool static_call) const;
    int  __override_mibEnum(bool static_call) const;
    QByteArray  __override_name(bool static_call) const;
};

#endif // QTEXTCODEC_SHELL_H
