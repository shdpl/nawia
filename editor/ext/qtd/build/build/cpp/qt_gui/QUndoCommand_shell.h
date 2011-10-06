#ifndef QUNDOCOMMAND_SHELL_H
#define QUNDOCOMMAND_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qundostack.h>

#include <QVariant>
#include <qundostack.h>

class QUndoCommand_QtDShell : public QUndoCommand, public QtdObjectLink
{
public:
    QUndoCommand_QtDShell(void *d_ptr, QUndoCommand*  parent0);
    QUndoCommand_QtDShell(void *d_ptr, const QString&  text0, QUndoCommand*  parent1);
    ~QUndoCommand_QtDShell();

    int  id() const;
    bool  mergeWith(const QUndoCommand*  other0);
    void redo();
    void undo();
    int  __override_id(bool static_call) const;
    bool  __override_mergeWith(const QUndoCommand*  other0, bool static_call);
    void __override_redo(bool static_call);
    void __override_undo(bool static_call);
};

#endif // QUNDOCOMMAND_SHELL_H
