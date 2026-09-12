#pragma once

#include <SDL3/SDL.h>
#include <string>

#include "core/color.h"

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

    Screen(int width, int height, std::string title = "slankengine game", Uint32 window_flags = 0, Uint32 renderer_flags = 0);
    void Update();
    void Destroy();
    void setBackgroundColor(RGBA color);
};