#ifndef QURLINFO_SHELL_H
#define QURLINFO_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qurlinfo.h>

#include <QVariant>
#include <qdatetime.h>
#include <qurl.h>
#include <qurlinfo.h>

class QUrlInfo_QtDShell : public QUrlInfo, public QtdObjectLink
{
public:
    QUrlInfo_QtDShell(void *d_ptr);
    QUrlInfo_QtDShell(void *d_ptr, const QString&  name0, int  permissions1, const QString&  owner2, const QString&  group3, qint64  size4, const QDateTime&  lastModified5, const QDateTime&  lastRead6, bool  isDir7, bool  isFile8, bool  isSymLink9, bool  isWritable10, bool  isReadable11, bool  isExecutable12);
    QUrlInfo_QtDShell(void *d_ptr, const QUrl&  url0, int  permissions1, const QString&  owner2, const QString&  group3, qint64  size4, const QDateTime&  lastModified5, const QDateTime&  lastRead6, bool  isDir7, bool  isFile8, bool  isSymLink9, bool  isWritable10, bool  isReadable11, bool  isExecutable12);
    QUrlInfo_QtDShell(void *d_ptr, const QUrlInfo&  ui0);
    ~QUrlInfo_QtDShell();

    void setDir(bool  b0);
    void setFile(bool  b0);
    void setGroup(const QString&  s0);
    void setLastModified(const QDateTime&  dt0);
    void setName(const QString&  name0);
    void setOwner(const QString&  s0);
    void setPermissions(int  p0);
    void setReadable(bool  b0);
    void setSize(qint64  size0);
    void setSymLink(bool  b0);
    void setWritable(bool  b0);
    void __override_setDir(bool  b0, bool static_call);
    void __override_setFile(bool  b0, bool static_call);
    void __override_setGroup(const QString&  s0, bool static_call);
    void __override_setLastModified(const QDateTime&  dt0, bool static_call);
    void __override_setName(const QString&  name0, bool static_call);
    void __override_setOwner(const QString&  s0, bool static_call);
    void __override_setPermissions(int  p0, bool static_call);
    void __override_setReadable(bool  b0, bool static_call);
    void __override_setSize(qint64  size0, bool static_call);
    void __override_setSymLink(bool  b0, bool static_call);
    void __override_setWritable(bool  b0, bool static_call);
};

#endif // QURLINFO_SHELL_H
