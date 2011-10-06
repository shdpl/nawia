module qt.gui.QFontDatabase;

public import qt.gui.QFontDatabase_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.gui.QFont;
public import qt.gui.QFontInfo;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontDatabase : QtdObject
{
    public enum WritingSystem {
        Any = 0,
        Latin = 1,
        Greek = 2,
        Cyrillic = 3,
        Armenian = 4,
        Hebrew = 5,
        Arabic = 6,
        Syriac = 7,
        Thaana = 8,
        Devanagari = 9,
        Bengali = 10,
        Gurmukhi = 11,
        Gujarati = 12,
        Oriya = 13,
        Tamil = 14,
        Telugu = 15,
        Kannada = 16,
        Malayalam = 17,
        Sinhala = 18,
        Thai = 19,
        Lao = 20,
        Tibetan = 21,
        Myanmar = 22,
        Georgian = 23,
        Khmer = 24,
        SimplifiedChinese = 25,
        TraditionalChinese = 26,
        Japanese = 27,
        Korean = 28,
        Vietnamese = 29,
        Symbol = 30,
        Ogham = 31,
        Runic = 32,
        Nko = 33,
        WritingSystemsCount = 34
    }

    alias WritingSystem.Any Any;
    alias WritingSystem.Latin Latin;
    alias WritingSystem.Greek Greek;
    alias WritingSystem.Cyrillic Cyrillic;
    alias WritingSystem.Armenian Armenian;
    alias WritingSystem.Hebrew Hebrew;
    alias WritingSystem.Arabic Arabic;
    alias WritingSystem.Syriac Syriac;
    alias WritingSystem.Thaana Thaana;
    alias WritingSystem.Devanagari Devanagari;
    alias WritingSystem.Bengali Bengali;
    alias WritingSystem.Gurmukhi Gurmukhi;
    alias WritingSystem.Gujarati Gujarati;
    alias WritingSystem.Oriya Oriya;
    alias WritingSystem.Tamil Tamil;
    alias WritingSystem.Telugu Telugu;
    alias WritingSystem.Kannada Kannada;
    alias WritingSystem.Malayalam Malayalam;
    alias WritingSystem.Sinhala Sinhala;
    alias WritingSystem.Thai Thai;
    alias WritingSystem.Lao Lao;
    alias WritingSystem.Tibetan Tibetan;
    alias WritingSystem.Myanmar Myanmar;
    alias WritingSystem.Georgian Georgian;
    alias WritingSystem.Khmer Khmer;
    alias WritingSystem.SimplifiedChinese SimplifiedChinese;
    alias WritingSystem.TraditionalChinese TraditionalChinese;
    alias WritingSystem.Japanese Japanese;
    alias WritingSystem.Korean Korean;
    alias WritingSystem.Vietnamese Vietnamese;
    alias WritingSystem.Symbol Symbol;
    alias WritingSystem.Ogham Ogham;
    alias WritingSystem.Runic Runic;
    alias WritingSystem.Nko Nko;
    alias WritingSystem.WritingSystemsCount WritingSystemsCount;


// Functions

    public this() {
        void* ret = qtd_QFontDatabase_QFontDatabase();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool bold(string family, string style) const {
        return qtd_QFontDatabase_bold_string_string_const(qtdNativeId, family, style);
    }

    public final QList!(string) families(QFontDatabase.WritingSystem writingSystem = QFontDatabase.WritingSystem.Any) const {
        auto res = QList!(string).opCall();
        qtd_QFontDatabase_families_WritingSystem_const(qtdNativeId, &res, writingSystem);
        return res;
    }

    public final QFont font(string family, string style, int pointSize) const {
        void* ret = qtd_QFontDatabase_font_string_string_int_const(qtdNativeId, family, style, pointSize);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final bool isBitmapScalable(string family, string style = "") const {
        return qtd_QFontDatabase_isBitmapScalable_string_string_const(qtdNativeId, family, style);
    }

    public final bool isFixedPitch(string family, string style = "") const {
        return qtd_QFontDatabase_isFixedPitch_string_string_const(qtdNativeId, family, style);
    }

    public final bool isScalable(string family, string style = "") const {
        return qtd_QFontDatabase_isScalable_string_string_const(qtdNativeId, family, style);
    }

    public final bool isSmoothlyScalable(string family, string style = "") const {
        return qtd_QFontDatabase_isSmoothlyScalable_string_string_const(qtdNativeId, family, style);
    }

    public final bool italic(string family, string style) const {
        return qtd_QFontDatabase_italic_string_string_const(qtdNativeId, family, style);
    }

    public final QList!(int) pointSizes(string family, string style = "") {
        auto res = QList!(int).opCall();
        qtd_QFontDatabase_pointSizes_string_string(qtdNativeId, &res, family, style);
        return res;
    }

    public final QList!(int) smoothSizes(string family, string style) {
        auto res = QList!(int).opCall();
        qtd_QFontDatabase_smoothSizes_string_string(qtdNativeId, &res, family, style);
        return res;
    }

    public final string styleString(const(QFont) font) {
        string res;
        qtd_QFontDatabase_styleString_QFont(qtdNativeId, &res, font is null ? null : (cast(QFont)font).qtdNativeId);
        return res;
    }

    public final string styleString(const(QFontInfo) fontInfo) {
        string res;
        qtd_QFontDatabase_styleString_QFontInfo(qtdNativeId, &res, fontInfo is null ? null : (cast(QFontInfo)fontInfo).qtdNativeId);
        return res;
    }

    public final QList!(string) styles(string family) const {
        auto res = QList!(string).opCall();
        qtd_QFontDatabase_styles_string_const(qtdNativeId, &res, family);
        return res;
    }

    public final int weight(string family, string style) const {
        return qtd_QFontDatabase_weight_string_string_const(qtdNativeId, family, style);
    }

    public final QList!(QFontDatabase.WritingSystem) writingSystems() const {
        auto res = QList!(QFontDatabase.WritingSystem).opCall();
        qtd_QFontDatabase_writingSystems_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QFontDatabase.WritingSystem) writingSystems(string family) const {
        auto res = QList!(QFontDatabase.WritingSystem).opCall();
        qtd_QFontDatabase_writingSystems_string_const(qtdNativeId, &res, family);
        return res;
    }

    public static int addApplicationFont(string fileName) {
        return qtd_QFontDatabase_addApplicationFont_string(fileName);
    }

    public static int addApplicationFontFromData(const(QByteArray) fontData) {
        return qtd_QFontDatabase_addApplicationFontFromData_QByteArray(fontData is null ? null : (cast(QByteArray)fontData).qtdNativeId);
    }

    public static QList!(string) applicationFontFamilies(int id) {
        auto res = QList!(string).opCall();
        qtd_QFontDatabase_applicationFontFamilies_int(&res, id);
        return res;
    }

    public static bool removeAllApplicationFonts() {
        return qtd_QFontDatabase_removeAllApplicationFonts();
    }

    public static bool removeApplicationFont(int id) {
        return qtd_QFontDatabase_removeApplicationFont_int(id);
    }

    public static QList!(int) standardSizes() {
        auto res = QList!(int).opCall();
        qtd_QFontDatabase_standardSizes(&res);
        return res;
    }

    public static bool supportsThreadedFontRendering() {
        return qtd_QFontDatabase_supportsThreadedFontRendering();
    }

    public static string writingSystemName(QFontDatabase.WritingSystem writingSystem) {
        string res;
        qtd_QFontDatabase_writingSystemName_WritingSystem(&res, writingSystem);
        return res;
    }

    public static string writingSystemSample(QFontDatabase.WritingSystem writingSystem) {
        string res;
        qtd_QFontDatabase_writingSystemSample_WritingSystem(&res, writingSystem);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFontDatabase;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFontDatabase_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFontDatabase_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFontDatabase_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFontDatabase_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFontDatabase_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFontDatabase_QTypeInfo_isComplex();
        isStatic = qtd_QFontDatabase_QTypeInfo_isStatic();
        isLarge = qtd_QFontDatabase_QTypeInfo_isLarge();
        isPointer = qtd_QFontDatabase_QTypeInfo_isPointer();
        isDummy = qtd_QFontDatabase_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QFontDatabase_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFontDatabase_native_copy(const void* orig);
extern (C) void qtd_QFontDatabase_delete(void *ptr);
extern (C) void qtd_QFontDatabase_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFontDatabase_QFontDatabase();
private extern(C) bool  qtd_QFontDatabase_bold_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) void  qtd_QFontDatabase_families_WritingSystem_const(void* __this_nativeId,
 void* __d_return_value,
 int writingSystem0);
private extern(C) void*  qtd_QFontDatabase_font_string_string_int_const(void* __this_nativeId,
 string family0,
 string style1,
 int pointSize2);
private extern(C) bool  qtd_QFontDatabase_isBitmapScalable_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) bool  qtd_QFontDatabase_isFixedPitch_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) bool  qtd_QFontDatabase_isScalable_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) bool  qtd_QFontDatabase_isSmoothlyScalable_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) bool  qtd_QFontDatabase_italic_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) void  qtd_QFontDatabase_pointSizes_string_string(void* __this_nativeId,
 void* __d_return_value,
 string family0,
 string style1);
private extern(C) void  qtd_QFontDatabase_smoothSizes_string_string(void* __this_nativeId,
 void* __d_return_value,
 string family0,
 string style1);
private extern(C) void  qtd_QFontDatabase_styleString_QFont(void* __this_nativeId,
 void* __d_return_value,
 void* font0);
private extern(C) void  qtd_QFontDatabase_styleString_QFontInfo(void* __this_nativeId,
 void* __d_return_value,
 void* fontInfo0);
private extern(C) void  qtd_QFontDatabase_styles_string_const(void* __this_nativeId,
 void* __d_return_value,
 string family0);
private extern(C) int  qtd_QFontDatabase_weight_string_string_const(void* __this_nativeId,
 string family0,
 string style1);
private extern(C) void  qtd_QFontDatabase_writingSystems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFontDatabase_writingSystems_string_const(void* __this_nativeId,
 void* __d_return_value,
 string family0);
private extern(C) int  qtd_QFontDatabase_addApplicationFont_string(string fileName0);
private extern(C) int  qtd_QFontDatabase_addApplicationFontFromData_QByteArray(void* fontData0);
private extern(C) void  qtd_QFontDatabase_applicationFontFamilies_int(void* __d_return_value,
 int id0);
private extern(C) bool  qtd_QFontDatabase_removeAllApplicationFonts();
private extern(C) bool  qtd_QFontDatabase_removeApplicationFont_int(int id0);
private extern(C) void  qtd_QFontDatabase_standardSizes(void* __d_return_value);
private extern(C) bool  qtd_QFontDatabase_supportsThreadedFontRendering();
private extern(C) void  qtd_QFontDatabase_writingSystemName_WritingSystem(void* __d_return_value,
 int writingSystem0);
private extern(C) void  qtd_QFontDatabase_writingSystemSample_WritingSystem(void* __d_return_value,
 int writingSystem0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFontDatabase() {
    QFontDatabase.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFontDatabase_QTypeInfo_isComplex();
private extern (C) bool qtd_QFontDatabase_QTypeInfo_isStatic();
private extern (C) bool qtd_QFontDatabase_QTypeInfo_isLarge();
private extern (C) bool qtd_QFontDatabase_QTypeInfo_isPointer();
private extern (C) bool qtd_QFontDatabase_QTypeInfo_isDummy();
