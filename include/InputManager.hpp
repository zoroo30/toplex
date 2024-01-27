/**
 * @file InputManager.hpp
 * @author Ahmed Tarek / Ahmed Ismail
 * @brief 
 * @version 0.1
 * @date 2024-01-25
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once
//--------------------------------------------------------------------------------------------------
//  Includes
//--------------------------------------------------------------------------------------------------
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <unordered_map>
//--------------------------------------------------------------------------------------------------
//  Forward Declarations
//--------------------------------------------------------------------------------------------------

/**
 * @namespace toplex
 * 
 */
namespace toplex
{
    /**
     * @class InputManager 
     * @brief Responsible for adding the regular expressions in a container to be used later.
     */
    class InputManager
    {
    public:
        /**
         * @brief Construct a new InputManager object
         * 
         * @param filePath
         */
        InputManager(const std::string& filePath);
        /**
         * @brief Destroy the InputManager object
         * 
         */
        ~InputManager() = default;

    private:
        std::unordered_map<std::string, std::string> defintions;
        std::vector< std::pair<std::string, std::string> > parsedInput;

        bool splitRegularDefinition(std::string& line);
        bool splitRegularExpression(std::string& line);
        bool splitKeywords(std::string& line);
        bool splitPunctuations(std::string& line);
    };

} // namspace toplex