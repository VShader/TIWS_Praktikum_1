#include <iostream>
#include <string>
#include "graph.hpp"
using namespace std;

int main()
{
    Graph test;
    test.fileInput("Adjacency Matrix.txt");
//    test.keyboardInput();
    test.depthSearch(1, 4);
    return 0;
}
