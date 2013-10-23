#include <graph.hpp>
bool Graph::depthSearch(int poisition, int destination)
{
    if(!this->adjacencyList.size()) return 1;
    --destination;
    this->recursiveDepthSearch(poisition-1, destination);
    return 0;
}

bool Graph::recursiveDepthSearch(int position, int &destination)
{
    /*for(int i=this->adjacencyList[0].size(); i>0; --i)
        this->knot.push_back(false);*/

    if(position == destination); //Prüfe ob wir am Zielpunkt sind!
    else
    {
        for(int i = 0; i < adjacencyList[position].size(); ++i)
        {
            if(adjacencyList[position][i] != 0)
                this->recursiveDepthSearch(i, destination);
        }
    }
    return 0;
}

