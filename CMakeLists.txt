cmake_minimum_required(VERSION 3.15)
project(MyGameWorkspace)

include(FetchContent)

# Use the cleaner, modern combined declaration format
FetchContent_Declare(
    SDL2
    GIT_REPOSITORY "https://github.com/libsdl-org/SDL.git"
    GIT_TAG        "release-2.30.0"
)

# Prevent SDL2 from building tests to keep compile times fast
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)

# Download and make it available
FetchContent_MakeAvailable(SDL2)

add_subdirectory(slankengine)
add_subdirectory(sandbox)
