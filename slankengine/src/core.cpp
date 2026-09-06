#include <SDL2/SDL.h>
#include "core.h"


bool engine::init(Uint32 engineFlags) {
    return SDL_Init(engineFlags) == 0;
}


void engine::shutdown() {
    return SDL_Quit();
}