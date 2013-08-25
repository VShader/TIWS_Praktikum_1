#include <fstream>
#include <iostream>
#include "graph.hpp"

void Graph::loadMatrix(std::string path)
{
    std::ifstream input(path.c_str());
    std::string inputString;

    while (input.good())
        {
          getline (input, inputString);

          //Erase all commentarys
          std::size_t commentary = inputString.find('#');
          if(commentary != std::string::npos)
              inputString.erase(inputString.begin()+commentary,
                                inputString.end());

          std::cout << inputString << std::endl;
        }

    input.close();

}
