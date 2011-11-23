#ifndef QTEXTENCODER_SHELL_H
#define QTEXTENCODER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextcodec.h>

#include <QVariant>
#include <qbytearray.h>
#include <qtextcodec.h>

class QTextEncoder_QtDShell : public QTextEncoder
{
public:
    QTextEncoder_QtDShell(const QTextCodec*  codec0);
    QTextEncoder_QtDShell(const QTextCodec*  codec0, QTextCodec::ConversionFlags  flags1);
    ~QTextEncoder_QtDShell();

};

#endif // QTEXTENCODER_SHELL_H
