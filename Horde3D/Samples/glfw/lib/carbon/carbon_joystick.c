//========================================================================
// GLFW - An OpenGL framework
// File:        macosx_joystick.c
// Platform:    Mac OS X
// API Version: 2.7
// WWW:         http://glfw.sourceforge.net
//------------------------------------------------------------------------
// Copyright (c) 2002-2006 Camilla Berglund
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================

#include "internal.h"

// TO DO: use HID manager to implement joystick support.

int _glfwPlatformGetJoystickParam( int joy, int param )
{
    // GL_FALSE == 0
    return 0;
}

int _glfwPlatformGetJoystickPos( int joy, float *pos, int numaxes )
{
    return 0;
}

int _glfwPlatformGetJoystickButtons( int joy, unsigned char *buttons, int numbuttons )
{
    return 0;
}

