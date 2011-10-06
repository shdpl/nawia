/****************************************************************************
**
** This is a generated file, please don't touch.
**
****************************************************************************/

// stuff for passing D function pointers

#include "qtd_masterinclude.h"

#include "qtd_core.h"
#include "ArrayOps_qt_network.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOpsPrimitive.h"

QTD_FUNC(NETWORK, allocate_QNetworkAddressEntry_array)
QTD_FUNC(NETWORK, assign_QNetworkAddressEntry_array_element)
QTD_FUNC(NETWORK, get_QNetworkAddressEntry_from_array)

QTD_FUNC(NETWORK, allocate_QNetworkCookie_array)
QTD_FUNC(NETWORK, assign_QNetworkCookie_array_element)
QTD_FUNC(NETWORK, get_QNetworkCookie_from_array)

QTD_FUNC(NETWORK, allocate_QHostAddress_array)
QTD_FUNC(NETWORK, assign_QHostAddress_array_element)
QTD_FUNC(NETWORK, get_QHostAddress_from_array)

QTD_FUNC(NETWORK, allocate_QSslCipher_array)
QTD_FUNC(NETWORK, assign_QSslCipher_array_element)
QTD_FUNC(NETWORK, get_QSslCipher_from_array)

QTD_FUNC(NETWORK, allocate_QNetworkProxy_array)
QTD_FUNC(NETWORK, assign_QNetworkProxy_array_element)
QTD_FUNC(NETWORK, get_QNetworkProxy_from_array)

QTD_FUNC(NETWORK, allocate_QSslError_array)
QTD_FUNC(NETWORK, assign_QSslError_array_element)
QTD_FUNC(NETWORK, get_QSslError_from_array)

QTD_FUNC(NETWORK, allocate_QNetworkInterface_array)
QTD_FUNC(NETWORK, assign_QNetworkInterface_array_element)
QTD_FUNC(NETWORK, get_QNetworkInterface_from_array)

QTD_FUNC(NETWORK, allocate_QSslCertificate_array)
QTD_FUNC(NETWORK, assign_QSslCertificate_array_element)
QTD_FUNC(NETWORK, get_QSslCertificate_from_array)

// signal conversion functions
// QSslError
QTD_EXTERN QTD_EXPORT void qtd_qt_network_QSslError_fromcpp_QList(void *cpp_ptr, DArray* __d_container) {
const QList<QSslError >& container = (*reinterpret_cast< const QList<QSslError > (*)>(cpp_ptr));
QList<QSslError > &__d_container_tmp = (*(QList<QSslError > *)__d_container);
__d_container_tmp = container;
}
