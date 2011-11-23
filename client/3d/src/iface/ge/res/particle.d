module ge.res.particle;

private import
	ge.res.resource;

interface IParticle {
	Duration lifeMin() @property;
	void lifeMin(Duration) @property;
	
	Duration lifeMax() @property;
	void lifeMax(Duration) @property;
	
	//class IMovement
	//class IRotation
	//class IDrag
	//class ISize
}