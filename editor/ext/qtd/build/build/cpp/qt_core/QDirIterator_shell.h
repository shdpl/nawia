#ifndef QDIRITERATOR_SHELL_H
#define QDIRITERATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qdiriterator.h>

#include <QVariant>
#include <qdir.h>
#include <qdiriterator.h>
#include <qfileinfo.h>
#include <qstringlist.h>

class QDirIterator_QtDShell : public QDirIterator, public QtdObjectLink
{
public:
    QDirIterator_QtDShell(void *d_ptr, const QDir&  dir0, QDirIterator::IteratorFlags  flags1);
    QDirIterator_QtDShell(void *d_ptr, const QString&  path0, QDir::Filters  filter1, QDirIterator::IteratorFlags  flags2);
    QDirIterator_QtDShell(void *d_ptr, const QString&  path0, QDirIterator::IteratorFlags  flags1);
    QDirIterator_QtDShell(void *d_ptr, const QString&  path0, const QStringList&  nameFilters1, QDir::Filters  filters2, QDirIterator::IteratorFlags  flags3);
    ~QDirIterator_QtDShell();

};

#endif // QDIRITERATOR_SHELL_H
