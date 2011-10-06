#ifndef QTEXTTABLEFORMAT_SHELL_H
#define QTEXTTABLEFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextformat.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpen.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

class QTextTableFormat_QtDShell : public QTextTableFormat
{
public:
    QTextTableFormat_QtDShell();
    QTextTableFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextTableFormat_QtDShell();

};

#endif // QTEXTTABLEFORMAT_SHELL_H
