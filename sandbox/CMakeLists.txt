cmake_minimum_required(VERSION 3.15)
project(SandboxGame LANGUAGES CXX)

# 1. Create the game executable
add_executable(sandbox src/main.cpp)

target_include_directories(sandbox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_compile_definitions(sandbox PRIVATE SDL_MAIN_HANDLED)
if(WIN32)
	target_link_options(sandbox PRIVATE -mconsole)
endif()

# 2. Link your engine package. 
# CMake handles all header paths and binaries automatically behind the scenes!
target_link_libraries(sandbox PRIVATE slankengine)
