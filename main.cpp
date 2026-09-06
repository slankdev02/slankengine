#include <SDL2/SDL.h>
#include <stdio.h>
#include "slankengine/slankengine.h"


int main(int argc, char* argv[]) {

    if (!engine.init()) {
        return 1;
    }

    Screen screen = Screen(800, 800, "slankengine", SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED);
    screen.setBackgroundColor();

    while (screen.isRunning) {
        screen.Update();
    }

    screen.Destroy();
    return 0;

}
