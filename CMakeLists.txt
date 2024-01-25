cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(PROJECT_NAME
    toplex
)
set(toplex_SOURCE_DIR
    src
)
set(toplex_SOURCE
    ${toplex_SOURCE_DIR}/main.cpp
    ${toplex_SOURCE_DIR}/InputManager.cpp
)
set(toplex_LIB_DIR
    libs
)
set(toplex_LIBRARIES 
    
)
set(toplex_INCLUDE_DIR 
    include
)
set(toplex_INCLUDE
    ${toplex_INCLUDE_DIR}
)

project(${PROJECT_NAME})

include_directories(${toplex_INCLUDE_DIR})

#########
# GTest #
#########
enable_testing()
add_subdirectory(${toplex_LIB_DIR}/googletest-1.14.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

###########
# Project #
###########
add_executable(${PROJECT_NAME} ${toplex_SOURCE})

foreach(LIBRARY ${toplex_LIBRARIES})
    add_subdirectory("${toplex_LIB_DIR}/${LIBRARY}")
endforeach(LIBRARY)
target_link_libraries(${PROJECT_NAME} ${toplex_LIBRARIES})