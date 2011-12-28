module util.idmanager;

protected import
	std.array,
	std.algorithm;

mixin template InjectIdManager(IdType)
{
	IdType maxId;
	IdType[] freeIds;
	
	IdType add()
	{
		if (freeIds.empty)
		{
			assert(maxId < IdType.max);
			return maxId++;
		}
		auto ret = freeIds.back;
		freeIds.popBack;
		return ret;
	}
	
	void del(IdType id)
	{
		assert(find(freeIds, id) == []);
		freeIds ~= id;
	}
}