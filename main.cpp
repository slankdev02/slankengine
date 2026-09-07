#include <SDL2/SDL.h>
#include "slankengine/slankengine.h"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    if (!engine::init(SDL_INIT_VIDEO)) {
        return 1;
    }

    Screen screen(800, 800, "slankengine", SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED);
    screen.setBackgroundColor({255, 255, 255, 255});

    while (screen.isRunning) {
        screen.Update();
    }

    screen.Destroy();
    return 0;
}
