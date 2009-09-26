D native binding for Horde3D
----------------------------

Usage : just add the Horde3D.d and (optionally) Horde3DUtils.d to your
source files and normally link with Horde3D libraries, and it should
work just fine.

d_wrapper_gen.py is a Python script to generate Horde3D.d and Horde3DUtils.d
using Horde3D.h and Horde3DUtils.h as a base (they should be in the same
directory as the script).

The reason this binding is called "native" is that it is just an
exposition of the Horde3D C API in D. If you need dynamic loading of
Horde3D, use the Derelict binding instead.

NOTE : this binding has ONLY BEEN TESTED ON LINUX WITH LDC COMPILER;
some changes may be necessary for other platforms.

If you make any improvement to this binding or see that it works on another
platform, feel free to either send me a patch or directly change the
affected files in the community SVN repository.

Contact : funto66 {at} gmail.com
