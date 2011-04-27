module api.h3d.mesh;

class H3DMesh : Mesh {
	string _name;
	Material _mat;
	uint _batchStart;
	uint _batchCount;
	
	public:
	uint lodLevel;
}