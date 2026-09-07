cmake_minimum_required(VERSION 3.15)
project(MyGameWorkspace LANGUAGES CXX)

option(SLANKENGINE_BUILD_DEMO "Build the slankengine demo application" ON)
option(SLANKENGINE_BUILD_SANDBOX "Build the sandbox application" ON)

add_subdirectory(slankengine)

if(SLANKENGINE_BUILD_DEMO)
	add_executable(slankgame main.cpp)
	target_include_directories(slankgame PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
	target_link_libraries(slankgame PRIVATE slankengine::slankengine)
endif()

if(SLANKENGINE_BUILD_SANDBOX)
	add_subdirectory(sandbox)
endif()
