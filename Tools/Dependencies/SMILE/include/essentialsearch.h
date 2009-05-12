#ifndef DSL_ESSENTIAL_SEARCH_H
#define DSL_ESSENTIAL_SEARCH_H

// {{SMILE_PUBLIC_HEADER}}

#include <vector>
#include <utility>

class DSL_network;
class DSL_dataset;

class DSL_essentialSearch
{
public:
	DSL_essentialSearch()
	{
        maxAdjacency = 8;
        minSignificance = 0.01;
        maxSignificance = 0.1;
        restarts = 1000;
        maxSearchTime = 0;
	}

	int Learn(const DSL_dataset &data, DSL_network &net);
	
    int maxAdjacency;
    int restarts;
    int maxSearchTime;
    double minSignificance;
    double maxSignificance;

	typedef std::vector<std::pair<int, int> > IntPairVector;
	IntPairVector forcedArcs;
	IntPairVector forbiddenArcs;
	IntPairVector tiers;
};

#endif
