#include <fstream>
#include "graph.hpp"

void Graph::loadMatrix(std::string path)
{
    std::ifstream input(path.c_str());
    input.close();
}
