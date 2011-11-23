#ifndef QTEXTTABLECELLFORMAT_SHELL_H
#define QTEXTTABLECELLFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextformat.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qfont.h>
#include <qpen.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qvector.h>

class QTextTableCellFormat_QtDShell : public QTextTableCellFormat
{
public:
    QTextTableCellFormat_QtDShell();
    QTextTableCellFormat_QtDShell(const QTextFormat&  fmt0);
    ~QTextTableCellFormat_QtDShell();

};

#endif // QTEXTTABLECELLFORMAT_SHELL_H
