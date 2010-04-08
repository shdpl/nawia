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

import app

import horde3d as h3d
from math import sin, cos, radians, degrees, sqrt, atan2
from random import random, seed

class TerrainWindow(app.Window):
    def on_key_press(self, symbol, modifiers):
        key = pyglet.window.key

        if symbol == key.ESCAPE:
            self.has_exit = True
        elif symbol == key.SPACE:
            self._app._freeze = not self._app._freeze
        elif symbol == key.F7:
            self._app._debugViewMode = not self._app._debugViewMode
        elif symbol == key.F8:
            self._app._wireframeMode = not self._app._wireframeMode
        elif symbol == key.F9:
            self._app._showStats = not(self._app._showStats)

    def on_mouse_motion(self, x, y, dx, dy):
        # Look left/right
        self._app._ry -= dx / 100.0 * 30.0
        # Loop up/down but only in a limited range
        self._app._rx = max(-90, min(90, self._app._rx + dy / 100.0 * 30.0))


class TerrainApp(app.App):
    def __init__(self, windowClass):
        app.App.__init__(self, windowClass)

        self._keys = [False for i in range(320)]
        self._x = 512.0
        self._y = 120.0
        self._z = 512.0
        self._rx = 0.0
        self._ry = 2250.0
        self._velocity = 10.0
        
        self._freeze = False
        self._showStats = False
        self._debugViewMode = False
        self._wireframeMode = False

        self._animTime = 0.0
        self._weight = 1.0
        self._cam = 0
        self._statMode = 0

    def _parseOptions_moreChecks(self, options, args):
        # override to check more options, on error call op.error('message')
        # a bit of a hack
        options.contentPaths += "|../../../Extensions/Terrain/Sample/Content"

    def _createWindow(self, name):
        w = app.App._createWindow(self, name)
        w.set_exclusive_mouse()
        return w

    def _h3dEngineOptions(self):
        h3d.setOption(h3d.Options.LoadTextures, 1)
        h3d.setOption(h3d.Options.TexCompression, 0)
        h3d.setOption(h3d.Options.MaxAnisotropy, 4)
        h3d.setOption(h3d.Options.ShadowMapSize, 2048)
        h3d.setOption(h3d.Options.FastAnimation, 1)

    def _h3dAddResources(self):
        class H3DRes:
            pass

        h3dres = H3DRes()
        self._h3dres = h3dres

        # Pipelines
        h3dres.forwardPipe = h3d.addResource(h3d.ResTypes.Pipeline, "pipelines/forward.pipeline.xml", 0)
        # Overlays
        h3dres.fontMat = h3d.addResource(h3d.ResTypes.Material, "overlays/font.material.xml", 0)
        h3dres.panelMat = h3d.addResource(h3d.ResTypes.Material, "overlays/panel.material.xml", 0)
        h3dres.logoMat = h3d.addResource(h3d.ResTypes.Material, "overlays/logo.material.xml", 0)
        # Terrain
        h3dres.terrain = h3d.addResource(h3d.ResTypes.SceneGraph, "terrains/terrain1/terrain1.scene.xml", 0)
        h3dres.matRes = h3d.findResource(h3d.ResTypes.Material, "terrains/terrain1/terrain1.material.xml" );
        
    def _h3dSetupScene(self):
        h3dres = self._h3dres
        # Add terrain
        self.terrain = h3d.addNodes(h3d.RootNode, h3dres.terrain)
        # Set sun direction for ambient pass
        h3d.setMaterialUniform(h3dres.matRes, "sunDir", 1, -1, 0, 0 );

    def _mainloopUpdate(self, dt):
        app.App._mainloopUpdate(self, dt)

        for w in self._windows:
            h3d.setNodeTransform(w.camera, self._x, self._y, self._z, self._rx, self._ry, 0, 1, 1, 1)
            h3d.setOption(h3d.Options.DebugViewMode, float(self._debugViewMode))
            h3d.setOption(h3d.Options.WireframeMode, float(self._wireframeMode))

            key = pyglet.window.key
            curVel = self._velocity * dt
            if w.keyboard[key.LSHIFT]:
                curVel *= 10
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
            break # we use only exactly ONE window

    def _mainloopRenderOverlays(self, w, dt):
        super(TerrainApp, self)._mainloopRenderOverlays(w, dt)
        if self._showStats:
            h3d.utils.showFrameStats(self._h3dres.fontMat, self._h3dres.panelMat, 1)


def main():
    app = TerrainApp(TerrainWindow)
    app.init()
    app.mainloop()


if __name__ == '__main__':
    main()

