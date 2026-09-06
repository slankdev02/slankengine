cmake_minimum_required(VERSION 3.15)
project(slankengine LANGUAGES CXX)

# 1. Compile engine source files
add_library(slankengine 
    src/core/core.cpp
)

# 2. Expose the local header folders
target_include_directories(slankengine PUBLIC include)

# 3. Link SDL2 directly to your engine
# "PUBLIC" ensures that your sandbox game also gets access to SDL2's internal code automatically
target_link_libraries(slankengine PUBLIC SDL2::SDL2)

# 4. Force contemporary language specifications
target_compile_features(slankengine PUBLIC cxx_std_20)
