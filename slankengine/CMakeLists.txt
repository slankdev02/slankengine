cmake_minimum_required(VERSION 3.15)
project(slankengine LANGUAGES CXX)

find_package(SDL2 CONFIG REQUIRED)

add_library(slankengine
    src/core.cpp
    src/Screen.cpp
)

target_include_directories(slankengine
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(slankengine PUBLIC SDL2::SDL2)
target_compile_features(slankengine PUBLIC cxx_std_17)

add_library(slankengine::slankengine ALIAS slankengine)
