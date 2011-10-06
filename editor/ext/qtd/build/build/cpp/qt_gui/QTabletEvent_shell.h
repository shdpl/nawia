#ifndef QTABLETEVENT_SHELL_H
#define QTABLETEVENT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qevent.h>

#include <QVariant>

class QTabletEvent_QtDShell : public QTabletEvent, public QtdObjectLink
{
public:
    QTabletEvent_QtDShell(void *d_ptr, QEvent::Type  t0, const QPoint&  pos1, const QPoint&  globalPos2, const QPointF&  hiResGlobalPos3, int  device4, int  pointerType5, double  pressure6, int  xTilt7, int  yTilt8, double  tangentialPressure9, double  rotation10, int  z11, Qt::KeyboardModifiers  keyState12, qint64  uniqueID13);
    ~QTabletEvent_QtDShell();

    int  mYT_getter();
    void setMYT_setter(int  mYT0);
    QPoint  mGPos_getter();
    void setMGPos_setter(QPoint  mGPos0);
    int  mXT_getter();
    void setMXT_setter(int  mXT0);
    qint64  mUnique_getter();
    void setMUnique_setter(qint64  mUnique0);
    double  mTangential_getter();
    void setMTangential_setter(double  mTangential0);
    int  mPointerType_getter();
    void setMPointerType_setter(int  mPointerType0);
    QPointF  mHiResGlobalPos_getter();
    void setMHiResGlobalPos_setter(QPointF  mHiResGlobalPos0);
    QPoint  mPos_getter();
    void setMPos_setter(QPoint  mPos0);
    double  mPress_getter();
    void setMPress_setter(double  mPress0);
    int  mDev_getter();
    void setMDev_setter(int  mDev0);
    double  mRot_getter();
    void setMRot_setter(double  mRot0);
    int  mZ_getter();
    void setMZ_setter(int  mZ0);
};

#endif // QTABLETEVENT_SHELL_H
