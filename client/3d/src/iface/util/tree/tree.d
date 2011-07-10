module util.tree.tree;

interface ITree {
	
	@property ITree child(uint i);
	@property void child(ITree node);
	@property ITree parent();
	@property void parent(ITree node);
	
    Node opBinary(string op)(Stuff rhs) if (op == "~");
    
}