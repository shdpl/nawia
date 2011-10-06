#ifndef QINPUTMETHODEVENT_ATTRIBUTE_SHELL_H
#define QINPUTMETHODEVENT_ATTRIBUTE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <QInputMethodEvent>

#include <QVariant>
#include <qvariant.h>

class QInputMethodEvent_Attribute_QtDShell : public QInputMethodEvent::Attribute
{
public:
    QInputMethodEvent_Attribute_QtDShell(QInputMethodEvent::AttributeType  t0, int  s1, int  l2, QVariant  val3);
    ~QInputMethodEvent_Attribute_QtDShell();

};

#endif // QINPUTMETHODEVENT_ATTRIBUTE_SHELL_H
