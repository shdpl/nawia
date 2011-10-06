#ifndef QDYNAMICPROPERTYCHANGEEVENT_SHELL_H
#define QDYNAMICPROPERTYCHANGEEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcoreevent.h>

#include <QVariant>
#include <qbytearray.h>

class QDynamicPropertyChangeEvent_QtDShell : public QDynamicPropertyChangeEvent, public QtdObjectLink
{
public:
    QDynamicPropertyChangeEvent_QtDShell(void *d_ptr, const QByteArray&  name0);
    ~QDynamicPropertyChangeEvent_QtDShell();

};

#endif // QDYNAMICPROPERTYCHANGEEVENT_SHELL_H
