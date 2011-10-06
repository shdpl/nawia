#ifndef QPAINTENGINESTATE_SHELL_H
#define QPAINTENGINESTATE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpaintengine.h>

#include <QPainterPath>
#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qmatrix.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qregion.h>
#include <qtransform.h>

class QPaintEngineState_QtDShell : public QPaintEngineState
{
public:
    QPaintEngineState_QtDShell();
    ~QPaintEngineState_QtDShell();

    QPaintEngine::DirtyFlags  dirtyFlags_getter();
    void setDirtyFlags_setter(QPaintEngine::DirtyFlags  dirtyFlags0);
};

#endif // QPAINTENGINESTATE_SHELL_H
