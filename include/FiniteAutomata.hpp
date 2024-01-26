#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

struct State {
    std::string id;
};



template <typename T>
class FiniteAutomata {
protected:
    State initialState;
    std::unordered_set<State> finalStates;
    std::vector<State> states;  
    std::vector<char> alphapets;
    std::unordered_map<State, std::unordered_map<char, T>> transitionTable;
public:
    virtual ~FiniteAutomata() = default;
    void addState() {
        
    }
};

class NFA : public FiniteAutomata<std::vector<State>> {

};

class DFA : public FiniteAutomata<State> {

};


class RegularOperations {
    NFA unionOp(FiniteAutomata& a, FiniteAutomata& b);

    | & + *

};