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

class ChicagoWindow(app.Window):
    def on_key_press(self, symbol, modifiers):
        key = pyglet.window.key

        if symbol == key.ESCAPE:
            self.has_exit = True

        elif symbol == key.SPACE:
            self._app._freeze = not self._app._freeze

        elif symbol == key.F1:
            self._app._crowdSim.remove(50)
        elif symbol == key.F2:
            self._app._crowdSim.add(50)
            
        elif symbol == key.F3:
            self._app._crowdSim.setRange(max(1, self._app._crowdSim._range / 2))
        elif symbol == key.F4:
            self._app._crowdSim.setRange(min(32, self._app._crowdSim._range * 2))
            
        elif symbol == key.F6:
            p = h3d.getNodeParami(self.camera, h3d.CameraNodeParams.PipelineRes)
            if p == self._app._h3dres.forwardPipe:
                pipe = self._app._h3dres.deferredPipe
            else:
                pipe = self._app._h3dres.forwardPipe
            h3d.setNodeParami(self.camera, h3d.CameraNodeParams.PipelineRes, pipe)
        
        elif symbol == key.F7:
            self._app._debugViewMode = not self._app._debugViewMode
        
        elif symbol == key.F8:
            self._app._wireframeMode = not self._app._wireframeMode
        
        elif symbol == key.F9:
            self._app._showStats = True
            self._app._statMode = 1 - self._app._statMode

    def on_mouse_motion(self, x, y, dx, dy):
        # Look left/right
        self._app._ry -= dx / 100.0 * 30.0
        # Loop up/down but only in a limited range
        self._app._rx = max(-90, min(90, self._app._rx + dy / 100.0 * 30.0))


class ChicagoApp(app.App):
    def __init__(self, windowClass):
        app.App.__init__(self, windowClass)

        self._keys = [False for i in range(320)]
        self._x = 15.0
        self._y = 3.0
        self._z = 20.0
        self._rx = -10.0
        self._ry = 60.0
        self._velocity = 10.0
        
        self._freeze = False
        self._showStats = False
        self._debugViewMode = False
        self._wireframeMode = False

        self._animTime = 0.0
        self._cam = 0
        self._statMode = 0

    def _createWindow(self, name):
        w = app.App._createWindow(self, name)
        w.set_exclusive_mouse()
        return w

    def _h3dEngineOptions(self):
        h3d.setOption(h3d.EngineOptions.LoadTextures, 1)
        h3d.setOption(h3d.EngineOptions.TexCompression, 0)
        h3d.setOption(h3d.EngineOptions.MaxAnisotropy, 4)
        h3d.setOption(h3d.EngineOptions.ShadowMapSize, 2048)
        h3d.setOption(h3d.EngineOptions.FastAnimation, 1)

    def _h3dAddResources(self):
        class H3DRes:
            pass

        h3dres = H3DRes()
        self._h3dres = h3dres

        # Pipelines
        h3dres.forwardPipe = h3d.addResource(h3d.ResourceTypes.Pipeline, "pipelines/forward.pipeline.xml", 0)
        h3dres.deferredPipe = h3d.addResource(h3d.ResourceTypes.Pipeline, "pipelines/deferred.pipeline.xml", 0)
        # Overlays
        h3dres.fontMat = h3d.addResource(h3d.ResourceTypes.Material, "overlays/font.material.xml", 0)
        h3dres.panelMat = h3d.addResource(h3d.ResourceTypes.Material, "overlays/panel.material.xml", 0)
        h3dres.logoMat = h3d.addResource(h3d.ResourceTypes.Material, "overlays/logo.material.xml", 0)
        # Shader for deferred shading
        h3dres.lightMat = h3d.addResource(h3d.ResourceTypes.Material, "materials/light.material.xml", 0)
        # Environment
        h3dres.env = h3d.addResource(h3d.ResourceTypes.SceneGraph, "models/platform/platform.scene.xml", 0)
        # Skybox
        h3dres.skyBox = h3d.addResource(h3d.ResourceTypes.SceneGraph, "models/skybox/skybox.scene.xml", 0)
        # Load character animations
        self._crowdSim = CrowdSim()

    def _h3dSetupScene(self):
        h3dres = self._h3dres

        # Add environment
        self._env = h3d.addNodes(h3d.RootNode, h3dres.env)
        h3d.setNodeTransform(self._env, 0, 0, 0, 0, 0, 0, 0.23, 0.23, 0.23)
        # Add skybox
        self._sky = h3d.addNodes(h3d.RootNode, h3dres.skyBox)
        h3d.setNodeTransform(self._sky, 0, 0, 0, 0, 0, 0, 210, 50, 210)
        # Add light source
        self._light = h3d.addLightNode(h3d.RootNode, 'Light1', h3dres.lightMat, 'LIGHTING', 'SHADOWMAP')
        h3d.setNodeTransform(self._light, 0, 20, 50, -30, 0, 0, 1, 1, 1)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.Radius, 200)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.FOV, 90)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.ShadowMapCount, 3)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.ShadowSplitLambda, 0.9)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.ShadowMapBias, 0.001)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_R, 0.9)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_G, 0.7)
        h3d.setNodeParamf(self._light, h3d.LightNodeParams.Col_B, 0.75)
        # Init character positions
        self._crowdSim.init()

        
    def _mainloopUpdate(self, dt):
        app.App._mainloopUpdate(self, dt)

        for w in self._windows:
            h3d.setNodeTransform(w.camera, self._x, self._y, self._z, self._rx, self._ry, 0, 1, 1, 1)
            h3d.setOption(h3d.EngineOptions.DebugViewMode, float(self._debugViewMode))
            h3d.setOption(h3d.EngineOptions.WireframeMode, float(self._wireframeMode))

            key = pyglet.window.key
            curVel = self._velocity * dt
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
            break # we use only exactly ONE window

        if not self._freeze:
            self._crowdSim.update(dt)
            
    def _mainloopRenderOverlays(self, w, dt):
        super(ChicagoApp, self)._mainloopRenderOverlays(w, dt)
        if self._showStats:
            h3d.utils.showFrameStats(self._h3dres.fontMat, self._h3dres.panelMat, self._statMode)
            if self._statMode:
                p = h3d.getNodeParami(self._windows[0].camera, h3d.CameraNodeParams.PipelineRes)
                if p == self._h3dres.forwardPipe:
                    text = "Pipeline(F6): forward"
                else:
                    text = "Pipeline(F6): deferred"
                h3d.utils.showText(text, 0.03, 0.24, 0.026, 1, 1, 1, self._h3dres.fontMat, 5)
                text = "Sims(F1/2): %d, Range(F3/4): %d" % (len(self._crowdSim.particles), self._crowdSim._range)
                h3d.utils.showText(text, 0.03, 0.28, 0.026, 1, 1, 1, self._h3dres.fontMat, 5)

class CrowdSim(object):    
    def __init__(self):
        # Load character with walk animation
        self.character = h3d.addResource(h3d.ResourceTypes.SceneGraph, "models/man/man.scene.xml", 0)
        self.characterWalk = h3d.addResource(h3d.ResourceTypes.Animation, "animations/man.anim", 0)
        self.particles = []
        self.setRange(32)

    def add(self, n):
        # Add characters
        self.particles += [Particle(self, 1.0 * i / n) for i in xrange(n)]
        self.findAllNeighbours()

    def findAllNeighbours(self):
        # find the neighbours of each particle
        self._next = 0
        for p in self.particles:
            p.findNeigbours(self.particles, self._range)

    def init(self):
        # Init random generator
        # Use fixed value for better performance comparisons
        seed(99777)
        self.add(50)
        self.findAllNeighbours()

    def remove(self, n):
        # remove characters
        size = max(1, len(self.particles) - n)
        for p in self.particles[size:]:
            p.remove()
        self.particles = self.particles[:size]
        self.findAllNeighbours()
        
    def setRange(self, range):
        # set the neighbourhood range
        self._range = range
        self.findAllNeighbours()
        
    def update(self, dt):
        # Find new neighbours for one particle
        self.particles[self._next].findNeigbours(self.particles, self._range)
        self._next = (self._next + 1) % len(self.particles)
        # Update all particles
        for p in self.particles: 
            p.update(dt)
            

# Parameters for three repulsion zones
d1 = 0.25 
d2 = 2.0 
d3 = 4.5
dms = d3 * d3

f1 = 3.0
f2 = 1.0
f3 = 0.1

m1 = (f1 - f2) / (0 - d1)
m2 = (f2 - f3) / (d1 - d2)
m3 = (f3 - 0) / (d2 - d3)

t1 = f2 - m1 * d1
t2 = f3 - m2 * d2
t3 = 0 - m3 * d3

class Particle(object):
    animTime = 0
    # Orientation vector
    ox = oz = 0
    # Force on particle
    fx = fy = 0
    # Destination position
    dx = dz = 0
    # Current postition
    px = pz = 0

    def __init__(self, parent, a):
        # Add character to scene and apply animation
        self.node = h3d.addNodes(h3d.RootNode, parent.character)
        h3d.setupModelAnimStage(self.node, 0, parent.characterWalk, "", False)
        # Characters start in a circle formation
        self.px = sin(a * 6.28) * 10.0
        self.pz = cos(a * 6.28) * 10.0
        self.chooseDestination()
        h3d.setNodeTransform(self.node, self.px, 0.02, self.pz, 0, 0, 0, 1, 1, 1)

    def chooseDestination(self):
        # Choose random destination within a circle
        ang = random() * 6.28
        rad = random() * 20.0
        self.dx = sin(ang) * rad
        self.dz = cos(ang) * rad

    def findNeigbours(self, particles, range):
        # find all particles in range
        range *= range
        self.near = []
        for p in particles:
            if p != self:
                x = p.px - self.px
                z = p.pz - self.pz
                if (x * x + z * z) < range:
                    self.near.append(p)
                    
    def remove(self):
        h3d.removeNode(self.node)
        
    def update(self, dt):
        # Calculate distance to destination
        x = self.dx - self.px
        z = self.dz - self.pz
        d = sqrt(x * x + z * z)

        # On arrival choose a new destination for the next step
        if d <= 3.0:
            self.chooseDestination()
            x = self.dx - self.px
            z = self.dz - self.pz
            d = sqrt(x * x + z * z)

        # Calculate normalized attraction force to destination
        self.fx = x * 0.035 / d
        self.fz = z * 0.035 / d

        # Repulsion forces from other nearby particles
        for p in self.near:
            if p == self:
                continue
            x = self.px - p.px
            z = self.pz - p.pz
            d = x * x + z * z
            if d > dms:
                continue
            d = sqrt(d)
            # Use three zones with different repulsion strengths
            if d <= d1:
                s = m1 + t1 / d
            elif d <= d2:
                s = m2 + t2 / d
            else:
                s = m3 + t3 / d
            self.fx += x * s 
            self.fz += z * s
        
        # Make movement frame rate independent
        dt *= 30
        self.fx *= dt
        self.fz *= dt
        
        # Set new position
        self.px += self.fx 
        self.pz += self.fz
        
        # Calculate orientation
        self.ox = (self.ox + self.fx) / 2
        self.oz = (self.oz + self.fz) / 2

        # Get rotation from orientation
        if self.oz == 0:
            ry = 0
        else:
            ry = degrees(atan2(self.ox, self.oz))
        
        # Update character scene node position
        h3d.setNodeTransform(self.node, self.px, 0.02, self.pz, 0, ry, 0, 1, 1, 1)
        
        # Update animation
        vel = sqrt(self.fx * self.fx + self.fz * self.fz)
        self.animTime += vel * 35.0
        h3d.setModelAnimParams(self.node, 0, self.animTime, 1.0)


def main():
    app = ChicagoApp(ChicagoWindow)
    app.init()
    app.mainloop()


if __name__ == '__main__':
    main()

