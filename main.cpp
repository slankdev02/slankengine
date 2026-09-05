#include <SDL2/SDL.h>
#include <stdio.h>
#include "Screen.h"


int main(int argc, char* argv[]) {

    Screen screen = Screen(800, 800, "sdl2 test window", SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED);
    screen.setBackgroundColor(200, 200, 210, 255);

    while (screen.isRunning) {
        screen.Update();
    }

    return 0;
}
