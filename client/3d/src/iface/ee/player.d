module ee.player;

private import ge.node.camera,
	ee.actor;

interface IPlayer : IActor {
	@property Camera camera();
	@property void camera(Camera cam);
}