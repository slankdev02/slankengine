#include <SDL3/SDL.h>
#include "core.h"
#include <iostream>


bool engine::init(Uint32 engineFlags) {
    if (SDL_Init(engineFlags) != 0) {
        std::cout << "SDL_Init failed: " << SDL_GetError() << std::endl;
        return false;
    }
    return true;
}


void engine::shutdown() {
    return SDL_Quit();
}