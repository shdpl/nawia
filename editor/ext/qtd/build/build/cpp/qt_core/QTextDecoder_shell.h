#ifndef QTEXTDECODER_SHELL_H
#define QTEXTDECODER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextcodec.h>

#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

class QTextDecoder_QtDShell : public QTextDecoder
{
public:
    QTextDecoder_QtDShell(const QTextCodec*  codec0);
    QTextDecoder_QtDShell(const QTextCodec*  codec0, QTextCodec::ConversionFlags  flags1);
    ~QTextDecoder_QtDShell();

};

#endif // QTEXTDECODER_SHELL_H
