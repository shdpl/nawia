module api.h3d.mesh;

import horde3d;

import api.h3d.mesh,
	api.h3d.material;

class /*H3DMesh :*/ Mesh {
	string _name;
	Material _mat;
	uint _batchStart;
	uint _batchCount;
	
	public:
	uint lodLevel;
}