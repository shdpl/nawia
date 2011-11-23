#ifndef QFILEOPENEVENT_SHELL_H
#define QFILEOPENEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qurl.h>

class QFileOpenEvent_QtDShell : public QFileOpenEvent, public QtdObjectLink
{
public:
    QFileOpenEvent_QtDShell(void *d_ptr, const QString&  file0);
    QFileOpenEvent_QtDShell(void *d_ptr, const QUrl&  url0);
    ~QFileOpenEvent_QtDShell();

};

#endif // QFILEOPENEVENT_SHELL_H
