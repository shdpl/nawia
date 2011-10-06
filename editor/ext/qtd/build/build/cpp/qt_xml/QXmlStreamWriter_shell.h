#ifndef QXMLSTREAMWRITER_SHELL_H
#define QXMLSTREAMWRITER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxmlstream.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlstream.h>

class QXmlStreamWriter_QtDShell : public QXmlStreamWriter
{
public:
    QXmlStreamWriter_QtDShell();
    QXmlStreamWriter_QtDShell(QByteArray*  array0);
    QXmlStreamWriter_QtDShell(QIODevice*  device0);
    ~QXmlStreamWriter_QtDShell();

};

#endif // QXMLSTREAMWRITER_SHELL_H
