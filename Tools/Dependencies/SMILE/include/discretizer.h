#ifndef DSL_DISCRETIZER_H
#define DSL_DISCRETIZER_H

// {{SMILE_PUBLIC_HEADER}}

#include <vector>
#include <list>

class DSL_doubleArray;

class DSL_discretizer
{
public:
	enum MethodType {Hierarch,UniBinWidth,UniBinCounts};

	DSL_discretizer(const std::vector<float> &data);
	DSL_discretizer(const std::vector<int> &data);
	bool Discretize(int numLevels, MethodType discMethod = Hierarch);
	const std::vector<double> &GetBinEdges() const {return binEdges; }
	const std::vector<double> &GetBinMeans() const {return binMeans; }
	const std::vector<int> &GetDiscretized();

private:
	std::list<std::list<double> > bins;
	std::vector<float> originals; 
	std::vector<double> binEdges;
	std::vector<double> binMeans;
	std::vector<int> discretized;

	int  Hierarchical     (int numLevels, DSL_doubleArray& binLevels, std::vector<double> &binMeans);
	int  UniformBinWidth  (int numLevels, DSL_doubleArray& binLevels, std::vector<double> &binMeans);
	int  UniformBinCounts (int numLevels, DSL_doubleArray& binLevels, std::vector<double> &binMeans);
	double GetMaxOfBin(int ThisOne);
	double GetMinOfBin(int ThisOne);
	void   GetSums  (std::vector<double> &sum, std::vector<double> &numItems);
	void   GetSums  (std::list<double> &sum, std::list<int> &numItems);
	void   GetAves  (DSL_doubleArray& aves);
	void   GetMaxima(DSL_doubleArray& max);
	void   CalculateBinEdges(DSL_doubleArray& binEdges, std::vector<double>& binMeans);
	void   SortBins();
	int  CreateNewBin(double value);
};

#endif
