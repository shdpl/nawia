#ifndef QTEXTOPTION_TAB_SHELL_H
#define QTEXTOPTION_TAB_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextoption.h>

#include <QVariant>
#include <qtextoption.h>

class QTextOption_Tab_QtDShell : public QTextOption::Tab
{
public:
    QTextOption_Tab_QtDShell();
    QTextOption_Tab_QtDShell(double  pos0, QTextOption::TabType  tabType1, QChar  delim2);
    ~QTextOption_Tab_QtDShell();

};

#endif // QTEXTOPTION_TAB_SHELL_H
