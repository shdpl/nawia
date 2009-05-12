#ifndef DSL_NAIVEBAYES_H
#define DSL_NAIVEBAYES_H

// {{SMILE_PUBLIC_HEADER}}

#include <string>

class DSL_network;
class DSL_dataset;

class DSL_naiveBayes
{
public:
	DSL_naiveBayes()
	{
		priors = K2;
		featureSelection = false;
		classVariableId = "class";
		netWeight = 1.0;
	}

	int Learn(const DSL_dataset &data, DSL_network &net);

	enum PriorsType {K2, BDeu};
	
	PriorsType priors;
	bool featureSelection;
	std::string classVariableId;
	double netWeight;
};

#endif
