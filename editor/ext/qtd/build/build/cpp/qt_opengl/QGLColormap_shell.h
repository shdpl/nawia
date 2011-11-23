#ifndef QGLCOLORMAP_SHELL_H
#define QGLCOLORMAP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qglcolormap.h>

#include <QVariant>
#include <qcolor.h>
#include <qglcolormap.h>

class QGLColormap_QtDShell : public QGLColormap
{
public:
    QGLColormap_QtDShell();
    QGLColormap_QtDShell(const QGLColormap&  arg__1);
    ~QGLColormap_QtDShell();

    Qt::HANDLE  __public_handle();
    void __public_setHandle(Qt::HANDLE  ahandle0);
};

#endif // QGLCOLORMAP_SHELL_H
