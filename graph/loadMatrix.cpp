#include <fstream>
#include <iostream>
#include <limits>
#include "graph.hpp"

bool Graph::loadMatrix(std::string path)
{
    char commentary ='#';
    char checkCharacter;    //need to check if its an commentray
    unsigned short int i=0; //position in adjacencyList
    std::ifstream input(path.c_str());
    if(!input)
    {
        std::cerr << "Can not load \"" << path << "\"" << std::endl;
        return 1;
    }

    int inputInt;
        while (input)
        {
            input >> inputInt;
            if(input.fail())
            {
                input.clear();
                input >> checkCharacter;
                if(checkCharacter!=commentary)   return 1;
                else input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else this->adjacencyList[i].push_back(inputInt);
            if(input.peek()=='\n') ++i;
        }

    input.close();

}
