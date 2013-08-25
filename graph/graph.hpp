#include <map>
#include <vector>
#include <string>

class Graph
{
public:
//    Graph();
    void loadMatrix(std::string path);
private:
    std::map<int, std::vector<char> > adjacencyMatrix;
    int edge;
};
