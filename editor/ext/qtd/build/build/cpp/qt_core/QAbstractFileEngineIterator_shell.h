#ifndef QABSTRACTFILEENGINEITERATOR_SHELL_H
#define QABSTRACTFILEENGINEITERATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstractfileengine.h>

#include <QVariant>
#include <qabstractfileengine.h>
#include <qfileinfo.h>
#include <qstringlist.h>

class QAbstractFileEngineIterator_QtDShell : public QAbstractFileEngineIterator, public QtdObjectLink
{
public:
    QAbstractFileEngineIterator_QtDShell(void *d_ptr, QDir::Filters  filters0, const QStringList&  nameFilters1);
    ~QAbstractFileEngineIterator_QtDShell();

    QFileInfo  currentFileInfo() const;
    QString  currentFileName() const;
    bool  hasNext() const;
    QString  next();
    QFileInfo  __override_currentFileInfo(bool static_call) const;
    QString  __override_currentFileName(bool static_call) const;
    bool  __override_hasNext(bool static_call) const;
    QString  __override_next(bool static_call);
};

#endif // QABSTRACTFILEENGINEITERATOR_SHELL_H
