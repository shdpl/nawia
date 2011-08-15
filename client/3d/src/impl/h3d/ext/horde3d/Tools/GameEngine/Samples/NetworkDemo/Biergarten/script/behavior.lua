-- behavior.lua
-- Requires the function think()



t = 0.0


function init()
	
	-- Don't set the target here since the particle hasn't respawned yet
	
	respawn( 1 )
	
end


function think()
		
	while true do	
		selectTarget( 1 )
		
		while true do
			if( distFromTarget() < 3 ) then
				respawn( 1 )
				break
			end
			coroutine.yield()
		end
		
		coroutine.yield()
	end
	
end

