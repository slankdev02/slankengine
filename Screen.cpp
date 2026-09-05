#include "Screen.h"


//this also creates the Window and Renderer objects with the given args
Screen::Screen(int width, int height, std::string title, Uint32 window_flags, Uint32 renderer_flags) : width(width), height(height), title(title), 
    window(SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, window_flags)),
    renderer(SDL_CreateRenderer(window, -1, renderer_flags)) {}


void Screen::Update() {

    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        
        if (event.type == SDL_QUIT) {
            isRunning = false;
        }
        
        //both needed for rendering refresh
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
}


void Screen::setBackgroundColor(int red, int green, int blue, int alpha) {
    SDL_SetRenderDrawColor(renderer, red, green, blue, alpha);
}