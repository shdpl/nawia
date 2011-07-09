module ee.player;

private import ge.node.camera,
	ee.actor;

interface Player : Actor {
	@property Camera camera();
	@property void camera(Camera cam);
}