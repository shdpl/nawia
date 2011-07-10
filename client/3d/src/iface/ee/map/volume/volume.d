module ee.map.volume.volume;

public import type.cords.world;

interface IVolume {
	
	void init(Rect!CordsWorld);
	
	@property Rect!CordsWorld region();
	@property void region(Rect!CordsWorld);
	
	@property UnitWorld width();
	@property void width(UnitWorld);
	
	@property UnitWorld height();
	@property void height(UnitWorld);
	
	@property UnitWorld depth();
	@property void depth(UnitWorld);
	
	///voxel[x][y][z]
	///voxel[VectorWorld]
	override IVoxel opDispatch(string m, args...)();
	
}