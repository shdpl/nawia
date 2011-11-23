#include <QVariant>

#include <iostream>
#include <qgl.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

// ---externC---
// QGL::setPreferredPaintEngine(QPaintEngine::Type engineType)
QTD_EXTERN QTD_EXPORT void qtd_QGL_setPreferredPaintEngine_Type
(int engineType0)
{
    QPaintEngine::Type __qt_engineType0 = (QPaintEngine::Type) engineType0;
    QGL::setPreferredPaintEngine((QPaintEngine::Type )__qt_engineType0);

}

// ---externC---end
// Field accessors


