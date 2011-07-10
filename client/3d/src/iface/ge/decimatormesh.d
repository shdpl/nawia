module ee.map.decimatormesh;

import ge.entity.mesh;

interface IDecimatorMesh {
	void init(float threshold);
	
	bool decimate(IMesh);
}