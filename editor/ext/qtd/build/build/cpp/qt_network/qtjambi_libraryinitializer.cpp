#include "metainfo.h"
#include "qtjambi_global.h"

QTD_EXTERN QTD_EXPORT void __qt_initLibrary(JNIEnv *, jclass)
{
    __metainfo_init_qt_network();
}

