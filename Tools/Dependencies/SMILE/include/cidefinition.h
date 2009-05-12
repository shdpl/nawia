#ifndef DSL_CIDEFINITION_H
#define DSL_CIDEFINITION_H

// {{SMILE_PUBLIC_HEADER}}

#include "nodedef.h"
#include "idarray.h"
#include "dmatrix.h"

// FLAGS
#define DSL_CI_EXPANDED_CPT      1
#define DSL_CI_KEEP_IN_SYNC      2
#define DSL_CI_DEFAULT_FLAGS     0

#define DSL_NOISYMAX_MIN_STATES 2

class DSL_ciDefinition : public DSL_nodeDefinition  
{
public:
  DSL_ciDefinition(int myHandle, DSL_network *theNetwork);
  DSL_ciDefinition(DSL_nodeDefinition &likeThisOne);
  virtual ~DSL_ciDefinition();

  void CleanUp(int deep = 0);
  void CheckReadiness(int deep = 0);
  void CheckConsistency(int deep = 0);
  int CheckParentsStructure();

  // synchronization of cpt 
  int IsExpanded()            {return (ciFlags & DSL_CI_EXPANDED_CPT);}
  int KeepSynchronized()    {return (ciFlags & DSL_CI_KEEP_IN_SYNC);}

  void SetKeepSynchronized();  
  void SetDontKeepSynchronized();  
   
  virtual int CiToCpt() = 0; 
  virtual int CptToCi() = 0; 

  virtual DSL_Dmatrix &GetCpt() = 0;
  DSL_Dmatrix &GetCiWeights();

  const DSL_Dmatrix* GetTemporalCiWeights(int order) const;
  int SetTemporalCiWeights(int order, const DSL_Dmatrix& weights);

  int GetCiFlags() {return ciFlags;} 

  int AddParent(int theParent) = 0;
  int RemoveParent(int theParent) = 0;
  // methods to deal with changes in the definition of my parents
  int DaddyGetsBigger(int daddy, int thisPosition) = 0;
  int DaddyGetsSmaller(int daddy, int thisPosition) = 0;

  // outcome part
  int AddOutcome(const char *thisName) {return InsertOutcome(GetNumberOfOutcomes(),thisName);} 
  int InsertOutcome(int here, const char *thisName);
  int RemoveOutcome(int outcomeNumber);
  int GetNumberOfOutcomes()  {return nameStates.NumItems();}
  int RenameOutcome(int outcomeNumber, char *newName);
  int RenameOutcomes(DSL_stringArray &theOutcomeNames);
  DSL_idArray *GetOutcomesNames(void) {return &nameStates;}
  int SetNumberOfOutcomes(int aNumber);
  int SetNumberOfOutcomes(DSL_stringArray &theOutcomeNames);

  int GetSize() { return GetCpt().GetSize(); }
  int GetDefinition(DSL_Dmatrix **here)        {*here = &GetCpt(); return(DSL_OKAY);};
  int GetDefinition(DSL_doubleArray **here)    {*here = &GetCpt().GetItems(); return(DSL_OKAY);};

protected:
  void SetExpanded()          { ciFlags |= DSL_CI_EXPANDED_CPT; }
  void SetNotExpanded()       { ciFlags &= ~DSL_CI_EXPANDED_CPT; }

  void DoCopyParameters(DSL_nodeDefinition &target) const;

  void CptToCumulativeCpt(DSL_Dmatrix &cpt);
  void CiToCumulativeCi(DSL_Dmatrix &ci);
  void CumulativeCptToCpt(DSL_Dmatrix &cpt);
  void CumulativeCiToCi(DSL_Dmatrix &ci);

  DSL_idArray nameStates;
  DSL_Dmatrix table;
  DSL_Dmatrix ciWeights; // causal independent parameters 
  int ciFlags; 
};

#endif 
