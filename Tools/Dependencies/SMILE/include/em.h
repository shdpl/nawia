#ifndef DSL_EM_H
#define DSL_EM_H

// {{SMILE_PUBLIC_HEADER}}

/* This class implements the EM algorithm.
 *
 * The equivalent sample size determines the weight of the network
 * against the data. An equivalent sample size of 100, means that
 * the current parameters in the network are based on 100 cases.
 * A typical equivalent sample size is 0, this means that the current
 * parameters have no weight and will be overwritten.
 *
 * The variables in the network and data set should be all discrete or all continuous.
 */

#include "dataset.h"

class DSL_network;

class DSL_learnProgress
{
public:
	// return false from Tick to stop the learning
	virtual bool Tick() = 0;
};

class DSL_em
{
public:
	DSL_em() : eqSampleSize(0), randParams(true), relevance(false) {}
    
	int Learn(const DSL_dataset& ds, DSL_network& orig, const std::vector<DSL_datasetMatch> &matches, const std::vector<int> &fixedNodes, DSL_learnProgress *progress = 0);
	int Learn(const DSL_dataset& ds, DSL_network& orig, const std::vector<DSL_datasetMatch> &matches, DSL_learnProgress *progress = 0);
	
	void SetEquivalentSampleSize(int eqs) { eqSampleSize = eqs; }
	int GetEquivalentSampleSize() const { return eqSampleSize; }
	void SetRandomizeParameters(bool r) { randParams = r; }
	bool GetRandomizeParameters() const { return randParams; }
	void SetRelevance(bool r) { relevance = r; }
	bool GetRelevance() { return relevance; }
    
private:
	int LearnDisc(const DSL_dataset& ds, DSL_network& orig, const std::vector<DSL_datasetMatch> &matches, const std::vector<int> &fixedNodes, DSL_learnProgress *progress = 0);
	int LearnCont(const DSL_dataset& ds, DSL_network& orig, const std::vector<DSL_datasetMatch> &matches, const std::vector<int> &fixedNodes, DSL_learnProgress *progress = 0);
    
	int eqSampleSize;
	bool randParams;
	bool relevance;
};

#endif
