#ifndef QSPACERITEM_SHELL_H
#define QSPACERITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qlayoutitem.h>

#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qwidget.h>

class QSpacerItem_QtDShell : public QSpacerItem, public QtdObjectLink
{
public:
    QSpacerItem_QtDShell(void *d_ptr, int  w0, int  h1, QSizePolicy::Policy  hData2, QSizePolicy::Policy  vData3);
    ~QSpacerItem_QtDShell();

    Qt::Orientations  expandingDirections() const;
    QRect  geometry() const;
    bool  hasHeightForWidth() const;
    int  heightForWidth(int  arg__1) const;
    void invalidate();
    bool  isEmpty() const;
    QLayout*  layout();
    QSize  maximumSize() const;
    int  minimumHeightForWidth(int  arg__1) const;
    QSize  minimumSize() const;
    void setGeometry(const QRect&  arg__1);
    QSize  sizeHint() const;
    QSpacerItem*  spacerItem();
    QWidget*  widget();
    int  __override_expandingDirections(bool static_call) const;
    QRect  __override_geometry(bool static_call) const;
    bool  __override_hasHeightForWidth(bool static_call) const;
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_invalidate(bool static_call);
    bool  __override_isEmpty(bool static_call) const;
    QLayout*  __override_layout(bool static_call);
    QSize  __override_maximumSize(bool static_call) const;
    int  __override_minimumHeightForWidth(int  arg__1, bool static_call) const;
    QSize  __override_minimumSize(bool static_call) const;
    void __override_setGeometry(const QRect&  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    QSpacerItem*  __override_spacerItem(bool static_call);
    QWidget*  __override_widget(bool static_call);
};

#endif // QSPACERITEM_SHELL_H
