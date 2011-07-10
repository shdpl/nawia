module ee.actor;

private import
	ee.entity,
	io.hid.controller;

interface IActor : IEntity {
	@property Controller controller();
	@property void controller(Controller controller);
}