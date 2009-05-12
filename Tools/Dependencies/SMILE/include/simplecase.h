#ifndef DSL_SIMPLECASE_H
#define DSL_SIMPLECASE_H

// {{SMILE_PUBLIC_HEADER}}

#include <string>
#include <utility>
#include <vector>

class DSL_intArray;
class DSL_network;

class DSL_simpleCase
{
public:
    typedef std::vector<std::pair<int, int> > TemporalEvidence; // (slice, outcome)

    DSL_simpleCase(DSL_network & network);
    DSL_simpleCase(DSL_network & network, const DSL_simpleCase & original);

    const std::string& GetName() const { return name; }
	int SetName(const std::string& name);
    const std::string& GetDescription() const { return description; }
	void SetDescription(const std::string& description);
    const std::string& GetCategory() const { return category; }
	void SetCategory(const std::string& category);

    time_t GetCreated() const { return created; }
    void SetCreated(time_t t) { created = t; }
    time_t GetLastModified() const { return lastModified; }
    void SetLastModified(time_t t) { lastModified = t; } 

    // methods for evidence
    int GetNumberOfEvidence() const { return int(evidence.size()); }
    
    int AddEvidence(int handle, int outcome);
    int AddEvidence(int handle, double outcome);
    int AddEvidence(int handle, const TemporalEvidence & te);
    int AppendTemporalEvidence(int handle, int outcome, int slice);
    
    int RemoveEvidence(int index);
    int RemoveEvidenceByHandle(int handle) { return RemoveEvidence(HandleToIndex(handle)); }

    int SetEvidence(int index, int outcome);
    int SetEvidence(int index, double outcome);
    int SetEvidence(int index, const TemporalEvidence & te);
    int SetEvidenceByHandle(int handle, int outcome) { return SetEvidence(HandleToIndex(handle), outcome); }
    int SetEvidenceByHandle(int handle, double outcome) { return SetEvidence(HandleToIndex(handle), outcome); }
    int SetEvidenceByHandle(int handle, const TemporalEvidence &te) { return SetEvidence(HandleToIndex(handle), te); }

    int GetHandle(int index) const;
    int FindNode(int handle) const { return HandleToIndex(handle); }
    int GetEvidence(int index, int &handle, int &outcome) const;
    int GetEvidence(int index, int &handle, double &outcome) const;
    int GetEvidence(int index, int &handle, TemporalEvidence &te) const;
    int GetEvidenceByHandle(int handle, int &outcome) const { int unused; return GetEvidence(HandleToIndex(handle), unused, outcome); }
    int GetEvidenceByHandle(int handle, double &outcome) const { int unused; return GetEvidence(HandleToIndex(handle), unused, outcome); }
    int GetEvidenceByHandle(int handle, TemporalEvidence &te) const { int unused; return GetEvidence(HandleToIndex(handle), unused, te); }

    // target methods
    int AddTarget(int handle);
    void RemoveTarget(int handle);
    int GetTarget(int index) const;
    bool IsTarget(int handle) const;
    int GetNumberOfTargets() const { return int(targets.size()); }
    void SetTargets(const std::vector<int> &nodes) { targets = nodes; }

    // case <-> network
    void CaseToNetwork();
    void NetworkToCase();

    // methods that are called when changes in the network occur
    void OnTypeChanged(int handle, int prevType);
    void OnTemporalTypeChanged(int handle, int prevTemporalType);
    void OnNodeDeleted(int handle);
    void OnOutcomeAdded(int handle, int outcomeIndex);
    void OnOutcomeDeleted(int handle, int outcomeIndex);
    void OnReorderOutcomes(int handle, const DSL_intArray &newOrder);
    
private:
    bool ValidateIndex(int index) const;
    bool ValidateOutcomeIndex(int handle, int outcomeIndex) const;
    int HandleToIndex(int handle) const;
    int AddEvidenceHelper(int handle);

    DSL_network&        network;      // the network to act on
    std::string         name;         // name of the case, is unique in a case manager
    std::string         description;
    std::string         category;
    time_t              created;
    time_t              lastModified;

    std::vector<int>    targets;      // handles of target nodes

    struct Item
    {
        Item(int h) : handle(h), discrete(-1), continous(0) {}
        int handle;
        int discrete; // discrete
        double continous; // continous
        TemporalEvidence temporal; // slice, outcome index
    };
    std::vector<Item> evidence;    // evidences that are set
};

#endif
