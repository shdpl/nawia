module qt.network.QSsl;

public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public interface QSsl
{
    public enum KeyType {
        PrivateKey = 0,
        PublicKey = 1
    }

    alias KeyType.PrivateKey PrivateKey;
    alias KeyType.PublicKey PublicKey;

    public enum KeyAlgorithm {
        Rsa = 0,
        Dsa = 1
    }

    alias KeyAlgorithm.Rsa Rsa;
    alias KeyAlgorithm.Dsa Dsa;

    public enum SslProtocol {
        SslV3 = 0,
        SslV2 = 1,
        TlsV1 = 2,
        AnyProtocol = 3,
        UnknownProtocol = -1
    }

    alias SslProtocol.SslV3 SslV3;
    alias SslProtocol.SslV2 SslV2;
    alias SslProtocol.TlsV1 TlsV1;
    alias SslProtocol.AnyProtocol AnyProtocol;
    alias SslProtocol.UnknownProtocol UnknownProtocol;

    public enum AlternateNameEntryType {
        EmailEntry = 0,
        DnsEntry = 1
    }

    alias AlternateNameEntryType.EmailEntry EmailEntry;
    alias AlternateNameEntryType.DnsEntry DnsEntry;

    public enum EncodingFormat {
        Pem = 0,
        Der = 1
    }

    alias EncodingFormat.Pem Pem;
    alias EncodingFormat.Der Der;

// Functions
// Field accessors
    public alias void __isQtType_QSsl;

// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

