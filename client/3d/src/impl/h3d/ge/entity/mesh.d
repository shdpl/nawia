module ge.res.mesh;


import ge.res.h3d,
	ge.res.mesh,
	ge.res.material;

class /*H3DMesh :*/ Mesh {
	string _name;
	H3DMaterial _mat;
	uint _batchStart;
	uint _batchCount;
	
	public:
	uint lodLevel;
}