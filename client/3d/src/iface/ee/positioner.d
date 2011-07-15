module ee.positioner;

private import type.geometric.circle;

interface IPositioner {
	void init(Circle, bool function()); //TODO: many shapes
	void init(ITexture white_n_black, real scale);
	}