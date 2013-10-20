#include <graph.hpp>

bool Graph::recursiveDepthSearch(int position, int destination)
{
    if(!this->adjacencyList.size()) return 1;
    for(int i=this->adjacencyList[0].size(); i>0; --i)
        this->knot.push_back(false);

    return 0;
}
