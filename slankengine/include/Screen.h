#pragma once

#include <SDL2/SDL.h>
#include <string>

#include "Color.h"

/**
 * @class Screen
 * @brief Handles all window, rendering, and update functionality for a game.
 */
class Screen {
public:
    const int width;
    const int height;
    std::string title;
    bool isRunning = true;
    RGBA backgroundColor{255, 255, 255, 255};

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    Screen(int width, int height, std::string title, Uint32 window_flags = SDL_WINDOW_SHOWN, Uint32 renderer_flags = SDL_RENDERER_ACCELERATED);
    void Update();
    void Destroy();
    void setBackgroundColor(RGBA color = {255, 255, 255, 255});
};;