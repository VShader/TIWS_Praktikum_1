#include <iostream>
#include <string>
#include "graph.hpp"
#include <Windows.h>
using namespace std;

int main()
{
    Graph test;
    test.fileInput("Adjacency Matrix.txt");
//    test.keyboardInput();
    test.depthSearch(1, 4);
	system("PAUSE");
    return 0;
}
