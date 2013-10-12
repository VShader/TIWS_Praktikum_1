#include <map>
#include <vector>
#include <string>

class Graph
{
public:
//    Graph();
    bool loadMatrix(std::string path);
private:
    std::map<int, std::vector<int> > adjacencyList;
    int edge;
};
