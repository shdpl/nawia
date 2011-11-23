module qt.core.QLocale;

public import qt.core.QLocale_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QList;
public import qt.core.QDate;
public import qt.core.QDateTime;
public import qt.core.QTime;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLocale : QtdObject
{
    public enum MeasurementSystem {
        MetricSystem = 0,
        ImperialSystem = 1
    }

    alias MeasurementSystem.MetricSystem MetricSystem;
    alias MeasurementSystem.ImperialSystem ImperialSystem;

    public enum NumberOption {
        OmitGroupSeparator = 1,
        RejectGroupSeparator = 2
    }

    alias NumberOption.OmitGroupSeparator OmitGroupSeparator;
    alias NumberOption.RejectGroupSeparator RejectGroupSeparator;

    public enum FormatType {
        LongFormat = 0,
        ShortFormat = 1,
        NarrowFormat = 2
    }

    alias FormatType.LongFormat LongFormat;
    alias FormatType.ShortFormat ShortFormat;
    alias FormatType.NarrowFormat NarrowFormat;

    public enum Country {
        AnyCountry = 0,
        Afghanistan = 1,
        Albania = 2,
        Algeria = 3,
        AmericanSamoa = 4,
        Andorra = 5,
        Angola = 6,
        Anguilla = 7,
        Antarctica = 8,
        AntiguaAndBarbuda = 9,
        Argentina = 10,
        Armenia = 11,
        Aruba = 12,
        Australia = 13,
        Austria = 14,
        Azerbaijan = 15,
        Bahamas = 16,
        Bahrain = 17,
        Bangladesh = 18,
        Barbados = 19,
        Belarus = 20,
        Belgium = 21,
        Belize = 22,
        Benin = 23,
        Bermuda = 24,
        Bhutan = 25,
        Bolivia = 26,
        BosniaAndHerzegowina = 27,
        Botswana = 28,
        BouvetIsland = 29,
        Brazil = 30,
        BritishIndianOceanTerritory = 31,
        BruneiDarussalam = 32,
        Bulgaria = 33,
        BurkinaFaso = 34,
        Burundi = 35,
        Cambodia = 36,
        Cameroon = 37,
        Canada = 38,
        CapeVerde = 39,
        CaymanIslands = 40,
        CentralAfricanRepublic = 41,
        Chad = 42,
        Chile = 43,
        China = 44,
        ChristmasIsland = 45,
        CocosIslands = 46,
        Colombia = 47,
        Comoros = 48,
        DemocraticRepublicOfCongo = 49,
        PeoplesRepublicOfCongo = 50,
        CookIslands = 51,
        CostaRica = 52,
        IvoryCoast = 53,
        Croatia = 54,
        Cuba = 55,
        Cyprus = 56,
        CzechRepublic = 57,
        Denmark = 58,
        Djibouti = 59,
        Dominica = 60,
        DominicanRepublic = 61,
        EastTimor = 62,
        Ecuador = 63,
        Egypt = 64,
        ElSalvador = 65,
        EquatorialGuinea = 66,
        Eritrea = 67,
        Estonia = 68,
        Ethiopia = 69,
        FalklandIslands = 70,
        FaroeIslands = 71,
        FijiCountry = 72,
        Finland = 73,
        France = 74,
        MetropolitanFrance = 75,
        FrenchGuiana = 76,
        FrenchPolynesia = 77,
        FrenchSouthernTerritories = 78,
        Gabon = 79,
        Gambia = 80,
        Georgia = 81,
        Germany = 82,
        Ghana = 83,
        Gibraltar = 84,
        Greece = 85,
        Greenland = 86,
        Grenada = 87,
        Guadeloupe = 88,
        Guam = 89,
        Guatemala = 90,
        Guinea = 91,
        GuineaBissau = 92,
        Guyana = 93,
        Haiti = 94,
        HeardAndMcDonaldIslands = 95,
        Honduras = 96,
        HongKong = 97,
        Hungary = 98,
        Iceland = 99,
        India = 100,
        Indonesia = 101,
        Iran = 102,
        Iraq = 103,
        Ireland = 104,
        Israel = 105,
        Italy = 106,
        Jamaica = 107,
        Japan = 108,
        Jordan = 109,
        Kazakhstan = 110,
        Kenya = 111,
        Kiribati = 112,
        DemocraticRepublicOfKorea = 113,
        RepublicOfKorea = 114,
        Kuwait = 115,
        Kyrgyzstan = 116,
        Lao = 117,
        Latvia = 118,
        Lebanon = 119,
        Lesotho = 120,
        Liberia = 121,
        LibyanArabJamahiriya = 122,
        Liechtenstein = 123,
        Lithuania = 124,
        Luxembourg = 125,
        Macau = 126,
        Macedonia = 127,
        Madagascar = 128,
        Malawi = 129,
        Malaysia = 130,
        Maldives = 131,
        Mali = 132,
        Malta = 133,
        MarshallIslands = 134,
        Martinique = 135,
        Mauritania = 136,
        Mauritius = 137,
        Mayotte = 138,
        Mexico = 139,
        Micronesia = 140,
        Moldova = 141,
        Monaco = 142,
        Mongolia = 143,
        Montserrat = 144,
        Morocco = 145,
        Mozambique = 146,
        Myanmar = 147,
        Namibia = 148,
        NauruCountry = 149,
        Nepal = 150,
        Netherlands = 151,
        NetherlandsAntilles = 152,
        NewCaledonia = 153,
        NewZealand = 154,
        Nicaragua = 155,
        Niger = 156,
        Nigeria = 157,
        Niue = 158,
        NorfolkIsland = 159,
        NorthernMarianaIslands = 160,
        Norway = 161,
        Oman = 162,
        Pakistan = 163,
        Palau = 164,
        PalestinianTerritory = 165,
        Panama = 166,
        PapuaNewGuinea = 167,
        Paraguay = 168,
        Peru = 169,
        Philippines = 170,
        Pitcairn = 171,
        Poland = 172,
        Portugal = 173,
        PuertoRico = 174,
        Qatar = 175,
        Reunion = 176,
        Romania = 177,
        RussianFederation = 178,
        Rwanda = 179,
        SaintKittsAndNevis = 180,
        StLucia = 181,
        StVincentAndTheGrenadines = 182,
        Samoa = 183,
        SanMarino = 184,
        SaoTomeAndPrincipe = 185,
        SaudiArabia = 186,
        Senegal = 187,
        Seychelles = 188,
        SierraLeone = 189,
        Singapore = 190,
        Slovakia = 191,
        Slovenia = 192,
        SolomonIslands = 193,
        Somalia = 194,
        SouthAfrica = 195,
        SouthGeorgiaAndTheSouthSandwichIslands = 196,
        Spain = 197,
        SriLanka = 198,
        StHelena = 199,
        StPierreAndMiquelon = 200,
        Sudan = 201,
        Suriname = 202,
        SvalbardAndJanMayenIslands = 203,
        Swaziland = 204,
        Sweden = 205,
        Switzerland = 206,
        SyrianArabRepublic = 207,
        Taiwan = 208,
        Tajikistan = 209,
        Tanzania = 210,
        Thailand = 211,
        Togo = 212,
        Tokelau = 213,
        TongaCountry = 214,
        TrinidadAndTobago = 215,
        Tunisia = 216,
        Turkey = 217,
        Turkmenistan = 218,
        TurksAndCaicosIslands = 219,
        Tuvalu = 220,
        Uganda = 221,
        Ukraine = 222,
        UnitedArabEmirates = 223,
        UnitedKingdom = 224,
        UnitedStates = 225,
        UnitedStatesMinorOutlyingIslands = 226,
        Uruguay = 227,
        Uzbekistan = 228,
        Vanuatu = 229,
        VaticanCityState = 230,
        Venezuela = 231,
        VietNam = 232,
        BritishVirginIslands = 233,
        USVirginIslands = 234,
        WallisAndFutunaIslands = 235,
        WesternSahara = 236,
        Yemen = 237,
        Yugoslavia = 238,
        Zambia = 239,
        Zimbabwe = 240,
        SerbiaAndMontenegro = 241,
        Montenegro = 242,
        Serbia = 243,
        SaintBarthelemy = 244,
        SaintMartin = 245,
        LatinAmericaAndTheCaribbean = 246
    }

    alias Country.AnyCountry AnyCountry;
    alias Country.Afghanistan Afghanistan;
    alias Country.Albania Albania;
    alias Country.Algeria Algeria;
    alias Country.AmericanSamoa AmericanSamoa;
    alias Country.Andorra Andorra;
    alias Country.Angola Angola;
    alias Country.Anguilla Anguilla;
    alias Country.Antarctica Antarctica;
    alias Country.AntiguaAndBarbuda AntiguaAndBarbuda;
    alias Country.Argentina Argentina;
    alias Country.Armenia Armenia;
    alias Country.Aruba Aruba;
    alias Country.Australia Australia;
    alias Country.Austria Austria;
    alias Country.Azerbaijan Azerbaijan;
    alias Country.Bahamas Bahamas;
    alias Country.Bahrain Bahrain;
    alias Country.Bangladesh Bangladesh;
    alias Country.Barbados Barbados;
    alias Country.Belarus Belarus;
    alias Country.Belgium Belgium;
    alias Country.Belize Belize;
    alias Country.Benin Benin;
    alias Country.Bermuda Bermuda;
    alias Country.Bhutan Bhutan;
    alias Country.Bolivia Bolivia;
    alias Country.BosniaAndHerzegowina BosniaAndHerzegowina;
    alias Country.Botswana Botswana;
    alias Country.BouvetIsland BouvetIsland;
    alias Country.Brazil Brazil;
    alias Country.BritishIndianOceanTerritory BritishIndianOceanTerritory;
    alias Country.BruneiDarussalam BruneiDarussalam;
    alias Country.Bulgaria Bulgaria;
    alias Country.BurkinaFaso BurkinaFaso;
    alias Country.Burundi Burundi;
    alias Country.Cambodia Cambodia;
    alias Country.Cameroon Cameroon;
    alias Country.Canada Canada;
    alias Country.CapeVerde CapeVerde;
    alias Country.CaymanIslands CaymanIslands;
    alias Country.CentralAfricanRepublic CentralAfricanRepublic;
    alias Country.Chad Chad;
    alias Country.Chile Chile;
    alias Country.China China;
    alias Country.ChristmasIsland ChristmasIsland;
    alias Country.CocosIslands CocosIslands;
    alias Country.Colombia Colombia;
    alias Country.Comoros Comoros;
    alias Country.DemocraticRepublicOfCongo DemocraticRepublicOfCongo;
    alias Country.PeoplesRepublicOfCongo PeoplesRepublicOfCongo;
    alias Country.CookIslands CookIslands;
    alias Country.CostaRica CostaRica;
    alias Country.IvoryCoast IvoryCoast;
    alias Country.Croatia Croatia;
    alias Country.Cuba Cuba;
    alias Country.Cyprus Cyprus;
    alias Country.CzechRepublic CzechRepublic;
    alias Country.Denmark Denmark;
    alias Country.Djibouti Djibouti;
    alias Country.Dominica Dominica;
    alias Country.DominicanRepublic DominicanRepublic;
    alias Country.EastTimor EastTimor;
    alias Country.Ecuador Ecuador;
    alias Country.Egypt Egypt;
    alias Country.ElSalvador ElSalvador;
    alias Country.EquatorialGuinea EquatorialGuinea;
    alias Country.Eritrea Eritrea;
    alias Country.Estonia Estonia;
    alias Country.Ethiopia Ethiopia;
    alias Country.FalklandIslands FalklandIslands;
    alias Country.FaroeIslands FaroeIslands;
    alias Country.FijiCountry FijiCountry;
    alias Country.Finland Finland;
    alias Country.France France;
    alias Country.MetropolitanFrance MetropolitanFrance;
    alias Country.FrenchGuiana FrenchGuiana;
    alias Country.FrenchPolynesia FrenchPolynesia;
    alias Country.FrenchSouthernTerritories FrenchSouthernTerritories;
    alias Country.Gabon Gabon;
    alias Country.Gambia Gambia;
    alias Country.Georgia Georgia;
    alias Country.Germany Germany;
    alias Country.Ghana Ghana;
    alias Country.Gibraltar Gibraltar;
    alias Country.Greece Greece;
    alias Country.Greenland Greenland;
    alias Country.Grenada Grenada;
    alias Country.Guadeloupe Guadeloupe;
    alias Country.Guam Guam;
    alias Country.Guatemala Guatemala;
    alias Country.Guinea Guinea;
    alias Country.GuineaBissau GuineaBissau;
    alias Country.Guyana Guyana;
    alias Country.Haiti Haiti;
    alias Country.HeardAndMcDonaldIslands HeardAndMcDonaldIslands;
    alias Country.Honduras Honduras;
    alias Country.HongKong HongKong;
    alias Country.Hungary Hungary;
    alias Country.Iceland Iceland;
    alias Country.India India;
    alias Country.Indonesia Indonesia;
    alias Country.Iran Iran;
    alias Country.Iraq Iraq;
    alias Country.Ireland Ireland;
    alias Country.Israel Israel;
    alias Country.Italy Italy;
    alias Country.Jamaica Jamaica;
    alias Country.Japan Japan;
    alias Country.Jordan Jordan;
    alias Country.Kazakhstan Kazakhstan;
    alias Country.Kenya Kenya;
    alias Country.Kiribati Kiribati;
    alias Country.DemocraticRepublicOfKorea DemocraticRepublicOfKorea;
    alias Country.RepublicOfKorea RepublicOfKorea;
    alias Country.Kuwait Kuwait;
    alias Country.Kyrgyzstan Kyrgyzstan;
    alias Country.Lao Lao;
    alias Country.Latvia Latvia;
    alias Country.Lebanon Lebanon;
    alias Country.Lesotho Lesotho;
    alias Country.Liberia Liberia;
    alias Country.LibyanArabJamahiriya LibyanArabJamahiriya;
    alias Country.Liechtenstein Liechtenstein;
    alias Country.Lithuania Lithuania;
    alias Country.Luxembourg Luxembourg;
    alias Country.Macau Macau;
    alias Country.Macedonia Macedonia;
    alias Country.Madagascar Madagascar;
    alias Country.Malawi Malawi;
    alias Country.Malaysia Malaysia;
    alias Country.Maldives Maldives;
    alias Country.Mali Mali;
    alias Country.Malta Malta;
    alias Country.MarshallIslands MarshallIslands;
    alias Country.Martinique Martinique;
    alias Country.Mauritania Mauritania;
    alias Country.Mauritius Mauritius;
    alias Country.Mayotte Mayotte;
    alias Country.Mexico Mexico;
    alias Country.Micronesia Micronesia;
    alias Country.Moldova Moldova;
    alias Country.Monaco Monaco;
    alias Country.Mongolia Mongolia;
    alias Country.Montserrat Montserrat;
    alias Country.Morocco Morocco;
    alias Country.Mozambique Mozambique;
    alias Country.Myanmar Myanmar;
    alias Country.Namibia Namibia;
    alias Country.NauruCountry NauruCountry;
    alias Country.Nepal Nepal;
    alias Country.Netherlands Netherlands;
    alias Country.NetherlandsAntilles NetherlandsAntilles;
    alias Country.NewCaledonia NewCaledonia;
    alias Country.NewZealand NewZealand;
    alias Country.Nicaragua Nicaragua;
    alias Country.Niger Niger;
    alias Country.Nigeria Nigeria;
    alias Country.Niue Niue;
    alias Country.NorfolkIsland NorfolkIsland;
    alias Country.NorthernMarianaIslands NorthernMarianaIslands;
    alias Country.Norway Norway;
    alias Country.Oman Oman;
    alias Country.Pakistan Pakistan;
    alias Country.Palau Palau;
    alias Country.PalestinianTerritory PalestinianTerritory;
    alias Country.Panama Panama;
    alias Country.PapuaNewGuinea PapuaNewGuinea;
    alias Country.Paraguay Paraguay;
    alias Country.Peru Peru;
    alias Country.Philippines Philippines;
    alias Country.Pitcairn Pitcairn;
    alias Country.Poland Poland;
    alias Country.Portugal Portugal;
    alias Country.PuertoRico PuertoRico;
    alias Country.Qatar Qatar;
    alias Country.Reunion Reunion;
    alias Country.Romania Romania;
    alias Country.RussianFederation RussianFederation;
    alias Country.Rwanda Rwanda;
    alias Country.SaintKittsAndNevis SaintKittsAndNevis;
    alias Country.StLucia StLucia;
    alias Country.StVincentAndTheGrenadines StVincentAndTheGrenadines;
    alias Country.Samoa Samoa;
    alias Country.SanMarino SanMarino;
    alias Country.SaoTomeAndPrincipe SaoTomeAndPrincipe;
    alias Country.SaudiArabia SaudiArabia;
    alias Country.Senegal Senegal;
    alias Country.Seychelles Seychelles;
    alias Country.SierraLeone SierraLeone;
    alias Country.Singapore Singapore;
    alias Country.Slovakia Slovakia;
    alias Country.Slovenia Slovenia;
    alias Country.SolomonIslands SolomonIslands;
    alias Country.Somalia Somalia;
    alias Country.SouthAfrica SouthAfrica;
    alias Country.SouthGeorgiaAndTheSouthSandwichIslands SouthGeorgiaAndTheSouthSandwichIslands;
    alias Country.Spain Spain;
    alias Country.SriLanka SriLanka;
    alias Country.StHelena StHelena;
    alias Country.StPierreAndMiquelon StPierreAndMiquelon;
    alias Country.Sudan Sudan;
    alias Country.Suriname Suriname;
    alias Country.SvalbardAndJanMayenIslands SvalbardAndJanMayenIslands;
    alias Country.Swaziland Swaziland;
    alias Country.Sweden Sweden;
    alias Country.Switzerland Switzerland;
    alias Country.SyrianArabRepublic SyrianArabRepublic;
    alias Country.Taiwan Taiwan;
    alias Country.Tajikistan Tajikistan;
    alias Country.Tanzania Tanzania;
    alias Country.Thailand Thailand;
    alias Country.Togo Togo;
    alias Country.Tokelau Tokelau;
    alias Country.TongaCountry TongaCountry;
    alias Country.TrinidadAndTobago TrinidadAndTobago;
    alias Country.Tunisia Tunisia;
    alias Country.Turkey Turkey;
    alias Country.Turkmenistan Turkmenistan;
    alias Country.TurksAndCaicosIslands TurksAndCaicosIslands;
    alias Country.Tuvalu Tuvalu;
    alias Country.Uganda Uganda;
    alias Country.Ukraine Ukraine;
    alias Country.UnitedArabEmirates UnitedArabEmirates;
    alias Country.UnitedKingdom UnitedKingdom;
    alias Country.UnitedStates UnitedStates;
    alias Country.UnitedStatesMinorOutlyingIslands UnitedStatesMinorOutlyingIslands;
    alias Country.Uruguay Uruguay;
    alias Country.Uzbekistan Uzbekistan;
    alias Country.Vanuatu Vanuatu;
    alias Country.VaticanCityState VaticanCityState;
    alias Country.Venezuela Venezuela;
    alias Country.VietNam VietNam;
    alias Country.BritishVirginIslands BritishVirginIslands;
    alias Country.USVirginIslands USVirginIslands;
    alias Country.WallisAndFutunaIslands WallisAndFutunaIslands;
    alias Country.WesternSahara WesternSahara;
    alias Country.Yemen Yemen;
    alias Country.Yugoslavia Yugoslavia;
    alias Country.Zambia Zambia;
    alias Country.Zimbabwe Zimbabwe;
    alias Country.SerbiaAndMontenegro SerbiaAndMontenegro;
    alias Country.Montenegro Montenegro;
    alias Country.Serbia Serbia;
    alias Country.SaintBarthelemy SaintBarthelemy;
    alias Country.SaintMartin SaintMartin;
    alias Country.LatinAmericaAndTheCaribbean LatinAmericaAndTheCaribbean;

    public enum Language {
        C = 1,
        Abkhazian = 2,
        Afan = 3,
        Afar = 4,
        Afrikaans = 5,
        Albanian = 6,
        Amharic = 7,
        Arabic = 8,
        Armenian = 9,
        Assamese = 10,
        Aymara = 11,
        Azerbaijani = 12,
        Bashkir = 13,
        Basque = 14,
        Bengali = 15,
        Bhutani = 16,
        Bihari = 17,
        Bislama = 18,
        Breton = 19,
        Bulgarian = 20,
        Burmese = 21,
        Byelorussian = 22,
        Cambodian = 23,
        Catalan = 24,
        Chinese = 25,
        Corsican = 26,
        Croatian = 27,
        Czech = 28,
        Danish = 29,
        Dutch = 30,
        English = 31,
        Esperanto = 32,
        Estonian = 33,
        Faroese = 34,
        FijiLanguage = 35,
        Finnish = 36,
        French = 37,
        Frisian = 38,
        Gaelic = 39,
        Galician = 40,
        Georgian = 41,
        German = 42,
        Greek = 43,
        Greenlandic = 44,
        Guarani = 45,
        Gujarati = 46,
        Hausa = 47,
        Hebrew = 48,
        Hindi = 49,
        Hungarian = 50,
        Icelandic = 51,
        Indonesian = 52,
        Interlingua = 53,
        Interlingue = 54,
        Inuktitut = 55,
        Inupiak = 56,
        Irish = 57,
        Italian = 58,
        Japanese = 59,
        Javanese = 60,
        Kannada = 61,
        Kashmiri = 62,
        Kazakh = 63,
        Kinyarwanda = 64,
        Kirghiz = 65,
        Korean = 66,
        Kurdish = 67,
        Kurundi = 68,
        Laothian = 69,
        Latin = 70,
        Latvian = 71,
        Lingala = 72,
        Lithuanian = 73,
        Macedonian = 74,
        Malagasy = 75,
        Malay = 76,
        Malayalam = 77,
        Maltese = 78,
        Maori = 79,
        Marathi = 80,
        Moldavian = 81,
        Mongolian = 82,
        NauruLanguage = 83,
        Nepali = 84,
        Norwegian = 85,
        Occitan = 86,
        Oriya = 87,
        Pashto = 88,
        Persian = 89,
        Polish = 90,
        Portuguese = 91,
        Punjabi = 92,
        Quechua = 93,
        RhaetoRomance = 94,
        Romanian = 95,
        Russian = 96,
        Samoan = 97,
        Sangho = 98,
        Sanskrit = 99,
        Serbian = 100,
        SerboCroatian = 101,
        Sesotho = 102,
        Setswana = 103,
        Shona = 104,
        Sindhi = 105,
        Singhalese = 106,
        Siswati = 107,
        Slovak = 108,
        Slovenian = 109,
        Somali = 110,
        Spanish = 111,
        Sundanese = 112,
        Swahili = 113,
        Swedish = 114,
        Tagalog = 115,
        Tajik = 116,
        Tamil = 117,
        Tatar = 118,
        Telugu = 119,
        Thai = 120,
        Tibetan = 121,
        Tigrinya = 122,
        TongaLanguage = 123,
        Tsonga = 124,
        Turkish = 125,
        Turkmen = 126,
        Twi = 127,
        Uigur = 128,
        Ukrainian = 129,
        Urdu = 130,
        Uzbek = 131,
        Vietnamese = 132,
        Volapuk = 133,
        Welsh = 134,
        Wolof = 135,
        Xhosa = 136,
        Yiddish = 137,
        Yoruba = 138,
        Zhuang = 139,
        Zulu = 140,
        NorwegianNynorsk = 141,
        Bosnian = 142,
        Divehi = 143,
        Manx = 144,
        Cornish = 145,
        Akan = 146,
        Konkani = 147,
        Ga = 148,
        Igbo = 149,
        Kamba = 150,
        Syriac = 151,
        Blin = 152,
        Geez = 153,
        Koro = 154,
        Sidamo = 155,
        Atsam = 156,
        Tigre = 157,
        Jju = 158,
        Friulian = 159,
        Venda = 160,
        Ewe = 161,
        Walamo = 162,
        Hawaiian = 163,
        Tyap = 164,
        Chewa = 165,
        Filipino = 166,
        SwissGerman = 167,
        SichuanYi = 168,
        Kpelle = 169,
        LowGerman = 170,
        SouthNdebele = 171,
        NorthernSotho = 172,
        NorthernSami = 173,
        Taroko = 174,
        Gusii = 175,
        Taita = 176,
        Fulah = 177,
        Kikuyu = 178,
        Samburu = 179,
        Sena = 180,
        NorthNdebele = 181,
        Rombo = 182,
        Tachelhit = 183,
        Kabyle = 184,
        Nyankole = 185,
        Bena = 186,
        Vunjo = 187,
        Bambara = 188,
        Embu = 189,
        Cherokee = 190,
        Morisyen = 191,
        Makonde = 192,
        Langi = 193,
        Ganda = 194,
        Bemba = 195,
        Kabuverdianu = 196,
        Meru = 197,
        Kalenjin = 198,
        Nama = 199,
        Machame = 200,
        Colognian = 201,
        Masai = 202,
        Soga = 203,
        Luyia = 204,
        Asu = 205,
        Teso = 206,
        Saho = 207,
        KoyraChiini = 208,
        Rwa = 209,
        Luo = 210,
        Chiga = 211,
        CentralMoroccoTamazight = 212,
        KoyraboroSenni = 213,
        Shambala = 214
    }

    alias Language.C C;
    alias Language.Abkhazian Abkhazian;
    alias Language.Afan Afan;
    alias Language.Afar Afar;
    alias Language.Afrikaans Afrikaans;
    alias Language.Albanian Albanian;
    alias Language.Amharic Amharic;
    alias Language.Arabic Arabic;
    alias Language.Armenian Armenian;
    alias Language.Assamese Assamese;
    alias Language.Aymara Aymara;
    alias Language.Azerbaijani Azerbaijani;
    alias Language.Bashkir Bashkir;
    alias Language.Basque Basque;
    alias Language.Bengali Bengali;
    alias Language.Bhutani Bhutani;
    alias Language.Bihari Bihari;
    alias Language.Bislama Bislama;
    alias Language.Breton Breton;
    alias Language.Bulgarian Bulgarian;
    alias Language.Burmese Burmese;
    alias Language.Byelorussian Byelorussian;
    alias Language.Cambodian Cambodian;
    alias Language.Catalan Catalan;
    alias Language.Chinese Chinese;
    alias Language.Corsican Corsican;
    alias Language.Croatian Croatian;
    alias Language.Czech Czech;
    alias Language.Danish Danish;
    alias Language.Dutch Dutch;
    alias Language.English English;
    alias Language.Esperanto Esperanto;
    alias Language.Estonian Estonian;
    alias Language.Faroese Faroese;
    alias Language.FijiLanguage FijiLanguage;
    alias Language.Finnish Finnish;
    alias Language.French French;
    alias Language.Frisian Frisian;
    alias Language.Gaelic Gaelic;
    alias Language.Galician Galician;
    alias Language.Georgian Georgian;
    alias Language.German German;
    alias Language.Greek Greek;
    alias Language.Greenlandic Greenlandic;
    alias Language.Guarani Guarani;
    alias Language.Gujarati Gujarati;
    alias Language.Hausa Hausa;
    alias Language.Hebrew Hebrew;
    alias Language.Hindi Hindi;
    alias Language.Hungarian Hungarian;
    alias Language.Icelandic Icelandic;
    alias Language.Indonesian Indonesian;
    alias Language.Interlingua Interlingua;
    alias Language.Interlingue Interlingue;
    alias Language.Inuktitut Inuktitut;
    alias Language.Inupiak Inupiak;
    alias Language.Irish Irish;
    alias Language.Italian Italian;
    alias Language.Japanese Japanese;
    alias Language.Javanese Javanese;
    alias Language.Kannada Kannada;
    alias Language.Kashmiri Kashmiri;
    alias Language.Kazakh Kazakh;
    alias Language.Kinyarwanda Kinyarwanda;
    alias Language.Kirghiz Kirghiz;
    alias Language.Korean Korean;
    alias Language.Kurdish Kurdish;
    alias Language.Kurundi Kurundi;
    alias Language.Laothian Laothian;
    alias Language.Latin Latin;
    alias Language.Latvian Latvian;
    alias Language.Lingala Lingala;
    alias Language.Lithuanian Lithuanian;
    alias Language.Macedonian Macedonian;
    alias Language.Malagasy Malagasy;
    alias Language.Malay Malay;
    alias Language.Malayalam Malayalam;
    alias Language.Maltese Maltese;
    alias Language.Maori Maori;
    alias Language.Marathi Marathi;
    alias Language.Moldavian Moldavian;
    alias Language.Mongolian Mongolian;
    alias Language.NauruLanguage NauruLanguage;
    alias Language.Nepali Nepali;
    alias Language.Norwegian Norwegian;
    alias Language.Occitan Occitan;
    alias Language.Oriya Oriya;
    alias Language.Pashto Pashto;
    alias Language.Persian Persian;
    alias Language.Polish Polish;
    alias Language.Portuguese Portuguese;
    alias Language.Punjabi Punjabi;
    alias Language.Quechua Quechua;
    alias Language.RhaetoRomance RhaetoRomance;
    alias Language.Romanian Romanian;
    alias Language.Russian Russian;
    alias Language.Samoan Samoan;
    alias Language.Sangho Sangho;
    alias Language.Sanskrit Sanskrit;
    alias Language.Serbian Serbian;
    alias Language.SerboCroatian SerboCroatian;
    alias Language.Sesotho Sesotho;
    alias Language.Setswana Setswana;
    alias Language.Shona Shona;
    alias Language.Sindhi Sindhi;
    alias Language.Singhalese Singhalese;
    alias Language.Siswati Siswati;
    alias Language.Slovak Slovak;
    alias Language.Slovenian Slovenian;
    alias Language.Somali Somali;
    alias Language.Spanish Spanish;
    alias Language.Sundanese Sundanese;
    alias Language.Swahili Swahili;
    alias Language.Swedish Swedish;
    alias Language.Tagalog Tagalog;
    alias Language.Tajik Tajik;
    alias Language.Tamil Tamil;
    alias Language.Tatar Tatar;
    alias Language.Telugu Telugu;
    alias Language.Thai Thai;
    alias Language.Tibetan Tibetan;
    alias Language.Tigrinya Tigrinya;
    alias Language.TongaLanguage TongaLanguage;
    alias Language.Tsonga Tsonga;
    alias Language.Turkish Turkish;
    alias Language.Turkmen Turkmen;
    alias Language.Twi Twi;
    alias Language.Uigur Uigur;
    alias Language.Ukrainian Ukrainian;
    alias Language.Urdu Urdu;
    alias Language.Uzbek Uzbek;
    alias Language.Vietnamese Vietnamese;
    alias Language.Volapuk Volapuk;
    alias Language.Welsh Welsh;
    alias Language.Wolof Wolof;
    alias Language.Xhosa Xhosa;
    alias Language.Yiddish Yiddish;
    alias Language.Yoruba Yoruba;
    alias Language.Zhuang Zhuang;
    alias Language.Zulu Zulu;
    alias Language.NorwegianNynorsk NorwegianNynorsk;
    alias Language.Bosnian Bosnian;
    alias Language.Divehi Divehi;
    alias Language.Manx Manx;
    alias Language.Cornish Cornish;
    alias Language.Akan Akan;
    alias Language.Konkani Konkani;
    alias Language.Ga Ga;
    alias Language.Igbo Igbo;
    alias Language.Kamba Kamba;
    alias Language.Syriac Syriac;
    alias Language.Blin Blin;
    alias Language.Geez Geez;
    alias Language.Koro Koro;
    alias Language.Sidamo Sidamo;
    alias Language.Atsam Atsam;
    alias Language.Tigre Tigre;
    alias Language.Jju Jju;
    alias Language.Friulian Friulian;
    alias Language.Venda Venda;
    alias Language.Ewe Ewe;
    alias Language.Walamo Walamo;
    alias Language.Hawaiian Hawaiian;
    alias Language.Tyap Tyap;
    alias Language.Chewa Chewa;
    alias Language.Filipino Filipino;
    alias Language.SwissGerman SwissGerman;
    alias Language.SichuanYi SichuanYi;
    alias Language.Kpelle Kpelle;
    alias Language.LowGerman LowGerman;
    alias Language.SouthNdebele SouthNdebele;
    alias Language.NorthernSotho NorthernSotho;
    alias Language.NorthernSami NorthernSami;
    alias Language.Taroko Taroko;
    alias Language.Gusii Gusii;
    alias Language.Taita Taita;
    alias Language.Fulah Fulah;
    alias Language.Kikuyu Kikuyu;
    alias Language.Samburu Samburu;
    alias Language.Sena Sena;
    alias Language.NorthNdebele NorthNdebele;
    alias Language.Rombo Rombo;
    alias Language.Tachelhit Tachelhit;
    alias Language.Kabyle Kabyle;
    alias Language.Nyankole Nyankole;
    alias Language.Bena Bena;
    alias Language.Vunjo Vunjo;
    alias Language.Bambara Bambara;
    alias Language.Embu Embu;
    alias Language.Cherokee Cherokee;
    alias Language.Morisyen Morisyen;
    alias Language.Makonde Makonde;
    alias Language.Langi Langi;
    alias Language.Ganda Ganda;
    alias Language.Bemba Bemba;
    alias Language.Kabuverdianu Kabuverdianu;
    alias Language.Meru Meru;
    alias Language.Kalenjin Kalenjin;
    alias Language.Nama Nama;
    alias Language.Machame Machame;
    alias Language.Colognian Colognian;
    alias Language.Masai Masai;
    alias Language.Soga Soga;
    alias Language.Luyia Luyia;
    alias Language.Asu Asu;
    alias Language.Teso Teso;
    alias Language.Saho Saho;
    alias Language.KoyraChiini KoyraChiini;
    alias Language.Rwa Rwa;
    alias Language.Luo Luo;
    alias Language.Chiga Chiga;
    alias Language.CentralMoroccoTamazight CentralMoroccoTamazight;
    alias Language.KoyraboroSenni KoyraboroSenni;
    alias Language.Shambala Shambala;


// Functions

    public this() {
        void* ret = qtd_QLocale_QLocale();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QLocale.Language language, QLocale.Country country = QLocale.Country.AnyCountry) {
        void* ret = qtd_QLocale_QLocale_Language_Country(language, country);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QLocale) other) {
        void* ret = qtd_QLocale_QLocale_QLocale(other is null ? null : (cast(QLocale)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name) {
        void* ret = qtd_QLocale_QLocale_string(name);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string amText() const {
        string res;
        qtd_QLocale_amText_const(qtdNativeId, &res);
        return res;
    }

    public final QLocale.Country country() const {
        return cast(QLocale.Country) qtd_QLocale_country_const(qtdNativeId);
    }

    public final string dateFormat(QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_dateFormat_FormatType_const(qtdNativeId, &res, format);
        return res;
    }

    public final string dateTimeFormat(QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_dateTimeFormat_FormatType_const(qtdNativeId, &res, format);
        return res;
    }

    public final string dayName(int arg__1, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_dayName_int_FormatType_const(qtdNativeId, &res, arg__1, format);
        return res;
    }

    public final QLocale.Language language() const {
        return cast(QLocale.Language) qtd_QLocale_language_const(qtdNativeId);
    }

    public final QLocale.MeasurementSystem measurementSystem() const {
        return cast(QLocale.MeasurementSystem) qtd_QLocale_measurementSystem_const(qtdNativeId);
    }

    public final string monthName(int arg__1, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_monthName_int_FormatType_const(qtdNativeId, &res, arg__1, format);
        return res;
    }

    public final string name() const {
        string res;
        qtd_QLocale_name_const(qtdNativeId, &res);
        return res;
    }

    public final int numberOptions() const {
        return qtd_QLocale_numberOptions_const(qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QLocale_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QLocale) other) const {
        return qtd_QLocale_operator_equal_QLocale_const(qtdNativeId, other is null ? null : (cast(QLocale)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QLocale_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final string pmText() const {
        string res;
        qtd_QLocale_pmText_const(qtdNativeId, &res);
        return res;
    }

    public final void setNumberOptions(int options) {
        qtd_QLocale_setNumberOptions_NumberOptions(qtdNativeId, options);
    }

    public final string standaloneDayName(int arg__1, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_standaloneDayName_int_FormatType_const(qtdNativeId, &res, arg__1, format);
        return res;
    }

    public final string standaloneMonthName(int arg__1, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_standaloneMonthName_int_FormatType_const(qtdNativeId, &res, arg__1, format);
        return res;
    }

    public final Qt.LayoutDirection textDirection() const {
        return cast(Qt.LayoutDirection) qtd_QLocale_textDirection_const(qtdNativeId);
    }

    public final string timeFormat(QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_timeFormat_FormatType_const(qtdNativeId, &res, format);
        return res;
    }

    public final QDate toDate(string string, QLocale.FormatType arg__2 = QLocale.FormatType.LongFormat) const {
        void* ret = qtd_QLocale_toDate_string_FormatType_const(qtdNativeId, string, arg__2);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDate toDate(string string, string format) const {
        void* ret = qtd_QLocale_toDate_string_string_const(qtdNativeId, string, format);
        QDate __d_return_value = new QDate(ret);
        return __d_return_value;
    }

    public final QDateTime toDateTime(string string, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        void* ret = qtd_QLocale_toDateTime_string_FormatType_const(qtdNativeId, string, format);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final QDateTime toDateTime(string string, string format) const {
        void* ret = qtd_QLocale_toDateTime_string_string_const(qtdNativeId, string, format);
        QDateTime __d_return_value = new QDateTime(ret);
        return __d_return_value;
    }

    public final double toDouble(string s, bool* ok = null) const {
        return qtd_QLocale_toDouble_string_nativepointerbool_const(qtdNativeId, s, ok);
    }

    public final float toFloat(string s, bool* ok = null) const {
        return qtd_QLocale_toFloat_string_nativepointerbool_const(qtdNativeId, s, ok);
    }

    public final int toInt(string s, bool* ok = null, int base = 0) const {
        return qtd_QLocale_toInt_string_nativepointerbool_int_const(qtdNativeId, s, ok, base);
    }

    public final short toShort(string s, bool* ok = null, int base = 0) const {
        return qtd_QLocale_toShort_string_nativepointerbool_int_const(qtdNativeId, s, ok, base);
    }

    public final string toString(const(QDate) date, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_toString_QDate_FormatType_const(qtdNativeId, &res, date is null ? null : (cast(QDate)date).qtdNativeId, format);
        return res;
    }

    public final string toString(const(QDate) date, string formatStr) const {
        string res;
        qtd_QLocale_toString_QDate_string_const(qtdNativeId, &res, date is null ? null : (cast(QDate)date).qtdNativeId, formatStr);
        return res;
    }

    public final string toString(const(QDateTime) dateTime, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_toString_QDateTime_FormatType_const(qtdNativeId, &res, dateTime is null ? null : (cast(QDateTime)dateTime).qtdNativeId, format);
        return res;
    }

    public final string toString(const(QDateTime) dateTime, string format) const {
        string res;
        qtd_QLocale_toString_QDateTime_string_const(qtdNativeId, &res, dateTime is null ? null : (cast(QDateTime)dateTime).qtdNativeId, format);
        return res;
    }

    public final string toString(const(QTime) time, QLocale.FormatType format = QLocale.FormatType.LongFormat) const {
        string res;
        qtd_QLocale_toString_QTime_FormatType_const(qtdNativeId, &res, time is null ? null : (cast(QTime)time).qtdNativeId, format);
        return res;
    }

    public final string toString(const(QTime) time, string formatStr) const {
        string res;
        qtd_QLocale_toString_QTime_string_const(qtdNativeId, &res, time is null ? null : (cast(QTime)time).qtdNativeId, formatStr);
        return res;
    }

    public final string toString(double i, char f = 'g', int prec = 6) const {
        string res;
        qtd_QLocale_toString_double_char_int_const(qtdNativeId, &res, i, f, prec);
        return res;
    }

    public final string toString(float i, char f = 'g', int prec = 6) const {
        string res;
        qtd_QLocale_toString_float_char_int_const(qtdNativeId, &res, i, f, prec);
        return res;
    }

    public final string toString(int i) const {
        string res;
        qtd_QLocale_toString_int_const(qtdNativeId, &res, i);
        return res;
    }

    public final string toString(short i) const {
        string res;
        qtd_QLocale_toString_short_const(qtdNativeId, &res, i);
        return res;
    }

    public final QTime toTime(string string, QLocale.FormatType arg__2 = QLocale.FormatType.LongFormat) const {
        void* ret = qtd_QLocale_toTime_string_FormatType_const(qtdNativeId, string, arg__2);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public final QTime toTime(string string, string format) const {
        void* ret = qtd_QLocale_toTime_string_string_const(qtdNativeId, string, format);
        QTime __d_return_value = new QTime(ret);
        return __d_return_value;
    }

    public static QLocale c() {
        void* ret = qtd_QLocale_c();
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public static QList!(QLocale.Country) countriesForLanguage(QLocale.Language lang) {
        auto res = QList!(QLocale.Country).opCall();
        qtd_QLocale_countriesForLanguage_Language(&res, lang);
        return res;
    }

    public static string countryToString(QLocale.Country country) {
        string res;
        qtd_QLocale_countryToString_Country(&res, country);
        return res;
    }

    public static string languageToString(QLocale.Language language) {
        string res;
        qtd_QLocale_languageToString_Language(&res, language);
        return res;
    }

    public static void setDefault(const(QLocale) locale) {
        qtd_QLocale_setDefault_QLocale(locale is null ? null : (cast(QLocale)locale).qtdNativeId);
    }

    public static QLocale system() {
        void* ret = qtd_QLocale_system();
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QLocale;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QLocale_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QLocale_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QLocale_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QLocale_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QLocale_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QLocale_QTypeInfo_isComplex();
        isStatic = qtd_QLocale_QTypeInfo_isStatic();
        isLarge = qtd_QLocale_QTypeInfo_isLarge();
        isPointer = qtd_QLocale_QTypeInfo_isPointer();
        isDummy = qtd_QLocale_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QLocale_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QLocale_native_copy(const void* orig);
extern (C) void qtd_QLocale_delete(void *ptr);
extern (C) void qtd_QLocale_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QLocale_QLocale();
private extern(C) void* qtd_QLocale_QLocale_Language_Country(int language0,
 int country1);
private extern(C) void* qtd_QLocale_QLocale_QLocale(void* other0);
private extern(C) void* qtd_QLocale_QLocale_string(string name0);
private extern(C) void  qtd_QLocale_amText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QLocale_country_const(void* __this_nativeId);
private extern(C) void  qtd_QLocale_dateFormat_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int format0);
private extern(C) void  qtd_QLocale_dateTimeFormat_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int format0);
private extern(C) void  qtd_QLocale_dayName_int_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1);
private extern(C) int  qtd_QLocale_language_const(void* __this_nativeId);
private extern(C) int  qtd_QLocale_measurementSystem_const(void* __this_nativeId);
private extern(C) void  qtd_QLocale_monthName_int_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1);
private extern(C) void  qtd_QLocale_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QLocale_numberOptions_const(void* __this_nativeId);
private extern(C) void  qtd_QLocale_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QLocale_operator_equal_QLocale_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QLocale_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLocale_pmText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLocale_setNumberOptions_NumberOptions(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QLocale_standaloneDayName_int_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1);
private extern(C) void  qtd_QLocale_standaloneMonthName_int_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int arg__1,
 int format1);
private extern(C) int  qtd_QLocale_textDirection_const(void* __this_nativeId);
private extern(C) void  qtd_QLocale_timeFormat_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 int format0);
private extern(C) void*  qtd_QLocale_toDate_string_FormatType_const(void* __this_nativeId,
 string string0,
 int arg__2);
private extern(C) void*  qtd_QLocale_toDate_string_string_const(void* __this_nativeId,
 string string0,
 string format1);
private extern(C) void*  qtd_QLocale_toDateTime_string_FormatType_const(void* __this_nativeId,
 string string0,
 int format1);
private extern(C) void*  qtd_QLocale_toDateTime_string_string_const(void* __this_nativeId,
 string string0,
 string format1);
private extern(C) double  qtd_QLocale_toDouble_string_nativepointerbool_const(void* __this_nativeId,
 string s0,
 bool* ok1);
private extern(C) float  qtd_QLocale_toFloat_string_nativepointerbool_const(void* __this_nativeId,
 string s0,
 bool* ok1);
private extern(C) int  qtd_QLocale_toInt_string_nativepointerbool_int_const(void* __this_nativeId,
 string s0,
 bool* ok1,
 int base2);
private extern(C) short  qtd_QLocale_toShort_string_nativepointerbool_int_const(void* __this_nativeId,
 string s0,
 bool* ok1,
 int base2);
private extern(C) void  qtd_QLocale_toString_QDate_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 void* date0,
 int format1);
private extern(C) void  qtd_QLocale_toString_QDate_string_const(void* __this_nativeId,
 void* __d_return_value,
 void* date0,
 string formatStr1);
private extern(C) void  qtd_QLocale_toString_QDateTime_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 void* dateTime0,
 int format1);
private extern(C) void  qtd_QLocale_toString_QDateTime_string_const(void* __this_nativeId,
 void* __d_return_value,
 void* dateTime0,
 string format1);
private extern(C) void  qtd_QLocale_toString_QTime_FormatType_const(void* __this_nativeId,
 void* __d_return_value,
 void* time0,
 int format1);
private extern(C) void  qtd_QLocale_toString_QTime_string_const(void* __this_nativeId,
 void* __d_return_value,
 void* time0,
 string formatStr1);
private extern(C) void  qtd_QLocale_toString_double_char_int_const(void* __this_nativeId,
 void* __d_return_value,
 double i0,
 char f1,
 int prec2);
private extern(C) void  qtd_QLocale_toString_float_char_int_const(void* __this_nativeId,
 void* __d_return_value,
 float i0,
 char f1,
 int prec2);
private extern(C) void  qtd_QLocale_toString_int_const(void* __this_nativeId,
 void* __d_return_value,
 int i0);
private extern(C) void  qtd_QLocale_toString_short_const(void* __this_nativeId,
 void* __d_return_value,
 short i0);
private extern(C) void*  qtd_QLocale_toTime_string_FormatType_const(void* __this_nativeId,
 string string0,
 int arg__2);
private extern(C) void*  qtd_QLocale_toTime_string_string_const(void* __this_nativeId,
 string string0,
 string format1);
private extern(C) void*  qtd_QLocale_c();
private extern(C) void  qtd_QLocale_countriesForLanguage_Language(void* __d_return_value,
 int lang0);
private extern(C) void  qtd_QLocale_countryToString_Country(void* __d_return_value,
 int country0);
private extern(C) void  qtd_QLocale_languageToString_Language(void* __d_return_value,
 int language0);
private extern(C) void  qtd_QLocale_setDefault_QLocale(void* locale0);
private extern(C) void*  qtd_QLocale_system();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QLocale() {
    QLocale.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QLocale_QTypeInfo_isComplex();
private extern (C) bool qtd_QLocale_QTypeInfo_isStatic();
private extern (C) bool qtd_QLocale_QTypeInfo_isLarge();
private extern (C) bool qtd_QLocale_QTypeInfo_isPointer();
private extern (C) bool qtd_QLocale_QTypeInfo_isDummy();
