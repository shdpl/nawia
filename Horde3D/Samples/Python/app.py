#!/usr/bin/python
# *************************************************************************************************
#
# Horde3D
#   Next-Generation Graphics Engine
#
# Sample Application
# --------------------------------------
# Copyright (C) 2006-2008 Nicolas Schulz
#			   2008 Florian Noeding
#
#
# This sample source file is not covered by the LGPL as the rest of the SDK
# and may be used without any restrictions
#
# *************************************************************************************************
import os, sys

import pyglet
import pyglet.gl
import pyglet.window
import pyglet.clock

sys.path.append('../../Bindings/Python')
import horde3d as h3d

from optparse import OptionParser


class Window(pyglet.window.Window):
	def __init__(self, app, config, width, height, options, caption = 'unnamed'):
		self._app = app

		self._width = width
		self._height = height
		self._options = options

		pyglet.window.Window.__init__(self,
				resizable=True,
				config=config,
				width=width,
				height=height,
				caption=caption,
				vsync=options.vsync,
				)

		# event dispatch
		self.keyboard = pyglet.window.key.KeyStateHandler()
		self.push_handlers(self.keyboard)

	def setupCamera(self, name, pipeRes):
		self.camera = h3d.addCameraNode(h3d.RootNode, name, pipeRes)
		h3d.setNodeTransform(self.camera, 0, 0, -100, 0, 0, 0, 1, 1, 1)

	def on_resize(self, width, height):
		self._width = width
		self._height = height

		self.switch_to()
		h3d.setupViewport(0, 0, width, height, True)

		h3d.setupCameraView(self.camera, 45, width / float(height), 0.1, 1000)

	def on_key_press(self, symbol, modifiers):
		key = pyglet.window.key

		if symbol == key.ESCAPE:
			self.has_exit = True
		if symbol == key.F9:
			w = self._app._createWindow('Horde3D multi window test')
			self._app._initHorde3DWindow(w)
			self._app._windows.append(w)


class App(object):
	def __init__(self, windowClass):
		self._windowClass = windowClass

	def init(self):
		self._parseOptions()

		self._initGL()
		self._initHorde3D()

	def _parseOptions(self):
		op = OptionParser()
		op.add_option('-x', '--width', type='int', dest='width', help='window width', default=800)
		op.add_option('-y', '--height', type='int', dest='height', help='window height', default=600)
		op.add_option('--vsync-on', dest='vsync', help='enable / disable vsync', action='store_true', default=False)
		op.add_option('--content', dest='contentPaths', help='path to content directory, may be specified several times', action='append', default=['../../Binaries/Content'])
		op.add_option('--limit-fps', type='int', dest='fpsLimit', help='limit FPS to specified value; may improve keyboard / mouse reaction times for values below 100', default=None)
		op.add_option('--multiwindow', dest='multiWindow', help='enable support for multiple windows; disabled by default due to significant performance hit', default=False)

		self._parseOptions_moreOptions(op)

		options, args = op.parse_args()
		self._options = options
		self._args = args

		if not options.contentPaths:
			op.error('no content path set')
		else:
			options.contentPaths = '|'.join(options.contentPaths)

		self._parseOptions_moreChecks(options, args)

	def _parseOptions_moreOptions(self, op):
		# override to add more options using op.add_action(...)
		pass

	def _parseOptions_moreChecks(self, options, args):
		# override to check more options, on error call op.error('message')
		pass

	def _createWindow(self, name):
		config = pyglet.gl.Config(buffer_size=32, depth_size=24, stencil_size=8, double_buffer=True)
		w = self._windowClass(
				self,
				config,
				self._options.width,
				self._options.height,
				self._options,
				caption=name,
				)

		return w

	def _initGL(self):
		self._windows = []
		for i in range(1):
			w = self._createWindow('Horde3D App')
			self._windows.append(w)

		# FPS limit
		pyglet.clock.set_fps_limit(self._options.fpsLimit)

	def _initHorde3D(self):
		# init Horde3D
		h3d.init()
		
		self._h3dEngineOptions()
		self._h3dAddResources()

		# load resources from disk
		if not h3d.utils.loadResourcesFromDisk(self._options.contentPaths):
			print 'loading of some resources failed: See Horde3D_Log.html'

		for w in self._windows:
			self._initHorde3DWindow(w)

		self._h3dSetupScene()

	def _initHorde3DWindow(self, w):
		w.setupCamera('cam %d' % id(w), self._h3dres.forwardPipe)

	def _h3dEngineOptions(self):
		# engine options
		h3d.setOption(h3d.Options.LoadTextures, 1)
		h3d.setOption(h3d.Options.TexCompression, 0)
		h3d.setOption(h3d.Options.FastAnimation, 0)
		h3d.setOption(h3d.Options.MaxAnisotropy, 4)
		h3d.setOption(h3d.Options.ShadowMapSize, 2048)

	def _h3dAddResources(self):
		# add resources
		class H3DRes:
			pass
		h3dres = H3DRes()
		self._h3dres = h3dres

		h3dres.forwardPipe = h3d.addResource(h3d.ResTypes.Pipeline, "pipelines/forward.pipeline.xml", 0)
		h3dres.fontMat = h3d.addResource(h3d.ResTypes.Material, "overlays/font.material.xml", 0)
		h3dres.logoMat = h3d.addResource(h3d.ResTypes.Material, "overlays/logo.material.xml", 0)

	def _h3dSetupScene(self):
		pass
		
	def mainloop(self):
		while self._windows:
			closed = []
			for w in self._windows:
				if w.has_exit:
					closed.append(w)
					continue
				w.dispatch_events()
			for w in closed:
				w.close()
				self._windows.remove(w)

			dt = pyglet.clock.tick()

			self._mainloopUpdate(dt)

			for w in self._windows:
				if self._options.multiWindow:
					w.switch_to()
					w.on_resize(w._width, w._height) # calls h3d.resize; FIXME is this fixable?

				self._mainloopRenderOverlays(w, dt)
				self._mainloopRender(w, dt)

				h3d.finalizeFrame()
				w.flip()

			h3d.utils.dumpMessages()

	def _mainloopUpdate(self, dt):
		if not hasattr(self, '_fpsTimer'):
			self._fpsTimer = 0.0
			self._fps = 0.0
			self._fpsString = ''

		self._fpsTimer += dt
		if self._fpsTimer > 0.3:
			self._fpsTimer = 0.0
			self._fps = pyglet.clock.get_fps()
			self._fpsString = ('%.2f' % self._fps).rjust(8, ' ')

	def _mainloopRenderOverlays(self, w, dt):
		h3d.clearOverlays()
		## h3d.utils.showText('%s' % (self._fpsString), 0, 0.95, 0.03, 0, self._h3dres.fontMaterial)
		h3d.showOverlay(0.75, 0.8, 0, 1, 0.75, 1, 0, 0,
						1, 1, 1, 0, 1, 0.8, 1, 1,
						1, 1, 1, 1, self._h3dres.logoMat, 7)


	def _mainloopRender(self, w, dt):
		h3d.render(w.camera)


def main():
	app = App(Window)
	app.init()
	app.mainloop()


if __name__ == '__main__':
	main()



