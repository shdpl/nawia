#!/usr/bin/python
# *************************************************************************************************
#
# Horde3D
#   Next-Generation Graphics Engine
#
# Sample Application
# --------------------------------------
# Copyright (C) 2006-2008 Nicolas Schulz
#               2008 Florian Noeding
#
#
# This sample source file is not covered by the LGPL as the rest of the SDK
# and may be used without any restrictions
#
# *************************************************************************************************

import pyglet
import pyglet.gl
import pyglet.window
import pyglet.clock

import horde3d as h3d

import app


class BasicWindow(app.Window):
	pass


class BasicApp(app.App):
	pass



def main():
	app = BasicApp(BasicWindow)
	app.init()
	app.mainloop()


if __name__ == '__main__':
	main()


