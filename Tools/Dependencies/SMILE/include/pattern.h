#ifndef DSL_PATTERN_H
#define DSL_PATTERN_H
// {{SMILE_PUBLIC_HEADER}}
#include <vector>
class DSL_network;
class DSL_dataset;
class DSL_pattern
{
public:
    enum EdgeType {None,Undirected,Directed};
    int GetSize() const;
    void SetSize(int size);
    EdgeType GetEdge(int from, int to) const;
    void SetEdge(int from, int to, EdgeType type);
    bool HasDirectedPath(int from, int to) const;
    bool HasCycle() const;
    bool IsDAG() const;
    bool ToDAG(const DSL_dataset &ds, DSL_network &net) const;
    bool HasIncomingEdge(int to) const;
    bool HasOutgoingEdge(int from) const;
    void Print() const;
private:
    std::vector<std::vector<EdgeType> > mat;
};
#endif
