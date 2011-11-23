#ifndef QTEXTBLOCKUSERDATA_SHELL_H
#define QTEXTBLOCKUSERDATA_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextobject.h>

#include <QVariant>

class QTextBlockUserData_QtDShell : public QTextBlockUserData, public QtdObjectLink
{
public:
    QTextBlockUserData_QtDShell(void *d_ptr);
    ~QTextBlockUserData_QtDShell();

};

#endif // QTEXTBLOCKUSERDATA_SHELL_H
