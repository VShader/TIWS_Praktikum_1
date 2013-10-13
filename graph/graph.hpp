#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <map>
#include <vector>
#include <string>
#include <fstream>

/*!
 * \brief The Graph class
 */
class Graph
{
public:
//    Graph();
    /*!
     * \brief fileInput
     * \param path to file
     * \return succes if 0 else something went wrong
     */
    bool fileInput(std::string path);
    /*!
     * \brief keyboardInput
     * \return succes if 0 else something went wrong
     */
    bool keyboardInput();
private:
    /*!
     * \brief adjacencyList
     */
    std::map<int, std::vector<int> > adjacencyList;

    /*!
     * \brief readEdge
     * \param input an istream for input
     * \param pos   tho row of the adjacencyList
     * \return succes if 0 else something went wrong
     */
    bool readEdge(std::istream &input, unsigned int &pos);
    /*!
     * \brief deleteCommentary
     * \param input an istream for input
     * \return succes if 0 else something went wrong or quit
     */
    bool deleteCommentary(std::istream &input);
};

#endif // GRAPH_HPP
