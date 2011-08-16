require("glfw")
require("Horde3d")

--Configuration
local running = true 
local caption = "Knight - Horde3d Sample"
local appWidth = 800
local appHeight = 600
local fullScreen = false
local mx0=0
local my0=0
local app={}

function degToRad( f ) 
	return f * (3.1415926 / 180.0)
end

Application={}
Application.__index=Application

function Application.create()
   local a = {}             -- our new object
   a.keys={}
   for i = 0,320 do a.keys[i] = false end
   a.x=5
   a.y=3
   a.z=19
   a.rx=7
   a.ry=15
   a.velocity=10
   a.curFPS=30
   a.timer=0
   a.fpsText=""
   a.freeze=false
   a.showFPS=true
   a.debugViewMode=true
   a.wireframeMode=true
   a.animTime=0
   a.weight=1
   a.pipRes=0
   a.fontMatRes=0
   a.logoMatRes=0
   a.hdrPipeRes=0
   a.forwardPipeRes=0
   a.cam=0
   a.knight=0
   a.particleSys=0
   setmetatable(a,Application)  -- make Applicatoin handle lookup
   return a
end

function Application:init()
	if( Horde3d.init()==false ) then
		Horde3dUtils.dumpMessages()
		return false
	end
   
	--Set paths for resources
	Horde3dUtils.setResourcePath( ResourceTypes.SceneGraph, "models" )
	Horde3dUtils.setResourcePath( ResourceTypes.Geometry, "models" )
	Horde3dUtils.setResourcePath( ResourceTypes.Animation, "models" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Material, "materials" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Code, "shaders" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Shader, "shaders" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Texture2D, "textures" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.TextureCube, "textures" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Effect, "effects" ) 
	Horde3dUtils.setResourcePath( ResourceTypes.Pipeline, "pipelines" ) 

	--Set options
	Horde3d.setOption( EngineOptions.LoadTextures, 1 ) 
	Horde3d.setOption( EngineOptions.TexCompression, 0 ) 
	Horde3d.setOption( EngineOptions.FastAnimation, 0 ) 
	Horde3d.setOption( EngineOptions.AnisotropyFactor, 8 ) 
	Horde3d.setOption( EngineOptions.ShadowMapSize, 2048 ) 
   
	--Add resources
	--Pipelines
	self.hdrPipeRes = Horde3d.addResource( ResourceTypes.Pipeline, "hdr.pipeline.xml", 0 )
	self.forwardPipeRes = Horde3d.addResource( ResourceTypes.Pipeline, "forward.pipeline.xml", 0 )

	--Font
	self.fontMatRes = Horde3d.addResource( ResourceTypes.Material, "font.material.xml", 0 )

	--Logo
	self.logoMatRes = Horde3d.addResource( ResourceTypes.Material, "logo.material.xml", 0 )

	--Environment
	local envRes = Horde3d.addResource( ResourceTypes.SceneGraph, "sphere.scene.xml", 0 )

	--Knight
	local knightRes = Horde3d.addResource( ResourceTypes.SceneGraph, "knight.scene.xml", 0 )
	local knightAnim1Res = Horde3d.addResource( ResourceTypes.Animation, "knight_order.anim", 0 )
	local knightAnim2Res = Horde3d.addResource( ResourceTypes.Animation, "knight_attack.anim", 0 )

	--Particle system
	local particleSysRes = Horde3d.addResource( ResourceTypes.SceneGraph, "particleSys1.scene.xml", 0 )

	--Load resources
	Horde3dUtils.loadResourcesFromDisk( ".\Content" ) 

	--Add scene nodes
	--Add camera
	self.cam = Horde3d.addCameraNode( Horde3d.RootNode, "Camera", self.hdrPipeRes )
   
	--Add environment
	local env = Horde3d.addNodes( Horde3d.RootNode, envRes ) 
	Horde3d.setNodeTransform( env, 0, -20, 0, 0, 0, 0, 20, 20, 20 ) 

	--Add knight
	self.knight = Horde3d.addNodes( Horde3d.RootNode, knightRes ) 

	Horde3d.setNodeTransform( self.knight, 0, 0, 0, 0, 180, 0, 0.1, 0.1, 0.1 ) 
	Horde3d.setupModelAnimStage( self.knight, 0, knightAnim1Res, "", false ) 
	Horde3d.setupModelAnimStage( self.knight, 1, knightAnim2Res, "", false ) 
	--Attach particle system to hand joint
	local num=Horde3d.findNodes( self.knight, "Bip01_R_Hand", SceneNodeTypes.Joint )
	local hand = Horde3d.getNodeFindResult( 0 )
	self.particleSys = Horde3d.addNodes( hand, particleSysRes )
	Horde3d.setNodeTransform( self.particleSys, 0, 40, 0, 90, 0, 0, 1, 1, 1 ) 

	--Add light source
	local light = Horde3d.addLightNode( Horde3d.RootNode, "Light1", 0, "LIGHTING", "SHADOWMAP" ) 
	Horde3d.setNodeTransform( light, 0, 15, 10, -60, 0, 0, 1, 1, 1 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.Radius, 30 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.FOV, 90 ) 
	Horde3d.setNodeParami( light,LightNodeParams.ShadowMapCount, 1 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.ShadowMapBias, 0.01 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.Col_R, 1.0 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.Col_G, 0.8 ) 
	Horde3d.setNodeParamf( light,LightNodeParams.Col_B, 0.7 ) 
   
	--Customize post processing effects
	local matRes = Horde3d.findResource( ResourceTypes.Material, "postHDR.material.xml" ) 
	--hdrParams: exposure, brightpass threshold, brightpass offset (see shader for description)
	Horde3d.setMaterialUniform( matRes, "hdrParams", 2.5, 0.5, 0.08, 0 ) 
   
	return true 
end

function Application:mainLoop( fps )
	self.curFPS = fps
	self.timer = self.timer+(1 / fps)

	self:keyHandler()

	Horde3d.setOption( EngineOptions.DebugViewMode, self.debugViewMode and 1.0 or 0.0 )
	Horde3d.setOption( EngineOptions.WireframeMode, self.wireframeMode and 1.0 or 0.0 )
	
	if( self.freeze==false ) then
		self.animTime = self.animTime + ( 1.0 / self.curFPS)

		--Do animation blending
		if(Horde3d.setModelAnimParams( self.knight, 0, self.animTime * 24.0, self.weight )==false) then print("Animation error 1") end
		if(Horde3d.setModelAnimParams( self.knight, 1, self.animTime * 24.0, 1.0 - self.weight )==false) then print("Animation error 2") end

		--Animate particle systems (several emitters in a group node)
		local cnt = Horde3d.findNodes( self.particleSys, "", SceneNodeTypes.Emitter )
		for i = 0, cnt do
			Horde3d.advanceEmitterTime( Horde3d.getNodeFindResult( i ), 1.0 / self.curFPS )
      end
	end
	
	--Set camera parameters
	Horde3d.setNodeTransform( self.cam, self.x, self.y, self.z, self.rx ,self.ry, 0, 1, 1, 1 )
	
	if( self.showFPS ) then
      Horde3dUtils.showFrameStats(self.fontMatRes, self.curFps)
		
		--Show text
		Horde3dUtils.showText( self.fpsText, 0, 0.95, 0.03, 0, self.fontMatRes )

		local text = "Weight: "..self.weight
		Horde3dUtils.showText( text, 0, 0.78, 0.03, 0, self.fontMatRes )
	end

	--Show logo
	Horde3d.showOverlay( 0.75, 0, 0, 0, 1, 0, 1, 0,
						  1, 0.2, 1, 1, 0.75, 0.2, 0, 1,
						  7, self.logoMatRes )
	
	--Render scene
	Horde3d.render( self.cam )

	--Remove all overlays
	Horde3d.clearOverlays()

	--Write all mesages to log file
	Horde3dUtils.dumpMessages()
end

function Application:release()
   Horde3d.release()
end

function Application:resize( width, height )
	--Resize viewport
	Horde3d.resize( 0, 0, width, height )
	
	--Set virtual camera parameters
	Horde3d.setupCameraView(self.cam, 45.0, width / height, 0.1, 1000.0 )
end

function Application:keyPressEvent( key )
	if( key == 32 ) then   --space
		self.freeze = not(self.freeze)
   end

	if( key == 260 ) then	--F3
		if( Horde3d.getNodeParami( self.cam, CameraNodeParams.PipelineRes ) == self.hdrPipeRes ) then
			Horde3d.setNodeParami( self.cam, CameraNodeParams.PipelineRes, self.forwardPipeRes )
		else
			Horde3d.setNodeParami( self.cam, CameraNodeParams.PipelineRes, self.hdrPipeRes )
      end
	end
	
	if( key == 264 ) then	--F7
		self.debugViewMode = not(self.debugViewMode)
   end

   if( key == 265 ) then	--F8
		self.wireframeMode = not(self.wireframeMode)
	end
   
	if( key == 266 ) then	--F9
		self.showFPS = not(self.showFPS)
   end
end

function Application:keyHandler()
	local curVel = self.velocity / self.curFPS
	
	if( self.keys[287]==true) then --LShift
      curVel = curVel * 5 
   end	
	
	if( self.keys[87]==true ) then --Move forward
		self.x = self.x - math.sin( degToRad( self.ry ) ) * math.cos( -degToRad( self.rx ) ) * curVel
		self.y = self.y - math.sin( -degToRad( self.rx ) ) * curVel
		self.z = self.z - math.cos( degToRad( self.ry ) ) * math.cos( -degToRad( self.rx ) ) * curVel
	end

	if( self.keys[83]==true ) then --Move backward
		self.x = self.x + math.sin( degToRad( self.ry ) ) * math.cos( -degToRad( self.rx ) ) * curVel
		self.y = self.y + math.sin( -degToRad( self.rx ) ) * curVel
		self.z = self.z + math.cos( degToRad( self.ry ) ) * math.cos( -degToRad( self.rx ) ) * curVel
	end

	if( self.keys[65]==true )  then --Strafe left
		self.x = self.x + math.sin( degToRad( self.ry - 90) ) * curVel
		self.z = self.z + math.cos( degToRad( self.ry - 90 ) ) * curVel
	end

	if( self.keys[68]==true ) then --Strafe right
		self.x = self.x + math.sin( degToRad( self.ry + 90 ) ) * curVel
		self.z = self.z + math.cos( degToRad( self.ry + 90 ) ) * curVel
	end

	if( self.keys[49] ) then --Change blend weight
		self.weight = self.weight + 2 / self.curFPS
		if( self.weight > 1 ) then self.weight = 1 end
	end
	
	if( self.keys[50] ) then --Change blend weight
		self.weight = self.weight - 2 / self.curFPS
		if( self.weight < 0 ) then self.weight = 0 end
	end
end

function Application:mouseMoveEvent( dX, dY )
	--Look left/right
	self.ry = self.ry - dX / 100 * 30
	
	--Loop up/down but only in a limited range
	self.rx = self.rx + dY / 100 * 30
	if( self.rx > 90 ) then self.rx = 90 end
	if( self.rx < -90 ) then self.rx = -90 end
end

function Application:keyStateChange(key, state )
   if( key >= 0 and key < 320 ) then
      self.keys[key] = state
   end
end

function windowCloseListener()
	running = false 
end

function keyPressListener( key, action )   
	if( running==false ) then 
      return
   end
   
   app:keyStateChange( key, action==glfw.PRESS)

   local switch={}
   switch[glfw.KEY_ESC]=function() running=false end
   switch[glfw.KEY_F1]=function()
      	app:release()
			glfw.CloseWindow()
			
			--Toggle fullscreen mode
			fullScreen = not(fullScreen )

			if( fullScreen ) then
            mode = glfw.GetDesktopMode()
				local aspect = mode.Width / mode.Height
            
				if((aspect * 100) == 133 or (aspect * 100) == 125 ) then --Standard
					width = 1280
               height = 1024
				elseif((aspect * 100) == 160 ) then --Widescreen
					width = 1280
               height = 800
				else	--Unknown,  use desktop resolution
					width = mode.Width
               height = mode.Height
				end
			end
			
			if( not(setupWindow( width, height, fullScreen )) ) then
				glfw.Terminate()
				exit()
			end
			
			app:init()
			app:resize( width, height )
			t0 = glfw.GetTime()
      end
      
   switch.__index=function() app:keyPressEvent(key) end
   setmetatable(switch,switch)
      
	if( action == glfw.PRESS ) then
		switch[key]()
	end
end


function mouseMoveListener( x, y )
	
   if(running==false ) then
		mx0 = x
      my0 = y
	end

	app:mouseMoveEvent(x - mx0, my0 - y )
	mx0 = x
   my0 = y
end

function setupWindow(w, h, fs )
	--Create OpenGL window
  
   if(fs==true) then
      print("making fullscreen app")
      if(glfw.OpenWindow( w, h, 8, 8, 8, 8, 24, 8, glfw.FULLSCREEN)~=glfw.TRUE)  then
         glfw.Terminate() 
         return false
      end
   else
      print("making window app")
      if(glfw.OpenWindow( w, h, 8, 8, 8, 8, 24, 8, glfw.WINDOW)~=glfw.TRUE)  then
         glfw.Terminate() 
         return false
      end
      glfw.SetWindowTitle( caption )
   end

	--Disable vertical synchronization
	glfw.SwapInterval( 0 ) 

	--Set listeners
	glfw.SetWindowCloseCallback( "windowCloseListener" )
	glfw.SetKeyCallback( "keyPressListener" )
	glfw.SetMousePosCallback( "mouseMoveListener" )
	
	return true
end

function main()
   print("GLFW Init")
	if glfw.Init() ~= glfw.TRUE then
        return
    end
    
   print("setupWindow") 
	if(setupWindow( appWidth, appHeight, fullScreen )~=true) then
      return
   end
	
	--Initalize application and engine
	app = Application.create()
	if (app:init()==false ) then
		print("Unable to initalize engine")
		print("Make sure you have an OpenGL 2.0 compatible graphics card")
		glfw.Terminate() 
		return
	end
   
	app:resize( appWidth, appHeight ) 

	--glfw.Disable( glfw.MOUSE_CURSOR ) 

	local frames = 0
	local fps = 30.0
	local t0 = glfw.GetTime() 
   
	--Game loop
	while( running==true ) do
		--Calc FPS
		frames =frames+1
		if( frames >= 3 ) then
			local t = glfw.GetTime()
			fps = frames / (t - t0)
			frames = 0 
			t0 = t 
		end

		--Render
		app:mainLoop( fps ) 
		glfw.SwapBuffers() 
	end

	glfw.Enable( glfw.MOUSE_CURSOR ) 

	--Quit
	app.release() 
	glfw.Terminate() 

	return 0 
end

main()