#ifndef QSHORTCUTEVENT_SHELL_H
#define QSHORTCUTEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>
#include <qkeysequence.h>

class QShortcutEvent_QtDShell : public QShortcutEvent, public QtdObjectLink
{
public:
    QShortcutEvent_QtDShell(void *d_ptr, const QKeySequence&  key0, int  id1, bool  ambiguous2);
    ~QShortcutEvent_QtDShell();

    QKeySequence  sequence_getter();
    void setSequence_setter(QKeySequence  sequence0);
    int  sid_getter();
    void setSid_setter(int  sid0);
    bool  ambig_getter();
    void setAmbig_setter(bool  ambig0);
};

#endif // QSHORTCUTEVENT_SHELL_H
