module h3d.ge.res.resource;

interface H3DResource {
	uint id() @property;
	void id(uint) @property;
}