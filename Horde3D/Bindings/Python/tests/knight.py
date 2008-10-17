#!/usr/bin/env python
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
from math import sin, cos, radians, degrees


class KnightWindow(app.Window):
	def on_key_press(self, symbol, modifiers):
		key = pyglet.window.key

		if symbol == key.ESCAPE:
			self.has_exit = True

		if symbol == key.SPACE:
			self._app._freeze = not self._app._freeze

		if symbol == key.F3:
			p = h3d.getNodeParami(self.camera, h3d.CameraNodeParams.PipelineRes)
			if p == self._app._h3dres.hdrPipe:
				h3d.setNodeParami(self.camera, h3d.CameraNodeParams.PipelineRes, self._app._h3dres.forwardPipe)
			else:
				h3d.setNodeParami(self.camera, h3d.CameraNodeParams.PipelineRes, self._app._h3dres.hdrPipe)
		if symbol == key.F7:
			self._app._debugViewMode = not self._app._debugViewMode
		if symbol == key.F8:
			self._app._wireframeMode = not self._app._wireframeMode
		if symbol == key.F9:
			self._app._showStats = not self._app._showStats


	def on_mouse_motion(self, x, y, dx, dy):
		self._app._ry -= dx / 100.0 * 30.0
		
		self._app._rx += dy / 100.0 * 30.0

		if self._app._rx > 90:
			self._app._rx = 90

		if self._app._rx < -90:
			self._app._rx = -90


class KnightApp(app.App):
	def __init__(self, windowClass):
		app.App.__init__(self, windowClass)

		self._keys = [False for i in range(320)]
		self._x = 5.0
		self._y = 3.0
		self._z = 19.0
		self._rx = 7.0
		self._ry = 15.0
		self._velocity = 10.0
		
		self._freeze = False
		self._showStats = False
		self._debugViewMode = False
		self._wireframeMode = False

		self._animTime = 0.0
		self._weight = 1.0
		self._cam = 0


	def _createWindow(self, name):
		w = app.App._createWindow(self, name)

		w.set_exclusive_mouse()
		return w

	def _h3dAddResources(self):
		class H3DRes:
			pass

		h3dres = H3DRes()
		self._h3dres = h3dres

		h3dres.hdrPipe = h3d.addResource(h3d.ResourceTypes.Pipeline, 'hdr.pipeline.xml', 0)
		h3dres.forwardPipe = h3d.addResource(h3d.ResourceTypes.Pipeline, 'forward.pipeline.xml', 0)

		h3dres.fontMaterial = h3d.addResource(h3d.ResourceTypes.Material, 'font.material.xml', 0)
		h3dres.logoMaterial = h3d.addResource(h3d.ResourceTypes.Material, 'logo.material.xml', 0)

		h3dres.env = h3d.addResource(h3d.ResourceTypes.SceneGraph, 'sphere.scene.xml', 0)

		h3dres.knight = h3d.addResource(h3d.ResourceTypes.SceneGraph, 'knight.scene.xml', 0)
		h3dres.knightAnim1 = h3d.addResource(h3d.ResourceTypes.Animation, 'knight_order.anim', 0)
		h3dres.knightAnim2 = h3d.addResource(h3d.ResourceTypes.Animation, 'knight_attack.anim', 0)

		h3dres.particleSystem = h3d.addResource(h3d.ResourceTypes.SceneGraph, 'particleSys1.scene.xml', 0)


	def _h3dSetupScene(self):
		h3dres = self._h3dres

		self._env = h3d.addNodes(h3d.RootNode, h3dres.env)
		h3d.setNodeTransform(self._env, 0, -20, 0, 0, 0, 0, 20, 20, 20)

		self._knight = h3d.addNodes(h3d.RootNode, h3dres.knight)
		h3d.setNodeTransform(self._knight, 0, 0, 0, 0, 180, 0, 0.1, 0.1, 0.1)
		h3d.setupModelAnimStage(self._knight, 0, h3dres.knightAnim1, '', False)
		h3d.setupModelAnimStage(self._knight, 1, h3dres.knightAnim2, '', False)

		h3d.findNodes(self._knight, 'Bip01_R_Hand', h3d.SceneNodeTypes.Joint)
		hand = h3d.getNodeFindResult(0)
		self._particleSystem = h3d.addNodes(hand, h3dres.particleSystem)
		h3d.setNodeTransform(self._particleSystem, 0, 40, 0, 90, 0, 0, 1, 1, 1)


		self._light = h3d.addLightNode(h3d.RootNode, 'Light1', 0, 'LIGHTING', 'SHADOWMAP')
		h3d.setNodeTransform(self._light, 0, 15, 10, -60, 0, 0, 1, 1, 1)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.Radius, 30)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.FOV, 90)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.ShadowMapCount, 1)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.ShadowMapBias, 0.01)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_R, 1.0)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_G, 0.8)
		h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_B, 0.7)


		mat = h3d.findResource(h3d.ResourceTypes.Material, 'postHDR.material.xml')
		h3d.setMaterialUniform(mat, 'hdrParams', 2.5, 0.5, 0.08, 0.0)


	def _mainloopUpdate(self, dt):
		app.App._mainloopUpdate(self, dt)

		if self._fps == 0.0:
			curFPS = 30.0
		else:
			curFPS = self._fps

		for w in self._windows:
			h3d.setNodeTransform(w.camera, self._x, self._y, self._z, self._rx, self._ry, 0, 1, 1, 1)

			if self._debugViewMode:
				h3d.setOption(h3d.EngineOptions.DebugViewMode, 1.0)
			else:
				h3d.setOption(h3d.EngineOptions.DebugViewMode, 0.0)

			if self._wireframeMode:
				h3d.setOption(h3d.EngineOptions.WireframeMode, 1.0)
			else:
				h3d.setOption(h3d.EngineOptions.WireframeMode, 0.0)



			key = pyglet.window.key
			curVel = self._velocity / curFPS
			if w.keyboard[key.LSHIFT]:
				curVel *= 5

			if w.keyboard[key.W]:
				self._x -= sin(radians(self._ry)) * cos(-radians(self._rx)) * curVel
				self._y -= sin(-radians(self._rx)) * curVel
				self._z -= cos(radians(self._ry)) * cos(-radians(self._rx)) * curVel
			if w.keyboard[key.S]:
				self._x += sin(radians(self._ry)) * cos(-radians(self._rx)) * curVel
				self._y += sin(-radians(self._rx)) * curVel
				self._z += cos(radians(self._ry)) * cos(-radians(self._rx)) * curVel
			if w.keyboard[key.A]:
				self._x += sin(radians(self._ry - 90)) * curVel
				self._z += cos(radians(self._ry - 90)) * curVel
			if w.keyboard[key.D]:
				self._x += sin(radians(self._ry + 90)) * curVel
				self._z += cos(radians(self._ry + 90)) * curVel

			if w.keyboard[key._1]:
				self._weight += 2 / curFPS
				if self._weight > 1.0:
					self._weight = 1.0
			if w.keyboard[key._2]:
				self._weight -= 2/ curFPS
				if self._weight < 0.0:
					self._weight = 0.0



			break # we use only exactly ONE window


		if not self._freeze:
			self._animTime += 1.0 / curFPS

			h3d.setModelAnimParams(self._knight, 0, self._animTime * 24.0, self._weight)
			h3d.setModelAnimParams(self._knight, 1, self._animTime * 24.0, 1.0 - self._weight)


			count = h3d.findNodes(self._particleSystem, '', h3d.SceneNodeTypes.Emitter)
			for i in range(count):
				h3d.advanceEmitterTime(h3d.getNodeFindResult(i), 1.0 / curFPS)


	def _mainloopRenderOverlays(self, w, dt):
		h3d.clearOverlays()
		if self._showStats:
			h3d.utils.showFrameStats(self._h3dres.fontMaterial, self._fps + 0.0001)
			h3d.utils.showText('Weight: %0.2f' % (self._weight), 0, 0.78, 0.03, 0, self._h3dres.fontMaterial)







def main():
	app = KnightApp(KnightWindow)
	app.init()
	app.mainloop()


if __name__ == '__main__':
	main()

