module ee.map.extractormesh;

interface IMeshExtractor {
	
	void init(IVolume, ICamera);
	
	IMesh extract(WorldPos);
}