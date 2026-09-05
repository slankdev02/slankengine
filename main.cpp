#include <SDL2/SDL.h>
#include <stdio.h>
#include "Screen.h"


Screen screen = Screen(800, 800, "sdl2 test window", SDL_WINDOW_SHOWN, SDL_RENDERER_ACCELERATED);

int main(int argc, char* argv[]) {

    screen.setBackgroundColor(150, 150, 220, 255);

    while (true) {

        if (!screen.isRunning) {
            break;
        }
        screen.Update();

    }


    return 0;
}
