#ifndef QXMLATTRIBUTES_SHELL_H
#define QXMLATTRIBUTES_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>

class QXmlAttributes_QtDShell : public QXmlAttributes, public QtdObjectLink
{
public:
    QXmlAttributes_QtDShell(void *d_ptr);
    ~QXmlAttributes_QtDShell();

};

#endif // QXMLATTRIBUTES_SHELL_H
