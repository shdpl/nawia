#ifndef QFILEICONPROVIDER_SHELL_H
#define QFILEICONPROVIDER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qfileiconprovider.h>

#include <QVariant>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>

class QFileIconProvider_QtDShell : public QFileIconProvider, public QtdObjectLink
{
public:
    QFileIconProvider_QtDShell(void *d_ptr);
    ~QFileIconProvider_QtDShell();

    QIcon  icon(QFileIconProvider::IconType  type0) const;
    QIcon  icon(const QFileInfo&  info0) const;
    QString  type(const QFileInfo&  info0) const;
    QIcon  __override_icon(int  type0, bool static_call) const;
    QIcon  __override_icon(const QFileInfo&  info0, bool static_call) const;
    QString  __override_type(const QFileInfo&  info0, bool static_call) const;
};

#endif // QFILEICONPROVIDER_SHELL_H
