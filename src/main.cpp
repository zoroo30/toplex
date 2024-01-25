#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>


class Manager 
{
public:
    void addToLanuage(std::string key, std::string regularExpression) 
    {

    }
};

int main()
{
    /**
        letter = a-z | A-Z
        digit = 0 - 9
        digits = digit+

        {program var int float}

        num: 0-9+ | (0 - 9)+ . (0 - 9)+ ( \L | E digits)

        relop:<> | > | >\= | < | <\=
        assign: \:\=

        {real begin end if else then while do read write}

        addop: \+ | -
        mulop: \* | /

        [: ; , . \( \) { } \=]

        id: letter (letter|digit)*

     * 
     */

    // std::vector<std::pair<std::string, std::string>> input = {
    //     {"keyword", "program"},
    //     {"keyword", "var"},
    //     {"num", "(0 - 9)+ | (0 - 9)+ . (0 - 9)+ ( \L | E digits)"},
    //     {"relop", "<> | >"}
    // };

    
    // Manager m;

    // for(auto [key, value] : input)
    // {
    //     m.addToLanuage(key, value);
    // }
}
