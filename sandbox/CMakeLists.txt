cmake_minimum_required(VERSION 3.15)
project(SandboxGame LANGUAGES CXX)

# 1. Create the game executable
add_executable(sandbox src/main.cpp)

# 2. Link your engine package. 
# CMake handles all header paths and binaries automatically behind the scenes!
target_link_libraries(sandbox PRIVATE slankengine)
