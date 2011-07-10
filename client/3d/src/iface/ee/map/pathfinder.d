module ee.map.pathfinder;

interface IPathfinder {
	void init(PathfinderArgs);
	
	/// Returns normalized vector representing direction to go
	VecWorld query();
	
	
	struct PathFinderArgs {
		bool function(PosWorld) pathableChecker;
		
		IVolume volume;
		
		/// Points to visit
		PosWorld[] points;
		
		bool diagonalSupported;
		}
}