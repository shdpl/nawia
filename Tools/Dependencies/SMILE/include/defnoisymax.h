#ifndef DSL_DEFNOISYMAX_H
#define DSL_DEFNOISYMAX_H

// {{SMILE_PUBLIC_HEADER}}

#include "cidefinition.h"
#include <vector>

#define DSL_NOISYMAX_SQUARE_DISTANCE 1
#define DSL_NOISYMAX_KL_DISTANCE 2

// this is implementation of noisy-MAX.
// as native parametrization we use weight[i] = P(Y|Xi), 
// called 'Diez' but this convention is not strict. 
// We DON'T use P(Y|~X1,...,Xi,...,Xn)

class DSL_noisyMAX : public DSL_ciDefinition  
{
private:
 std::vector<DSL_intArray> parentOutcomeStrengths;

public:
  std::vector<DSL_intArray> &GetParentOutcomeStrengths() { return parentOutcomeStrengths; }
  DSL_intArray &GetParentOutcomeStrengths(int parentPos) {return parentOutcomeStrengths[parentPos]; }
  int GetNumOfParentOutcomes(int parentPos) {return parentOutcomeStrengths[parentPos].NumItems(); }
  int GetStrengthOfOutcome(int parentPos, int parentPosOutcome) {return parentOutcomeStrengths[parentPos].FindPosition(parentPosOutcome); }
  int GetOutcomeOfStrength(int parentPos, int outcomeStrength) {return parentOutcomeStrengths[parentPos][outcomeStrength]; }
  int GetNumberOfParents() { return int(parentOutcomeStrengths.size()); }
  int SetParentOutcomeStrengths(int parentPos, DSL_intArray &newStrengths); 

  int GetTemporalParentOutcomeStrengths(int order, std::vector<DSL_intArray>& strengths) const;
  int SetTemporalParentOutcomeStrengths(int order, const std::vector<DSL_intArray>& strengths);

public:
  DSL_noisyMAX(int myHandle, DSL_network *theNetwork);
  DSL_noisyMAX(DSL_nodeDefinition &likeThisOne);
  virtual ~DSL_noisyMAX();
  int GetType() const { return DSL_NOISY_MAX; } 
  const char* GetTypeName() const { return "NOISY_MAX"; }
  int operator=(DSL_nodeDefinition &likeThisOne);
  int Clone(DSL_nodeDefinition &thisGuy);
  void CleanUp(int deep = 0);  
  int ReCreateFromNetworkStructure();
  int GetParentStartingPosition(int parentPos);
  void CheckConsistency(int deep = 0);
  


//  ==== So-called common interface  ====
public:
  int AddParent(int theParent);
  int RemoveParent(int theParent);
// methods to deal with changes in the definition of my parents
  int DaddyGetsBigger(int daddy, int thisPosition);
  int DaddyGetsSmaller(int daddy, int thisPosition);
  int DaddyChangedOrderOfOutcomes(int daddy, DSL_intArray &newOrder);
  int OrderOfParentsGetsChanged(DSL_intArray &newOrder);

// Order of states routines
  int ChangeOrderOfOutcomes(DSL_intArray &newOrder);
  int ChangeOrderOfStrengths(int parentPos,const DSL_intArray &newOrder);

// ====  ciWeights operations ====
  int SetDefinition(DSL_Dmatrix &withThis);
  int SetDefinition(DSL_doubleArray &withThis);
  int CheckCiWeightsConsistency(DSL_Dmatrix &ciWeights, char * errorMsg, int errorMsgBufSize);

//  ==== Converting noisy-MAX into Henrion parametrization ====
  int GetHenrionProbabilities(DSL_Dmatrix &henrion);
  int SetHenrionProbabilities(DSL_Dmatrix &henrion);
  int CheckHenrionConsistency(DSL_Dmatrix &henrion, char * errorMsg, int errorMsgBufSize, int &errRow, int &errCol, bool &leakInconsistent);

//  ==== Converting noisy-MAX into CPT distribution ====
  int CiToCpt();
  int CiToCpt(DSL_Dmatrix& ci,DSL_Dmatrix& cpt);

//  ==== Converting CPT to noisy-MAX distribution ====
public:
  int CptToCi() { return SquareCptToCi(table,ciWeights,1/(double)GetNumberOfOutcomes(),0.0001); }
  int CiIndexConstrained(DSL_Dmatrix &ci,int index);
  bool IsNonZero(DSL_Dmatrix& cpt) const;

  // Square distance routines
  double SquareDistance(DSL_Dmatrix& cptA, DSL_Dmatrix& cptB) const;
  int SquareCptToCi(DSL_Dmatrix& cpt,DSL_Dmatrix& ci,double step, double minStep);

  // Kullback-Leibler distance routines
  double KLDistance(DSL_Dmatrix& cptReal, DSL_Dmatrix& cptApprox) const;
  int KLCptToCi(DSL_Dmatrix& cpt,DSL_Dmatrix& ci,double step, double minStep);

// Part Added during transition noisyOR/AND -> noisyMAX
  int SetLegacyNoisyOrProbabilities(DSL_doubleArray &legacyWeights);
  int GetLegacyNoisyOrProbabilities(DSL_doubleArray &legacyWeights);
  int CalculateCptColumn(const DSL_intArray &coordinates, DSL_doubleArray &here); 
  DSL_Dmatrix &GetCpt();

// Methods for relavance
  int AbsorbEvidenceFromParent(int theParent);
  int MarginalizeParent(int theParent);

private:
  double SquareCiToCptSingleStep(DSL_Dmatrix& ci,DSL_Dmatrix& cpt,int index,double step);
  double KLCiToCptSingleStep(DSL_Dmatrix& ci,DSL_Dmatrix& cpt,int index,double step, bool undo = true);
  int SetInitialParameters(int parentPosition);
  void DoCopyParameters(DSL_nodeDefinition &target) const;

   
#ifdef _DEBUG
// TODELETE
public:
  void Show();
  void ShowCi(DSL_Dmatrix&);
  void ShowCpt(DSL_Dmatrix&);
#endif
};

#endif 
