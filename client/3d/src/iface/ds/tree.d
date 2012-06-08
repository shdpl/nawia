module ds;

mixin template InjectTreeNode()
{
	T parent;
	static if( size != 0)
	{
		T child[n];
	} else {
		T child[];
	}
	
//	int opApply(scope int delegate(ref T) dg)
//	{
		
//	}
}

bool isTreeNode(T)(T what)
{
	auto t = typeof(what);
	
	if (!hasMember(t, "parent"))
	{
		return false;
	}
	
	if (!hasMember(t, "child") || !isArray(what.child))
	{
		return false;
	}
	
	
	return true; //TODO
}
