#ifndef QTEXTEDIT_EXTRASELECTION_SHELL_H
#define QTEXTEDIT_EXTRASELECTION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <QTextEdit>

#include <QVariant>

class QTextEdit_ExtraSelection_QtDShell : public QTextEdit::ExtraSelection
{
public:
    QTextEdit_ExtraSelection_QtDShell();
    ~QTextEdit_ExtraSelection_QtDShell();

};

#endif // QTEXTEDIT_EXTRASELECTION_SHELL_H
