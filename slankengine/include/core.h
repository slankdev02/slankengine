#pragma once

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>

// this is just for basic initialization and cleanup for
// the engine package
namespace engine {
    bool init(Uint32 engineFlags = SDL_INIT_VIDEO);
    void shutdown();
}