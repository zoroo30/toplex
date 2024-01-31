#include "State.hpp"
#include <ostream>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <set>
#include "FiniteAutomata.hpp"

#include "FiniteAutomata.hpp"
#include "InputManager.hpp"


int main()
{
    State s0("s0");
    State s1("s1");
    State s2("s2");

    Link s0_0_s0(s0, '0');
    Link s0_1_s1(s1, '1');
    Link s1_0_s2(s2, '0');
    Link s1_1_s0(s0, '1');
    Link s2_0_s1(s1, '0');
    Link s2_1_s2(s2, '1');

    s0.addLink(s0_0_s0);
    s0.addLink(s0_1_s1);
    s1.addLink(s1_0_s2);
    s1.addLink(s1_1_s0);
    s2.addLink(s2_0_s1);
    s2.addLink(s2_1_s2);

    std::cout << s0.toString() << std::endl;
    std::cout << s1.toString() << std::endl;
    std::cout << s2.toString() << std::endl;

    FiniteAutomata fa(s0, s2, {s0,s1,s2});

    std::cout << "String 10111 accepted: " << fa.isAccepted("10111") << std::endl;
    std::cout << "String 101110110 accepted: " << fa.isAccepted("101110110") << std::endl;
}


