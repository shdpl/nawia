module ee.positioner;

public import type.geometric.circle,
	type.cords.world,
	ge.res.texture;

interface IPositioner {
	void init(Circle!CordsWorld, bool function()); //TODO: many shapes
	void init(ITexture black_n_white, real scale);
}