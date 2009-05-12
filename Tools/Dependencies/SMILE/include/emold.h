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
 * All variables should be discrete, both in the dataset and in the network!
 */

class DSL_dataset;
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
	DSL_em()
	{
		eqSampleSize = 0;
		randParams = true;
	}

	int Learn(const DSL_dataset& dataset, DSL_network& network, DSL_learnProgress *progress = 0);
	
	void SetEquivalentSampleSize(int eqs) { eqSampleSize = eqs; if (0 != eqs) randParams = false; }
	int GetEquivalentSampleSize() const { return eqSampleSize; }
	void SetRandomizeParameters(bool r) { randParams = r; if (randParams) eqSampleSize = 0; }
	bool GetRandomizeParameters() const { return randParams; }

private:
	int eqSampleSize;
	bool randParams;
};

#endif
