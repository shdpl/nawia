#ifndef QCRYPTOGRAPHICHASH_SHELL_H
#define QCRYPTOGRAPHICHASH_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcryptographichash.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcryptographichash.h>

class QCryptographicHash_QtDShell : public QCryptographicHash
{
public:
    QCryptographicHash_QtDShell(QCryptographicHash::Algorithm  method0);
    ~QCryptographicHash_QtDShell();

};

#endif // QCRYPTOGRAPHICHASH_SHELL_H
