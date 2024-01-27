#include "FiniteAutomata.hpp"

State FiniteAutomata::getNextNode(State currentNode, char input) 
{
    for(auto& link: currentNode._links)
    {
        if(input == link._input)
        {
            return link._nextState;
        }
    }

    return State();
}

bool FiniteAutomata::isAccepted(std::string str) 
{
    State node = initialState;

    for(auto& c : str) {
        node = getNextNode(node, c);

        if(node._id.empty() && node._links.size() == 0) {
            return false;
        }
    }

    return (node == finalState);
}