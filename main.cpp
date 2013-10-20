#include <iostream>
#include <string>
#include "graph.hpp"
using namespace std;

int main()
{
    Graph test;
//    test.fileInput("Adjacency Matrix.txt");
    test.keyboardInput();
    test.recursivDephSearch(1);
    return 0;
}
