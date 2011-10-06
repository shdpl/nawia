#include "metainfo.h"
#include <QMetaType>
#include <QString>
#include <QLatin1String>
#include <QHash>
#include <QReadWriteLock>
#include <QReadLocker>
#include <QWriteLocker>
#include <qtjambi_cache.h>
#include <qtjambi_core.h>

#include <qgraphicssvgitem.h>
#include <qsvggenerator.h>
#include <qsvgrenderer.h>
#include <qsvgwidget.h>

void destructor_qt_svg_QSvgGenerator(void *ptr)
{
    delete reinterpret_cast<QSvgGenerator *>(ptr);
}

static int sns_count = 10;
static const char *qtNames[] = {
    "QSvgRenderer::load(QXmlStreamReader*)",
    "QSvgRenderer::load(QByteArray)",
    "QSvgRenderer::load(QString)",
    "QSvgRenderer::render(QPainter*)",
    "QSvgRenderer::render(QPainter*,QRectF)",
    "QSvgRenderer::render(QPainter*,QString,QRectF)",
    "QSvgRenderer::render(QPainter*,QString)",
    "QSvgRenderer::repaintNeeded()",
    "QSvgWidget::load(QByteArray)",
    "QSvgWidget::load(QString)",
};

static const char *javaFunctionNames[] = {
    "qt.svg.QSvgRenderer.load(QXmlStreamReader)",
    "qt.svg.QSvgRenderer.load(const(QByteArray))",
    "qt.svg.QSvgRenderer.load(string)",
    "qt.svg.QSvgRenderer.render(QPainter)",
    "qt.svg.QSvgRenderer.render(QPainter, const(QRectF))",
    "qt.svg.QSvgRenderer.render(QPainter, string, const(QRectF) = QRectF())",
    "qt.svg.QSvgRenderer.render(QPainter, string)",
    "qt.svg.QSvgRenderer.repaintNeeded()",
    "qt.svg.QSvgWidget.load(const(QByteArray))",
    "qt.svg.QSvgWidget.load(string)",
};

static const char *javaObjectNames[] = {
    "qt.svg.QSvgRenderer.load(QXmlStreamReader)",
    "qt.svg.QSvgRenderer.load(const(QByteArray))",
    "qt.svg.QSvgRenderer.load(string)",
    "qt.svg.QSvgRenderer.render(QPainter)",
    "qt.svg.QSvgRenderer.render(QPainter, const(QRectF))",
    "qt.svg.QSvgRenderer.render(QPainter, string, const(QRectF) = QRectF())",
    "qt.svg.QSvgRenderer.render(QPainter, string)",
    "qt.svg.QSvgRenderer.repaintNeeded",
    "qt.svg.QSvgWidget.load(const(QByteArray))",
    "qt.svg.QSvgWidget.load(string)",
};

static const char *javaSignatures[] = {
    "(Lqt/xml/QXmlStreamReader;)Lbool;",
    "(Lqt/core/QByteArray;)Lbool;",
    "(Ljava/lang/string;)Lbool;",
    "(Lqt/gui/QPainter;)V",
    "(Lqt/gui/QPainter;Lqt/core/QRectF;)V",
    "(Lqt/gui/QPainter;Ljava/lang/string;Lqt/core/QRectF;)V",
    "(Lqt/gui/QPainter;Ljava/lang/string;)V",
    "()V",
    "(Lqt/core/QByteArray;)V",
    "(Ljava/lang/string;)V"
};

static int enum_count = 1;
static const char *enumJavaNames[] = {
    "qt/svg/QGraphicsSvgItem$enum_1",
};

static const char *enumCppNames[] = {
    "QGraphicsSvgItem::enum_1"
};

void __metainfo_init_qt_svg()
{
    registerQtToJava("unsigned char", "ubyte");
    registerQtToJava("int", "int");
    registerJavaToQt("int", "int");
    registerQtToJava("QString", "java/lang/string");
    registerJavaToQt("java/lang/string", "QString");
    registerQtToJava("QStringRef", "java/lang/string");
    registerQtToJava("QLatin1String", "java/lang/string");
    registerQtToJava("GLint", "int");
    registerQtToJava("ulong", "ulong");
    registerQtToJava("QBool", "bool");
    registerQtToJava("QChar", "char");
    registerJavaToQt("char", "QChar");
    registerQtToJava("signed char", "byte");
    registerQtToJava("float", "float");
    registerJavaToQt("float", "float");
    registerQtToJava("double", "double");
    registerJavaToQt("double", "double");
    registerQtToJava("signed int", "int");
    registerQtToJava("unsigned int", "uint");
    registerQtToJava("Qt::HANDLE", "long");
    registerQtToJava("size_t", "size_t");
    registerJavaToQt("size_t", "size_t");
    qRegisterMetaType<size_t>("size_t");
    registerQtToJava("long", "int");
    registerQtToJava("quintptr", "quintptr");
    registerQtToJava("bool", "bool");
    registerJavaToQt("bool", "bool");
    registerQtToJava("qint64", "long");
    registerQtToJava("signed long", "int");
    registerQtToJava("unsigned short", "ushort");
    registerQtToJava("char", "char");
    registerJavaToQt("char", "char");
    registerQtToJava("unsigned __int64", "long");
    registerQtToJava("short", "short");
    registerJavaToQt("short", "short");
    registerQtToJava("QXmlStreamStringRef", "java/lang/string");
    registerQtToJava("uint", "uint");
    registerJavaToQt("uint", "uint");
    registerQtToJava("WId", "long");
    registerQtToJava("unsigned long long", "ulong");
    registerQtToJava("QLatin1Char", "char");
    registerQtToJava("jobject", "java.lang.Object");
    registerJavaToQt("java.lang.Object", "jobject");
    qRegisterMetaType<jobject>("jobject");
    registerQtToJava("__int64", "long");
    registerQtToJava("QVariant", "QVariant");
    registerJavaToQt("QVariant", "QVariant");
    registerQtToJava("GLenum", "int");
    registerQtToJava("QByteRef", "byte");
    registerQtToJava("unsigned long", "uint");
    registerQtToJava("signed short", "short");
    registerQtToJava("GLuint", "int");
    registerQtToJava("QBitRef", "bool");
    for (int i=0;i<sns_count; ++i) {
        registerQtToJava(qtNames[i], javaFunctionNames[i]);
        if (getQtName(javaObjectNames[i]).length() < QByteArray(qtNames[i]).size())
            registerJavaToQt(javaObjectNames[i], qtNames[i]);
        registerJavaSignature(qtNames[i], javaSignatures[i]);
    }
    for (int i=0;i<enum_count; ++i) {
        registerQtToJava(enumCppNames[i], enumJavaNames[i]);
        registerJavaToQt(enumJavaNames[i], enumCppNames[i]);
    }
    registerDeletionPolicy("qt/svg/QGraphicsSvgItem", DeletionPolicyDeleteInMainThread);
    registerQtToJava("QGraphicsSvgItem", "qt/svg/QGraphicsSvgItem");
    registerJavaToQt("qt/svg/QGraphicsSvgItem", "QGraphicsSvgItem");
    registerQtToJava("QSvgGenerator", "qt/svg/QSvgGenerator");
    registerJavaToQt("qt/svg/QSvgGenerator", "QSvgGenerator");
    registerDestructor("qt/svg/QSvgGenerator", destructor_qt_svg_QSvgGenerator);
    registerQtToJava("QSvgRenderer", "qt/svg/QSvgRenderer");
    registerJavaToQt("qt/svg/QSvgRenderer", "QSvgRenderer");
    registerQtToJava("QSvgWidget", "qt/svg/QSvgWidget");
    registerJavaToQt("qt/svg/QSvgWidget", "QSvgWidget");
}

