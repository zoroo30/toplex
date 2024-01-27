#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <variant>

struct State {
    std::string id;
};



class FiniteAutomata {
protected:
    State initialState;
    std::unordered_set<State> finalStates;
    std::vector<State> states;  
    std::vector<char> alphapets;
    std::unordered_map<State, std::unordered_map<char, std::variant<std::vector<State>, State> >> transitionTable;
public:
    virtual ~FiniteAutomata() = default;
};

class NFA : public FiniteAutomata {

};

class DFA : public FiniteAutomata {

};


class RegularOperations {
    NFA unionOp(NFA& a, NFA& b);
    NFA concatOp(NFA& a, NFA& b);
    NFA closureOp(NFA& a);
};