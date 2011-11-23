#ifndef QITEMEDITORCREATORBASE_SHELL_H
#define QITEMEDITORCREATORBASE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qitemeditorfactory.h>

#include <QVariant>
#include <qbytearray.h>
#include <qwidget.h>

class QItemEditorCreatorBase_QtDShell : public QItemEditorCreatorBase, public QtdObjectLink
{
public:
    QItemEditorCreatorBase_QtDShell(void *d_ptr);
    ~QItemEditorCreatorBase_QtDShell();

    QWidget*  createWidget(QWidget*  parent0) const;
    QByteArray  valuePropertyName() const;
    QWidget*  __override_createWidget(QWidget*  parent0, bool static_call) const;
    QByteArray  __override_valuePropertyName(bool static_call) const;
};

#endif // QITEMEDITORCREATORBASE_SHELL_H
