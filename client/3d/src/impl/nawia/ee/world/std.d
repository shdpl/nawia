module impl.nawia.ee.world.std;

private import
	ee.world,
	util.idmanager,
	std.exception;
	
public import
	ee.entity;
	
	
/**
	Single-threaded entity world.

	Conceptually EEWorld serves as thread-safe interface to individual subsystems.
	It's also root of object available for scripts.
 */
class EEWorldStd : World
{
	private:
	mixin InjectIdManager!hEntity _idManager;
	World[hash_t] _worlds;
	public:
	Entity[] entity;
	immutable hEntity root = 0;
	
	this()
	{
		entity.length = 0xff;
		entity ~= Entity(0, "root");
		_idManager.maxId++;
	}
	
	public:
	void add(T)(T world) if (is (T : World))
	{
		auto idx = typeid(world).toHash();
		assert(idx !in _worlds);
		_worlds[idx] = world;
	}
	
	T get(T)() if (is (T : World))
	{
		auto idx = typeid(T).toHash();
		assert(idx in _worlds);
		return cast(T) _worlds[idx];
	}
	
	hEntity add(Entity)(hEntity parent, string name = "")
	{
		auto ret = _idManager.add();
		if (entity.length <= ret)
		{
			entity.length *= 2;
		}
		entity[ret] = Entity(parent, name);
		return ret;
	}
	
	const(Entity*) getR(hEntity h)
	{
		return &entity[h];
	}
	
	Entity* getRW(hEntity h)
	{
		return &entity[h];
	}
	
	void release(hEntity) {};
}