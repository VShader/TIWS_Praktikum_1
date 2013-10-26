#include "graph.hpp"
#include <iostream>

bool Graph::depthSearch(int position, int destination)
{
    if(!this->adjacencyList.size()) return 1;
    --destination;
    this->knot.push_back(position);
    this->recursiveDepthSearch(position-1, destination);
    this->knot.pop_back();
    return 0;
}

bool Graph::recursiveDepthSearch(int position, int &destination)
{
    /*for(int i=this->adjacencyList[0].size(); i>0; --i)
        this->knot.push_back(false);*/

    if(position == destination) //Prüfe ob wir am Zielpunkt sind!
    {
        for(int i = 0; i < this->knot.size(); ++i)  //Print path.
        {
            std::cout << this->knot[i] << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        for(int i = 0; i < adjacencyList[position].size(); ++i)
        {
            if(adjacencyList[position][i] != 0)
            {
                this->knot.push_back(i+1);
                this->recursiveDepthSearch(i, destination);
                this->knot.pop_back();
            }
        }
    }
    return 0;
}

