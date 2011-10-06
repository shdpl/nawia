#ifndef QABSTRACTFILEENGINE_SHELL_H
#define QABSTRACTFILEENGINE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstractfileengine.h>

#include <QDateTime>
#include <QVariant>
#include <qabstractfileengine.h>
#include <qdatetime.h>
#include <qstringlist.h>

class QAbstractFileEngine_QtDShell : public QAbstractFileEngine, public QtdObjectLink
{
public:
    QAbstractFileEngine_QtDShell(void *d_ptr);
    ~QAbstractFileEngine_QtDShell();

    bool  caseSensitive() const;
    bool  close();
    bool  copy(const QString&  newName0);
    QStringList  entryList(QDir::Filters  filters0, const QStringList&  filterNames1) const;
    QAbstractFileEngine::FileFlags  fileFlags(QAbstractFileEngine::FileFlags  type0) const;
    QString  fileName(QAbstractFileEngine::FileName  file0) const;
    QDateTime  fileTime(QAbstractFileEngine::FileTime  time0) const;
    bool  flush();
    int  handle() const;
    bool  isRelativePath() const;
    bool  isSequential() const;
    bool  link(const QString&  newName0);
    bool  mkdir(const QString&  dirName0, bool  createParentDirectories1) const;
    bool  open(QIODevice::OpenMode  openMode0);
    QString  owner(QAbstractFileEngine::FileOwner  arg__1) const;
    uint  ownerId(QAbstractFileEngine::FileOwner  arg__1) const;
    qint64  pos() const;
    qint64  read(char*  data0, qint64  maxlen1);
    qint64  readLine(char*  data0, qint64  maxlen1);
    bool  remove();
    bool  rename(const QString&  newName0);
    bool  rmdir(const QString&  dirName0, bool  recurseParentDirectories1) const;
    bool  seek(qint64  pos0);
    void setFileName(const QString&  file0);
    bool  setPermissions(uint  perms0);
    bool  setSize(qint64  size0);
    qint64  size() const;
    bool  supportsExtension(QAbstractFileEngine::Extension  extension0) const;
    qint64  write(const char*  data0, qint64  len1);
    void __public_setError(int  error0, const QString&  str1);
    bool  __override_caseSensitive(bool static_call) const;
    bool  __override_close(bool static_call);
    bool  __override_copy(const QString&  newName0, bool static_call);
    QStringList  __override_entryList(int  filters0, const QStringList&  filterNames1, bool static_call) const;
    int  __override_fileFlags(int  type0, bool static_call) const;
    QString  __override_fileName(int  file0, bool static_call) const;
    QDateTime  __override_fileTime(int  time0, bool static_call) const;
    bool  __override_flush(bool static_call);
    int  __override_handle(bool static_call) const;
    bool  __override_isRelativePath(bool static_call) const;
    bool  __override_isSequential(bool static_call) const;
    bool  __override_link(const QString&  newName0, bool static_call);
    bool  __override_mkdir(const QString&  dirName0, bool  createParentDirectories1, bool static_call) const;
    bool  __override_open(int  openMode0, bool static_call);
    QString  __override_owner(int  arg__1, bool static_call) const;
    uint  __override_ownerId(int  arg__1, bool static_call) const;
    qint64  __override_pos(bool static_call) const;
    qint64  __override_read(char*  data0, qint64  maxlen1, bool static_call);
    qint64  __override_readLine(char*  data0, qint64  maxlen1, bool static_call);
    bool  __override_remove(bool static_call);
    bool  __override_rename(const QString&  newName0, bool static_call);
    bool  __override_rmdir(const QString&  dirName0, bool  recurseParentDirectories1, bool static_call) const;
    bool  __override_seek(qint64  pos0, bool static_call);
    void __override_setFileName(const QString&  file0, bool static_call);
    bool  __override_setPermissions(uint  perms0, bool static_call);
    bool  __override_setSize(qint64  size0, bool static_call);
    qint64  __override_size(bool static_call) const;
    bool  __override_supportsExtension(int  extension0, bool static_call) const;
    qint64  __override_write(const char*  data0, qint64  len1, bool static_call);
};

#endif // QABSTRACTFILEENGINE_SHELL_H
