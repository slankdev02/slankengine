#include <SDL2/SDL.h>
#include <iostream>


/**
 * @class Screen
 * @brief Handles all window, rendering, and update functionality for a game. 
 */
class Screen {

public:

    //may implement window size change functionality
    const int width;
    const int height;
    std::string title;
    bool isRunning = true;

    SDL_Window* window;
    SDL_Renderer* renderer;

    Screen(int width, int height, std::string title, Uint32 window_flags, Uint32 renderer_flags);
    void Update();
    void Destroy();
    void setBackgroundColor(int red, int green, int blue, int alpha);
};