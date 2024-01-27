#pragma once

#include <string>
#include <vector>

struct Link;

struct State {
    std::string _id;
    std::vector<Link> _links;

    State() = default;
    State(std::string id) : _id(id) {}

    void addLink(Link& l);
    std::string toString();

    bool operator== (const State& s2) const;
};

struct Link {
    State& _nextState;
    char _input;

    Link(State& nextState, char input) : 
                                _nextState(nextState),
                                _input(input) {}

    bool operator== (const Link& l2) const
    {
        if(_nextState._id == l2._nextState._id &&
            _input == l2._input)
        {
            return true;
        }

        return false;
    }
};