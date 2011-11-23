#include <QVariant>
#include <qdatastream.h>

#include <iostream>
#include <qmetatype.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT int qtd_QMetaType_registerType(char* namePtr, VoidFunc dtor, VoidFunc ctor)
{
    return QMetaType::registerType(namePtr, (QMetaType::Destructor)dtor, (QMetaType::Constructor)ctor);
}

QTD_EXTERN QTD_EXPORT void qtd_QMetaType_registerStreamOperators(const char *typeName, VoidFunc saveOp,
    VoidFunc loadOp)
{
    QMetaType::registerStreamOperators(typeName, (QMetaType::SaveOperator)saveOp,
        (QMetaType::LoadOperator)loadOp);
}


// ---externC---
// QMetaType::construct(int type, const void * copy)
QTD_EXTERN QTD_EXPORT void* qtd_QMetaType_construct_int_nativepointervoid
(int type0,
 void* copy1)
{
    const void*  __qt_copy1 = (const void* ) copy1;
    void*  __qt_return_value = QMetaType::construct((int )type0, (const void* )__qt_copy1);

    void* __d_return_value = (void*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMetaType::destroy(int type, void * data)
QTD_EXTERN QTD_EXPORT void qtd_QMetaType_destroy_int_nativepointervoid
(int type0,
 void* data1)
{
    void*  __qt_data1 = (void* ) data1;
    QMetaType::destroy((int )type0, (void* )__qt_data1);

}

// QMetaType::isRegistered(int type)
QTD_EXTERN QTD_EXPORT bool qtd_QMetaType_isRegistered_int
(int type0)
{
    bool  __qt_return_value = QMetaType::isRegistered((int )type0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMetaType::load(QDataStream & stream, int type, void * data)
QTD_EXTERN QTD_EXPORT bool qtd_QMetaType_load_QDataStream_int_nativepointervoid
(void* stream0,
 int type1,
 void* data2)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    void*  __qt_data2 = (void* ) data2;
    bool  __qt_return_value = QMetaType::load((QDataStream& )__qt_stream0, (int )type1, (void* )__qt_data2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMetaType::registerTypedef(const char * typeName, int aliasId)
QTD_EXTERN QTD_EXPORT int qtd_QMetaType_registerTypedef_nativepointerchar_int
(char* typeName0,
 int aliasId1)
{
    const char*  __qt_typeName0 = (const char* ) typeName0;
    int  __qt_return_value = QMetaType::registerTypedef((const char* )__qt_typeName0, (int )aliasId1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMetaType::save(QDataStream & stream, int type, const void * data)
QTD_EXTERN QTD_EXPORT bool qtd_QMetaType_save_QDataStream_int_nativepointervoid
(void* stream0,
 int type1,
 void* data2)
{
    QDataStream&  __qt_stream0 = (QDataStream& ) * (QDataStream *) stream0;
    const void*  __qt_data2 = (const void* ) data2;
    bool  __qt_return_value = QMetaType::save((QDataStream& )__qt_stream0, (int )type1, (const void* )__qt_data2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMetaType::type(const char * typeName)
QTD_EXTERN QTD_EXPORT int qtd_QMetaType_type_nativepointerchar
(char* typeName0)
{
    const char*  __qt_typeName0 = (const char* ) typeName0;
    int  __qt_return_value = QMetaType::type((const char* )__qt_typeName0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMetaType::typeName(int type)
QTD_EXTERN QTD_EXPORT char* qtd_QMetaType_typeName_int
(int type0)
{
    const char*  __qt_return_value = QMetaType::typeName((int )type0);

    char* __d_return_value = (char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QMetaType::unregisterType(const char * typeName)
QTD_EXTERN QTD_EXPORT void qtd_QMetaType_unregisterType_nativepointerchar
(char* typeName0)
{
    const char*  __qt_typeName0 = (const char* ) typeName0;
    QMetaType::unregisterType((const char* )__qt_typeName0);

}

// ---externC---end
// Field accessors


