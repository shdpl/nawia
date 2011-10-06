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

#include <qgl.h>
#include <qglcolormap.h>
#include <qgl.h>
#include <qgl.h>
#include <qglframebufferobject.h>
#include <qglpixelbuffer.h>
#include <qgl.h>

void destructor_qt_opengl_QGLContext(void *ptr)
{
    delete reinterpret_cast<QGLContext *>(ptr);
}

void destructor_qt_opengl_QGLFramebufferObject(void *ptr)
{
    delete reinterpret_cast<QGLFramebufferObject *>(ptr);
}

void destructor_qt_opengl_QGLPixelBuffer(void *ptr)
{
    delete reinterpret_cast<QGLPixelBuffer *>(ptr);
}

static int sns_count = 2;
static const char *qtNames[] = {
    "QGLWidget::updateGL()",
    "QGLWidget::updateOverlayGL()",
};

static const char *javaFunctionNames[] = {
    "qt.opengl.QGLWidget.updateGL()",
    "qt.opengl.QGLWidget.updateOverlayGL()",
};

static const char *javaObjectNames[] = {
    "qt.opengl.QGLWidget.updateGL()",
    "qt.opengl.QGLWidget.updateOverlayGL()",
};

static const char *javaSignatures[] = {
    "()V",
    "()V"
};

static int enum_count = 5;
static const char *enumJavaNames[] = {
    "qt/opengl/QGL$FormatOption",
    "qt/opengl/QGLFormat$OpenGLVersionFlag",
    "qt/opengl/QGLFramebufferObject$Attachment",
    "qt/opengl/QGLFormat$OpenGLVersionFlag",
    "qt/opengl/QGL$FormatOption",
};

static const char *enumCppNames[] = {
    "QGL::FormatOption",
    "QGLFormat::OpenGLVersionFlag",
    "QGLFramebufferObject::Attachment",
    "QGLFormat::OpenGLVersionFlags",
    "QGL::FormatOptions"
};

void __metainfo_init_qt_opengl()
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
    registerQtToJava("QGL", "qt/opengl/QGL");
    registerJavaToQt("qt/opengl/QGL", "QGL");
    registerQtToJava("QGLColormap", "qt/opengl/QGLColormap");
    registerJavaToQt("qt/opengl/QGLColormap", "QGLColormap");
    qRegisterMetaType<QGLColormap>("QGLColormap");
    registerQtToJava("QGLContext", "qt/opengl/QGLContext");
    registerJavaToQt("qt/opengl/QGLContext", "QGLContext");
    registerDestructor("qt/opengl/QGLContext", destructor_qt_opengl_QGLContext);
    registerQtToJava("QGLFormat", "qt/opengl/QGLFormat");
    registerJavaToQt("qt/opengl/QGLFormat", "QGLFormat");
    qRegisterMetaType<QGLFormat>("QGLFormat");
    registerQtToJava("QGLFramebufferObject", "qt/opengl/QGLFramebufferObject");
    registerJavaToQt("qt/opengl/QGLFramebufferObject", "QGLFramebufferObject");
    registerDestructor("qt/opengl/QGLFramebufferObject", destructor_qt_opengl_QGLFramebufferObject);
    registerQtToJava("QGLPixelBuffer", "qt/opengl/QGLPixelBuffer");
    registerJavaToQt("qt/opengl/QGLPixelBuffer", "QGLPixelBuffer");
    registerDestructor("qt/opengl/QGLPixelBuffer", destructor_qt_opengl_QGLPixelBuffer);
    registerQtToJava("QGLWidget", "qt/opengl/QGLWidget");
    registerJavaToQt("qt/opengl/QGLWidget", "QGLWidget");
}

