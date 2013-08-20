#include <map>
#include <vector>
#include <string>

template <class T>
class Graph
{
public:
    Graph();
    void loadMatrix(std::string &path);
private:
    std::map<int, std::vector<T> > adjacencyMatrix;
};
