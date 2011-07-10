module ee.map.ray;

public import type.cords.world;

interface IRaycaster {
	
	@property void init(WorldCords source);
	
	@property WorldCords source();
	@property void source(WorldCords);
	
	@property WorldVector direction();
	@property void direction(WorldCords);
	
	struct Ray {
		Voxel intersection;
	}
}

