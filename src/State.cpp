#include "State.hpp"
#include <sstream>

void State::addLink(Link &l)
{
    _links.push_back(l);
}

std::string State::toString()
{
    std::stringstream ss;
    ss << "Node: ID: " << _id << "\n";

    for(auto& l : _links)
    {
        ss << "Link: NextNode: " << l._nextState._id;
        ss << ", Input: " << l._input << "\n";
    }

    return ss.str();
}

bool State::operator== (const State& s2) const
{
    if(this->_id == s2._id && this->_links == s2._links) {
        return true;
    }

    return false;
}