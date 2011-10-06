#ifndef QXMLLOCATOR_SHELL_H
#define QXMLLOCATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qxml.h>

#include <QVariant>

class QXmlLocator_QtDShell : public QXmlLocator, public QtdObjectLink
{
public:
    QXmlLocator_QtDShell(void *d_ptr);
    ~QXmlLocator_QtDShell();

    int  columnNumber() const;
    int  lineNumber() const;
    int  __override_columnNumber(bool static_call) const;
    int  __override_lineNumber(bool static_call) const;
};

#endif // QXMLLOCATOR_SHELL_H
