module impl.h3d.io.res.resource;

private import impl.h3d.utils,
	impl.nawia.io.res.manager;

abstract class H3DResource {
	this() {
		h3dutLoadResourcesFromDisk(ResManager().resolve("data"));
	}
}