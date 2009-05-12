#ifndef DSL_NETWORK_H
#define DSL_NETWORK_H

// {{SMILE_PUBLIC_HEADER}}

#include "generalclases.h"
#include "intarray.h"
#include <vector>

class DSL_node;
class DSL_submodelHandler;
class DSL_errorStringHandler;
class DSL_valueOfInformation;
class DSL_header;
class DSL_idArray;
class DSL_caseManager;
class DSL_simpleCase;
class DSL_temporalArcs;
class DSL_dbnImpl;

enum dsl_temporalType { dsl_normalNode, dsl_anchorNode, dsl_terminalNode, dsl_plateNode };
enum dsl_arcType { dsl_normalArc, dsl_costObserve };

// helper structures

struct DSL_EPISParams
{
	DSL_EPISParams();
	bool IsValid() const;
	bool Equals(const DSL_EPISParams &rhs) const;

	int iPropagationLength;
	int iNumStateSmall;
	int iNumStateMedium;
	int iNumStateBig;
	double dStateSmallEpsil;
	double dStateMediumEpsil;
	double dStateBigEpsil;
	double dStateOtherwise;
};

struct DSL_LBPParams
{
	DSL_LBPParams();
	bool IsValid() const;
	int iPropagationLength;
};

struct DSL_AnnealedMAPParams
{
	DSL_AnnealedMAPParams();
	bool IsValid() const;
	double speed;		// Annealing speed
	double Tmin;		// Mininum temperature
	double Tinit;		// Initial temperature
	double kReheat;	// RFC coefficient
	int kMAP;			// Number of best solutions we want
	double kRFC;		// coefficient for RFC
	int numCycle;		// Number of iterations per cycle;
	int iReheatSteps;	// Number of no-improvement iterations before reheating
	int iStopSteps;	// Number of no-improvement iterations before stopping
};

struct DSL_SimpleGraphLayoutParams
{
	DSL_SimpleGraphLayoutParams();
	bool flowTopDown; // if false, flow goes from left to right
	int percSpacing;  // spacing as percentage of max node width/height
	bool setNodeSizes;
	int nodeWidth;
	int nodeHeight;
};



//////////////////////////////////////////////////////////////////////////////
// class DSL_nodeEntry
//////////////////////////////////////////////////////////////////////////////

//DSL_nodeEntry flags
#define DSL_NODE_CLEAN                   0
#define DSL_NODE_TARGET                  1
#define DSL_NODE_VISITED                 2
#define DSL_NODE_ANCESTOR                4
#define DSL_NODE_DESCENDANT              8
#define DSL_NODE_ORDERED                16
#define DSL_NODE_VISITED_II             32
#define DSL_NODE_VISITED_III            64
#define DSL_NODE_FROM_CHILD            128
#define DSL_NODE_FROM_PARENT           256
#define DSL_NODE_EVIDENCE_TEMP         512
#define DSL_NODE_RELEVANT             1024

#define DSL_NODE_ENTRY_DEFAULT (DSL_NODE_CLEAN)

class DSL_nodeEntry : public DSL_object
{
 public:
  DSL_node     *node;
  DSL_intArray  parents;
  DSL_intArray  children;
  DSL_intArray  parents_observCost;
  DSL_intArray  children_observCost;
  dsl_temporalType temporalType;
  int           flags;
  int			lenFromBottom;

 public:
  DSL_nodeEntry(void);
  DSL_nodeEntry(DSL_nodeEntry &likeThisOne);
 ~DSL_nodeEntry() {CleanUp();}
  void SetTarget(void) {flags |= DSL_NODE_TARGET;}
  void UnSetTarget(void) {flags &= ~DSL_NODE_TARGET;}
  int IsTarget(void) {return(flags & DSL_NODE_TARGET);}
  int operator =(DSL_nodeEntry &likeThisOne);
  int IsMarked(int flag) {if (flag & flags) return(DSL_TRUE); return(DSL_FALSE);}
  int IsMarked(void) {if (flags) return(DSL_TRUE); return(DSL_FALSE);}
  void SetMark(int flag) {flags |= flag;}
  void CleanMark(int flag) {flags &= ~flag;}
  void CleanMark(void) {flags = 0;}
  void CleanUp(int deep = 0);
  void Swap(DSL_nodeEntry &other);
};


//////////////////////////////////////////////////////////////////////////////
// class DSL_network
//////////////////////////////////////////////////////////////////////////////

// some flags
#define DSL_USE_RELEVANCE          1
#define DSL_PROPAGATE_EVIDENCE     2
#define DSL_INVALIDATE_BELIEFS     4
#define DSL_UPDATE_IMMEDIATELY     8

// some flags for relevance
#define DSL_RELEVANCE_ARC_ADDED                      1
#define DSL_RELEVANCE_ARC_REMOVED                    2
#define DSL_RELEVANCE_EVIDENCE_SET                   4
#define DSL_RELEVANCE_EVIDENCE_CLEARED               8
#define DSL_RELEVANCE_PROPAGATED_EVIDENCE_SET       16
#define DSL_RELEVANCE_PROPAGATED_EVIDENCE_CLEARED   32 
#define DSL_RELEVANCE_NUMBER_OF_OUTCOMES_CHANGED    64
#define DSL_RELEVANCE_DISTRIBUTION_CHANGED         128
#define DSL_RELEVANCE_GENERAL_CHANGE               256

#define DSL_DEFAULT_NOISYMAX_RELEVANCE						false 


#define DSL_NETWORK_DEFAULT (DSL_USE_RELEVANCE | DSL_PROPAGATE_EVIDENCE | DSL_INVALIDATE_BELIEFS)

#define DSL_RELEVANCE_STRUCTURE_CHANGED (DSL_RELEVANCE_ARC_ADDED | DSL_RELEVANCE_ARC_REMOVED | DSL_RELEVANCE_NUMBER_OF_OUTCOMES_CHANGED)
#define DSL_RELEVANCE_DEFVAL_CHANGED    (DSL_RELEVANCE_EVIDENCE_SET | DSL_RELEVANCE_EVIDENCE_CLEARED | DSL_RELEVANCE_DISTRIBUTION_CHANGED)

#define DSL_RELEVANCE_DEFAULT           (DSL_RELEVANCE_STRUCTURE_CHANGED | DSL_RELEVANCE_DEFVAL_CHANGED | DSL_RELEVANCE_GENERAL_CHANGE)

class DSL_fileFormat;

class DSL_network : public DSL_object
{
 public:
  DSL_network(void);
  DSL_network(int NumberOfNodes, int initialDelta = 50);
  DSL_network(const DSL_network &likeThisOne);  
  ~DSL_network();
  

  // fast operations
  DSL_network(DSL_network &likeThisOne, bool fast);  
  int FastCopy(DSL_network &likeThisOne);
  int Copy(const DSL_network &likeThisOne, bool removeDbnInfo = false);
  int operator =(const DSL_network &likeThisOne) { return Copy(likeThisOne); }
  
  DSL_header &Header(void);
  DSL_creation &Creation(void) {return(creation);}
  DSL_userProperties &UserProperties(void) {return(userProperties);}
  DSL_documentation  &Documentation(void)  {return(documentation);}
  DSL_submodelHandler &GetSubmodelHandler(void) {return *submodels;}
  DSL_node *GetNode(int theNode) const {if (Ok(theNode)) return(nodes[theNode].node); return(NULL);}
  DSL_intArray &GetParents(int ofThisNode, dsl_arcType layer = dsl_normalArc);
  const DSL_intArray &GetParents(int ofThisNode, dsl_arcType layer = dsl_normalArc) const;
  DSL_intArray &GetChildren(int ofThisNode, dsl_arcType layer = dsl_normalArc); 
  const DSL_intArray &GetChildren(int ofThisNode, dsl_arcType layer = dsl_normalArc) const;

  // For hybrid Bayesian network
  void GetDiscreteParents(int ofThisNode, DSL_intArray &here, dsl_arcType layer = dsl_normalArc);

  int GetNumberOfSamples() const { return numSamples; }
  int SetNumberOfSamples(int aNumber) { numSamples = aNumber; return DSL_OKAY; }

  // inference algorithm selection / control
  void SetDefaultBNAlgorithm(int theAlgorithm);
  void SetDefaultIDAlgorithm(int theAlgorithm);
  void SetDefaultHBNAlgorithm(int theAlgorithm);
  int GetDefaultBNAlgorithm() const { return defaultBNalg; }
  int GetDefaultIDAlgorithm() const { return defaultIDalg; }
  int GetDefaultHBNAlgorithm() const { return defaultHBNalg; }
  void EnableAutoDiscretize(bool enable);
  void EnableZeroAvoidance(bool enable);
  bool IsAutoDiscretizeEnabled() const { return autoDiscretizeEnabled; }
  bool IsZeroAvoidanceEnabled() const { return zeroAvoidanceEnabled; }
  int GetNumberOfDiscretizationSamples() const { return numDiscSamples; }
  void SetNumberOfDiscretizationSamples(int aNumber);

  
    
  int GetNumberOfNodes() const { return numNodes; }
  int AddNode(int thisType, const char *thisId);  
  int DeleteNode(int thisNode);
  int DeleteAllNodes(); 
  int AddArc(int theParent, int theChild, dsl_arcType layer = dsl_normalArc);
  int RemoveArc(int theParent, int theChild, dsl_arcType layer = dsl_normalArc);
  int RemoveAllArcs();
  int AbsorbEvidenceNode(int theParent, int theChild);
  int MarginalizeNode(int theParent, int theChild);

  int RemoveArcsFromParents(int ofThisNode);

  int GetNumberOfTargets() const { return numTargets; }
  int IsTarget(int thisNode);
  int SetTarget(int thisNode);
  int UnSetTarget(int thisNode);
  int ClearAllTargets(void);

  int SelectAllNodes(void);
  int UnselectAllNodes(void);
  int GetSelectedNodes(DSL_intArray &here);
  int ClearAllEvidence(void);
  int ClearAllDecision(void);
  int ClearAllPropagatedEvidence(void);
  int IsThereAnyEvidence(void);
  int IsThereAnyDecision(void);
  int GetFirstNode(void) const;  
  int GetNextNode(int ofThisNode) const;
  int GetLastNode(void) const;
  int Ok(int aNode) const {return(aNode>=0 && aNode<maxNodes && nodes[aNode].node != NULL);}
  int NumParents(int ofThisNode, dsl_arcType layer = dsl_normalArc);
  int NumChildren(int ofThisNode, dsl_arcType layer = dsl_normalArc);
  int Related(int aNode, int anotherNode);
  int IsThisGuyMyParent(int Me, int He) const;
  int IsThisGuyMyChild(int Me, int He, dsl_arcType layer = dsl_normalArc) const;
  int GetAncestors(int theNode, DSL_intArray &here); 
  int GetDescendants(int theNode, DSL_intArray &here); 
  int GetNumOfAncestors(int theNode);
  int GetNumOfDescendants(int theNode);
  int CleanFlag(int theFlag);
  int SetFlag(int theFlag);
  int CleanFlag(void);
  int GetAllNodeIds(DSL_idArray &here);
  int GetAllNodes(DSL_intArray &here) const;
  int GetAllEvidenceNodes(DSL_intArray &here);
  int IsThisIdentifierInUse(const char *theId, int skipThisNode = -1);
  bool OnNodeIdChanging(int handle, const char *oldId, const char *newId);
  int FindNode(const char *withThisID) const;
  int IsPolyTree(void);
  int InDegree(void);
  int IsAcyclic(void);
  int BecomesAcyclic(int theParent, int theChild);
  DSL_intArray &PartialOrdering(void);

  // input/output
  int ReadFile(const char *thisFile, int fileType = 0, void *ext = NULL);
  int WriteFile(const char *thisFile, int fileType = 0, void *ext = NULL);
  
  // to improve load performance of large models, 
  // we postpone some consistency checks during load
  bool IsLoading() const { return 0 != loadTimeFlags; }

  int CreateUniqueNodeIdentifier(char *here);
  void CheckReadiness(int deep = 0);
  void CheckConsistency(int deep = 0);
  void CleanUp(int deep = 0);
  DSL_errorStringHandler &ErrorHandler();

  // inference
  int UpdateBeliefs(void);
  int InvalidateAllBeliefs(void);
  int CallIDAlgorithm(void);
  int CallBNAlgorithm(void);
  int CallEqAlgorithm(void);

  // Changhe Yuan: 10/14/2005
  int CallHBNAlgorithm(void);

  // operations that need relevance called
  int RelevanceEvidenceSet(int thisNode);
  int RelevanceEvidenceCleared(int thisNode);
  int RelevanceArcRemoved(int theParent, int theChild);
  int RelevanceArcAdded(int theParent, int theChild);
  int RelevanceDefinitionChanged(int thisNode, int changeType);
  int RelevanceEvidencePropagated(int thisNode);
  int RelevancePropagatedEvidenceCleared(int thisNode);
  void ActivateRelevance(void) {networkFlags |= DSL_USE_RELEVANCE;}
  void DeactivateRelevance(void)  {networkFlags &= ~DSL_USE_RELEVANCE;}
  // quick dirty patch
  void SetRelevanceLevelFlag(int thisFlag) {relevanceFlags |= thisFlag;}
  void ClearRelevanceLevelFlag(int thisFlag) {relevanceFlags &= ~thisFlag;}
  int  IsRelevanceLevelSet(int thisFlag) {return(relevanceFlags & thisFlag);}
  int  GetRelevanceLevelFlags(void) {return(relevanceFlags);}
  void SetRelevanceLevelFlags(int thisFlags) {relevanceFlags = thisFlags;}

  int ReCreate(int NumberOfNodes, int initialDelta = 50);

  // COST !!
  int AbsorbObservCostArc(int theParent, int theChild);
  // COST !!

  // quick dirty patch
  void SetNetworkFlag(int thisFlag) { networkFlags |= thisFlag; }
  void ClearNetworkFlag(int thisFlag) { networkFlags &= ~thisFlag; }
  int  IsNetworkFlagSet(int thisFlag) const { return networkFlags & thisFlag; }
  int  GetNetworkFlags(void) const {return networkFlags; }

  int ValueOfInformation(DSL_valueOfInformation &here);
  int TemporalOrder(DSL_intArray &here);
  int OrderPartially(DSL_intArray &thisNodes);
  int OrderTemporally(DSL_intArray &thisNodes);

  void SetShowAs(int asThis) {showAs = asThis;}
  int GetShowAs(void) const {return(showAs);}

  void CostPartialOrdering(DSL_intArray &here);
  int OrderPartiallyByCost(DSL_intArray &thisNodes);
  int GetCostDescendants(int theNode, DSL_intArray &here); 
  int MarkCostDescendants(int theNode);
  bool IsGroupCost(int node);

  // Added by Adam 2.23.02
  int ChangeOrderOfParents(int forThisGuy, DSL_intArray &newOrder);

  int SetEPISParams(const DSL_EPISParams &p);
  const DSL_EPISParams& GetEPISParams() const { return episParams;  }

  int SetLBPParams(const DSL_LBPParams &p);
  const DSL_LBPParams& GetLBPParams() const { return lbpParams; }

  int SetAnnealedMAPParams(const DSL_AnnealedMAPParams &p);
  const DSL_AnnealedMAPParams& GetAnnealedMAPParams() const { return annealedMAPParams; }
  int AnnealedMAP(
	const std::vector<std::pair<int,int> > &evidNodes,
	const std::vector<int> &mapNodes,
	std::vector<int> &mapStates, double &probM1E, double &probE, int randSeed = 0);

  int GetDepthOfNet();

  bool CalcProbEvidence(double &pe, bool forceChainRule = false);
  bool CalcProbEvidence_JoinTree(double &pe);
  bool CalcProbEvidence_ChainRule(double &pe);

  // if params is NULL, defaults will be used
  void SimpleGraphLayout(const DSL_SimpleGraphLayoutParams *params = NULL);

  // Adam's noisy-MAX inference algorithm/improvements 11/04
  void EnableNoisyMAXRelevance(bool enable=true) { enableNoisyMAXRelevance = enable; }
  bool IsNoisyMAXRelevanceEnabled() const { return enableNoisyMAXRelevance;}

  // case management added by Mark on 02-22-2005
  DSL_simpleCase * AddCase(const std::string & name);
  DSL_simpleCase * GetCase(int index) const;
  DSL_simpleCase * GetCase(const std::string & name) const;
  int DeleteCase(int index);
  void DeleteAllCases();
  int GetNumberOfCases() const;
  void EnableSyncCases(bool sync);
  bool IsEnableSyncCases() const;

  // dynamic network support
  int UnrollNetwork(DSL_network &unrolled, std::vector<int> &unrollMap) const;
  int GetMaxTemporalOrder() const;
  int GetNumberOfSlices() const;
  int SetNumberOfSlices(int slices);
  int AddTemporalArc(int parent, int child, int order);
  int RemoveTemporalArc(int parent, int child, int order);
  bool TemporalArcExists(int parent, int child, int order) const;
  dsl_temporalType GetTemporalType(int nodeHandle) const;
  int SetTemporalType(int nodeHandle, dsl_temporalType type);
  int GetMaxTemporalOrder(int nodeHandle) const;
  int GetTemporalOrders(int nodeHandle, DSL_intArray &orders) const;
  int GetTemporalChildren(int parent, std::vector<std::pair<int, int> > &children) const;
  int GetTemporalParents(int child, int order, DSL_intArray &parents) const;
  int GetUnrolledParents(int child, int order, std::vector<std::pair<int, int> > &parents) const;
  int GetUnrolledParents(int child, std::vector<std::pair<int, int> > &parents) const;
  DSL_dbnImpl* GetDbn() { return dbn; }
  // DBN - end

  // methods that are forwarded to the case manager and dbn implementation
  // to handle changes in the network, only for internal use for methods in nodedef.h!!!
  void OnTypeChanged(int handle, int prevType);
  void OnOutcomeAdded(int handle, int outcomeIndex);
  void OnOutcomeDeleted(int handle, int outcomeIndex);
  void OnReorderOutcomes(int handle, const DSL_intArray &newOrder);

 protected:
  DSL_creation        creation;       // dates of creation/modification, etc
  DSL_userProperties  userProperties; // user-defined properties... 
  DSL_documentation   documentation;  // documentation for the network 
  DSL_submodelHandler* submodels;     // the submodels frame
  DSL_nodeEntry      *nodes;          // the nodes included in the network.
                                      // The nodes are handled in the NETWORK
  int maxNodes;                       // maximum number of nodes
  int numNodes;                       // number of nodes in the network
  int delta;						  // controls the linear growth of 'nodes' array
 
  int numTargets;                    // number of target nodes in this network.
  int numSamples;                    // Number of samples for sampling functions.
  
  int numDiscSamples;

  int defaultBNalg;                  // Default belief network algorithm.
  int defaultIDalg;                  // Default influence diagram algorithm.
  int defaultHBNalg;                 // Default hybrid Bayesian network algorithm
  bool autoDiscretizeEnabled;
  bool zeroAvoidanceEnabled;

  DSL_intArray thePartialOrdering;   // contains the nodes in Partial Ordering

  int networkFlags;                  // some flags (change this, conflicts with node entry flags)
  int relevanceFlags;                // flags to specify levels of relevance
  int loadTimeFlags;                 // used to improve load time

  int showAs;

  DSL_EPISParams episParams;
  DSL_LBPParams lbpParams;
  DSL_AnnealedMAPParams annealedMAPParams;

  int Grow();
  int FindHole();
  int PartialOrder(int aNode);
  int VisitNeighbor(int thisNode, int fromThisNode);
  int MarkAncestors(int theNode);
  int MarkDescendants(int theNode);
  void AcyclicVisitChildren(int thisNode, int *visited);
  DSL_fileFormat* CreateFileFormat(const char *thisFile, int &fileType);
  int Flush();
  void Initialize();
  void Construct();
  void InitializeNodeValues();
  void FilterByDefinitionFlag(const DSL_intArray &source, int flag, DSL_intArray &dest) const;

  int NodeChanged(int affectedNode);
  void InvalidateControl(int aNode, int fromWhere, int &invalidUtility);
  void InvalidateDecisions();
  int FunctionDetermine(int anEvidenceNode);
  void RecursiveMarkRelevant(int thisNode);

  // COST !!
  DSL_intArray &GetObservCostParents(int ofThisNode);
  DSL_intArray &GetObservCostChildren(int ofThisNode);
  int AddObservCostArc(int theParent, int theChild);
  int RemoveObservCostArc(int theParent, int theChild);
  int CostPartialOrder(int aNode, DSL_intArray &here);
  // COST !!

  DSL_dbnImpl& Dbn() const;

  // Adam's noisy-MAX inference algorithm/improvements 11/04
  bool enableNoisyMAXRelevance;
    
  // case management added by Mark on 02-22-2005
  DSL_caseManager * caseManager;

  DSL_dbnImpl* dbn;
};

#endif 
