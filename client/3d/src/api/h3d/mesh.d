module api.h3d.mesh;

import horde3d;

class H3DMesh : Mesh {
	string _name;
	Material _mat;
	uint _batchStart;
	uint _batchCount;
	
	public:
	uint lodLevel;
}