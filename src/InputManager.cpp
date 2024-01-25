/**
 * @file InputManager.cpp
 * @author Ahmed Tarek / Ahmed Ismail
 * @brief 
 * @version 0.1
 * @date 2024-01-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
//--------------------------------------------------------------------------------------------------
//  Includes
//--------------------------------------------------------------------------------------------------
#include "InputManager.hpp"
//--------------------------------------------------------------------------------------------------
//  Forward Declarations
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
namespace toplex {
    InputManager::InputManager(std::string& filePath)
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
    //--------------------------------------------------------------------------------------------------
    bool InputManager::splitRegularDefinition(std::string& line)
    {
        return false;
    }
    //--------------------------------------------------------------------------------------------------
    bool InputManager::splitRegularExpression(std::string& line)
    {
        return false;
    }
    //--------------------------------------------------------------------------------------------------
    bool InputManager::splitKeywords(std::string& line)
    {
        return false;
    }
    //--------------------------------------------------------------------------------------------------
    bool InputManager::splitPunctuations(std::string& line)
    {
        return false;
    }
} // namespace toplex