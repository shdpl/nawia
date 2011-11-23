module qt.opengl.QGL;

import qt.opengl.gl;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPaintEngine;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGL
{
    public enum FormatOption {
        DoubleBuffer = 1,
        DepthBuffer = 2,
        Rgba = 4,
        AlphaChannel = 8,
        AccumBuffer = 16,
        StencilBuffer = 32,
        StereoBuffers = 64,
        DirectRendering = 128,
        HasOverlay = 256,
        SampleBuffers = 512,
        DeprecatedFunctions = 1024,
        SingleBuffer = 65536,
        NoDepthBuffer = 131072,
        ColorIndex = 262144,
        NoAlphaChannel = 524288,
        NoAccumBuffer = 1048576,
        NoStencilBuffer = 2097152,
        NoStereoBuffers = 4194304,
        IndirectRendering = 8388608,
        NoOverlay = 16777216,
        NoSampleBuffers = 33554432,
        NoDeprecatedFunctions = 67108864
    }

    alias FormatOption.DoubleBuffer DoubleBuffer;
    alias FormatOption.DepthBuffer DepthBuffer;
    alias FormatOption.Rgba Rgba;
    alias FormatOption.AlphaChannel AlphaChannel;
    alias FormatOption.AccumBuffer AccumBuffer;
    alias FormatOption.StencilBuffer StencilBuffer;
    alias FormatOption.StereoBuffers StereoBuffers;
    alias FormatOption.DirectRendering DirectRendering;
    alias FormatOption.HasOverlay HasOverlay;
    alias FormatOption.SampleBuffers SampleBuffers;
    alias FormatOption.DeprecatedFunctions DeprecatedFunctions;
    alias FormatOption.SingleBuffer SingleBuffer;
    alias FormatOption.NoDepthBuffer NoDepthBuffer;
    alias FormatOption.ColorIndex ColorIndex;
    alias FormatOption.NoAlphaChannel NoAlphaChannel;
    alias FormatOption.NoAccumBuffer NoAccumBuffer;
    alias FormatOption.NoStencilBuffer NoStencilBuffer;
    alias FormatOption.NoStereoBuffers NoStereoBuffers;
    alias FormatOption.IndirectRendering IndirectRendering;
    alias FormatOption.NoOverlay NoOverlay;
    alias FormatOption.NoSampleBuffers NoSampleBuffers;
    alias FormatOption.NoDeprecatedFunctions NoDeprecatedFunctions;

// Functions

    public static void setPreferredPaintEngine(QPaintEngine.Type engineType) {
        qtd_QGL_setPreferredPaintEngine_Type(engineType);
    }
// Field accessors
    public alias void __isQtType_QGL;

// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void  qtd_QGL_setPreferredPaintEngine_Type(int engineType0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

