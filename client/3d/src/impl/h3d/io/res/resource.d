module impl.h3d.io.res.resource;

private import std.string;

private import
	impl.h3d.utils,
	impl.nawia.io.res.manager;

abstract class Resource {
	this() {
		//auto tmp = ResManager().resolve("data");
		h3dutLoadResourcesFromDisk("./data".toStringz());
	}
}