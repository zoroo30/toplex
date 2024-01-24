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

class InputManager
{
    std::unordered_map<std::string, std::string> defintions;
    std::vector<std::pair<std::string, std::string>> parsedInput;

    bool splitRegularDefinition(std::string& line);
    bool splitRegularExpression(std::string& line);
    bool splitKeywords(std::string& line);
    bool splitPunctuations(std::string& line);
public:
    InputManager(std::string filePath)
    {
        std::ifstream file(filePath);
        if(!file.good()) 
        {
            std::cout << "failed to open " << filePath << ": No such file or directory." << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line))
        {
            int index = 0;
            if(line[0] == '{') // punctuations
            {
                splitPunctuations(line);
            } 
            else if(line[0] == '[') // keywords
            {
                splitKeywords(line);
            }
            else if((index = line.find('=')) != std::string::npos && line[index-1] != '\\')  // defintion
            {
                splitRegularDefinition(line);
            }
            else if((index = line.find(':')) != std::string::npos && line[index-1] != '\\')  // expression
            {
                splitRegularExpression(line);
            }
        }
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

    std::vector<std::pair<std::string, std::string>> input = {
        {"keyword", "program"},
        {"keyword", "var"},
        {"num", "(0 - 9)+ | (0 - 9)+ . (0 - 9)+ ( \L | E digits)"},
        {"relop", "<> | >"}
    };

    
    Manager m;

    for(auto [key, value] : input)
    {
        m.addToLanuage(key, value);
    }
}
