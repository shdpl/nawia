module util.tree.tree;

interface Tree {
	
	@property Tree child(uint i);
	@property void child(Tree node);
	@property Tree parent();
	@property void parent(Tree node);
	
    Node opBinary(string op)(Stuff rhs) if (op == "~");
    
}