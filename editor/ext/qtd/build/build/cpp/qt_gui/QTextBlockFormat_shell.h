#ifndef QTEXTBLOCKFORMAT_SHELL_H
#define QTEXTBLOCKFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextformat.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qlist.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qtextoption.h>
#include <qvariant.h>
#include <qvector.h>

class QTextBlockFormat_QtDShell : public QTextBlockFormat
{
public:
    QTextBlockFormat_QtDShell();
    QTextBlockFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextBlockFormat_QtDShell();

};

#endif // QTEXTBLOCKFORMAT_SHELL_H
