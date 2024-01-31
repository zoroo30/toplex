#pragma once
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "State.hpp"

class FiniteAutomata {
protected:
    State initialState;
    State finalState;
    std::vector<State> states;  

public:
    virtual ~FiniteAutomata() = default;
    FiniteAutomata(State initial, State final, std::vector<State> states) :
                                            initialState(initial),
                                            finalState(final),
                                            states(states) {}

    State getNextNode(State currentNode, char input);
    bool isAccepted(std::string str);
};

// class NFA : public FiniteAutomata<std::vector<State>> {

// };

// class DFA : public FiniteAutomata<State> {

// };


// class RegularOperations {
//     NFA unionOp(FiniteAutomata& a, FiniteAutomata& b);

//     | & + *

// };
