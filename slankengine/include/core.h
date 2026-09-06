#include <SDL2/SDL.h>

#pragma once

//this is just for basic initialization and cleanup for
//the engine package
namespace engine {
    bool init(Uint32 engineFlags);
    void shutdown();
}