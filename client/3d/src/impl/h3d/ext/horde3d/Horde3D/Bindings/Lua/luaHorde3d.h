/******************************************************************************
Bob's Beer License v.1
Copyright 2007

1.  Don't act like a dick.  If you can help somebody else and make the world a
bit better, why not?
2.  No warrenty. If this software crashes your computer, destoys your data,
runs over your dog, and eats all your food, I claim no responsibility.
3.  Credit shall be given where credit is due. If you use this code, just
acknowledge where it came from in a comment or the header. Refer to rule #1
4.  Don't get into a pissing contest over the meaning of the words "derived
works."  Refer to rule #1.
5.  There is no need to distribute your source, or this source.  It's nice to do
from time to time and I highly recommend it, but nobody is forcing you.
6.  Once you share your source, it's not really yours anymore, it's everybodies.
If you set it free and it comes back to you, it was meant to be, otherwise
refer to rule #1.
7.  If you ever meet me, and you feel it's deserved, buy me a beer.  I might
even buy you a beer.  Especially if this code runs over your dog (even
though I claim no responsibility).
******************************************************************************/

#ifndef luaHord3d_H_
#define luaHord3d_H_

//forward defs
struct lua_State;

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif


extern "C" EXPORT int luaopen_Horde3d(lua_State* L);


#endif
