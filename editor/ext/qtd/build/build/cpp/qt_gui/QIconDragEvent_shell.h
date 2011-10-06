#ifndef QICONDRAGEVENT_SHELL_H
#define QICONDRAGEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QIconDragEvent_QtDShell : public QIconDragEvent, public QtdObjectLink
{
public:
    QIconDragEvent_QtDShell(void *d_ptr);
    ~QIconDragEvent_QtDShell();

};

#endif // QICONDRAGEVENT_SHELL_H
