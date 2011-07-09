module ee.actor;

private import
	ee.entity,
	io.hid.controller;

interface Actor : Entity {
	@property Controller controller();
	@property void controller(Controller controller);
}