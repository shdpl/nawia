#ifndef DSL_DEFNOISYADDER_H
#define DSL_DEFNOISYADDER_H

// {{SMILE_PUBLIC_HEADER}}

#include "cidefinition.h"
#include "network.h"
#include "node.h"
// this is implementation of noisy-Adder.

#define DSL_NOISYADDER_MIN_STATES 2

class DSL_noisyAdder : public DSL_ciDefinition  
{
public:
  enum Function {fun_average, fun_single_fault};

private:
  int dState;
  DSL_intArray dParentStates;
  DSL_doubleArray parentWeights;
  Function function;

public:
  DSL_noisyAdder(int myHandle, DSL_network *theNetwork);
  DSL_noisyAdder(DSL_nodeDefinition &likeThisOne);
  virtual ~DSL_noisyAdder();
  int GetType() const { return DSL_NOISY_ADDER; } 
  const char* GetTypeName() const { return "NOISY_ADDER"; }

  int ReCreateFromNetworkStructure();
  int GetParentStartingPosition(int parentPos); 
  int operator=(DSL_nodeDefinition &likeThisOne);
  int Clone(DSL_nodeDefinition &thisGuy);
  void CheckConsistency(int deep = 0);

  int GetNumberOfParents() { return network->GetParents(handle).NumItems();} // TODO
  int GetNumOfParentOutcomes(int parentPos) 
  {
    int parent = network->GetParents(handle)[parentPos];
    return network->GetNode(parent)->Definition()->GetNumberOfOutcomes();
  }

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
    
// ====  ciWeights operations ====

  int SetDefinition(DSL_Dmatrix &withThis);
  int SetDefinition(DSL_doubleArray &withThis);
  int CheckCiWeightsConsistency(DSL_Dmatrix &ciWeights, char * errorMsg, int errorMsgBufSize);

//  ==== Converting noisy-adder into CPT distribution ====
  int CiToCpt();
  int CiToCpt(DSL_Dmatrix& ci,DSL_Dmatrix& cpt);

// === Common interface =============
  int AddOutcome(const char *thisName) {return InsertOutcome(GetNumberOfOutcomes(),thisName);} 
  int InsertOutcome(int here, const char *thisName);
  int RemoveOutcome(int outcomeNumber);
  int SetNumberOfOutcomes(int aNumber);
  int SetNumberOfOutcomes(DSL_stringArray &theOutcomeNames);


public:
  int CptToCi() { return DSL_OUT_OF_RANGE; } // It's a subject for the next paper...
  DSL_Dmatrix &GetCpt();
  int CiIndexConstrained(DSL_Dmatrix &ci,int index);
/*
// Methods for relavance
  int AbsorbEvidenceFromParent(int theParent);
  int MarginalizeParent(int theParent);
*/   

  // New nosisy-adder stuff
public:
  int GetDistinguishedState() {return dState; }
  int GetParentDistinguishedState(int parentPos) {return dParentStates[parentPos]; }
  double GetParentWeight(int parentPos) {return parentWeights[parentPos]; }

  DSL_doubleArray& ParentWeights() { return parentWeights; }
  DSL_intArray& ParentDistinguishedStates() {return dParentStates;}

  int SetDistinguishedState(int thisState);
  int SetParentDistinguishedState(int parentPos, int newDState);
  int SetParentWeight(int parentPos, double value);

  int SetFunction(Function val);
  Function GetFunction() {return function;}

  int GetTemporalFunction(int order, Function &val) const;
  int SetTemporalFunction(int order, Function val);

  int GetTemporalDistinguishedState(int order) const;
  int SetTemporalDistinguishedState(int order, int state);

  int GetTemporalParentInfo(int order, DSL_doubleArray &weights, DSL_intArray &distStates) const;
  int SetTemporalParentInfo(int order, const DSL_doubleArray &weights, const DSL_intArray &distStates);

private:
  void DoCopyParameters(DSL_nodeDefinition &target) const;
  int SetInitialParameters(int parentPosition);
  int CiToCptAverage(DSL_Dmatrix& ci,DSL_Dmatrix& cpt);
  int CiToCptSingleFault(DSL_Dmatrix& ci,DSL_Dmatrix& cpt);

  int TemporalHelper(int order, DSL_noisyAdder*& def) const;
};

#endif
