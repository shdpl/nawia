#ifndef QIMAGEIOHANDLER_SHELL_H
#define QIMAGEIOHANDLER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimageiohandler.h>

#include <QRect>
#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qvariant.h>

class QImageIOHandler_QtDShell : public QImageIOHandler, public QtdObjectLink
{
public:
    QImageIOHandler_QtDShell(void *d_ptr);
    ~QImageIOHandler_QtDShell();

    bool  canRead() const;
    int  currentImageNumber() const;
    QRect  currentImageRect() const;
    int  imageCount() const;
    bool  jumpToImage(int  imageNumber0);
    bool  jumpToNextImage();
    int  loopCount() const;
    int  nextImageDelay() const;
    QVariant  option(QImageIOHandler::ImageOption  option0) const;
    bool  read(QImage*  image0);
    void setOption(QImageIOHandler::ImageOption  option0, const QVariant&  value1);
    bool  supportsOption(QImageIOHandler::ImageOption  option0) const;
    bool  write(const QImage&  image0);
    bool  __override_canRead(bool static_call) const;
    int  __override_currentImageNumber(bool static_call) const;
    QRect  __override_currentImageRect(bool static_call) const;
    int  __override_imageCount(bool static_call) const;
    bool  __override_jumpToImage(int  imageNumber0, bool static_call);
    bool  __override_jumpToNextImage(bool static_call);
    int  __override_loopCount(bool static_call) const;
    int  __override_nextImageDelay(bool static_call) const;
    QVariant  __override_option(int  option0, bool static_call) const;
    bool  __override_read(QImage*  image0, bool static_call);
    void __override_setOption(int  option0, const QVariant&  value1, bool static_call);
    bool  __override_supportsOption(int  option0, bool static_call) const;
    bool  __override_write(const QImage&  image0, bool static_call);
};

#endif // QIMAGEIOHANDLER_SHELL_H
