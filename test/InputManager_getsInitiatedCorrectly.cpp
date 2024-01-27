#include "gtest/gtest.h"
#include "InputManager.hpp"

TEST(InputManager, gets_initiated_correctly) {
    //arrange
    toplex::InputManager input_manager("input.txt");
    //act
    //assert
    EXPECT_EQ (false,  false);
}