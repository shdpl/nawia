#ifndef QABSTRACTPICTUREFORMAT_SHELL_H
#define QABSTRACTPICTUREFORMAT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpictureformatplugin.h>

#include <QVariant>
#include <qpicture.h>
#include <qstringlist.h>

class QAbstractPictureFormat_QtDShell : public QPictureFormatInterface, public QtdObjectLink
{
public:
    QAbstractPictureFormat_QtDShell(void *d_ptr);
    ~QAbstractPictureFormat_QtDShell();

    bool  installIOHandler(const QString&  arg__1);
    QStringList  keys() const;
    bool  loadPicture(const QString&  format0, const QString&  filename1, QPicture*  arg__3);
    bool  savePicture(const QString&  format0, const QString&  filename1, const QPicture&  arg__3);
    bool  __override_installIOHandler(const QString&  arg__1, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    bool  __override_loadPicture(const QString&  format0, const QString&  filename1, QPicture*  arg__3, bool static_call);
    bool  __override_savePicture(const QString&  format0, const QString&  filename1, const QPicture&  arg__3, bool static_call);
};

#endif // QABSTRACTPICTUREFORMAT_SHELL_H
