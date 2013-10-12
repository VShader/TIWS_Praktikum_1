#include <iostream>
#include <limits>
#include "graph.hpp"

bool Graph::fileInput(std::string path)
{
    std::ifstream input(path.c_str());
    if(!input)
    {
        std::cerr << "Can not load \"" << path << "\"" << std::endl;
        return 1;
    }
    for(unsigned int pos=0; input;)
    {
        if(this->loadMatrix(input, pos))
        {
            this->adjacencyList.clear();
            input.close();
            return 1;
        }
    }
    input.close();
    return 0;
}


bool Graph::keyboardInput()
{
    this->adjacencyList.clear();
    for(unsigned int pos=0; std::cin;)
    {
        if(this->loadMatrix(std::cin, pos))
        {
            char quit='q';
            char test;
            std::cin >> test;
            if(test!=quit)
            {
                std::cerr << "Wrong Character only Integer are allowed!!!\n";
                return 1;
            }
            else return 0;
        }
    }
    return 0;
}


bool Graph::loadMatrix(std::istream &input, unsigned int &pos)
{
    int inputInt;

    input >> inputInt;
    if(input.fail())
    {
        if(input.eof()) return 0;
        else if(this->deleteCommentary(input)) return 1;
    }
    else if(input.bad()) return 1;
    else this->adjacencyList[pos].push_back(inputInt);
    if(input.peek()=='\n') ++pos;
    return 0;
}


bool Graph::deleteCommentary(std::istream &input)
{
    char commentary ='#';
    char checkCharacter;    //need to check if its an commentray

    input.clear();
    input >> checkCharacter;
    if(checkCharacter!=commentary)
    {
        input.putback(checkCharacter);
        return 1;
    }
    else
    {
        input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 0;
    }
}
