#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <map>
#include <vector>
#include <string>
#include <fstream>

class Graph
{
public:
//    Graph();
    bool fileInput(std::string path);
    bool keyboardInput();
private:
    std::map<int, std::vector<int> > adjacencyList;
    int edge;

    bool loadMatrix(std::istream &input, unsigned int &pos);
    bool deleteCommentary(std::istream &input);
};

#endif // GRAPH_HPP
