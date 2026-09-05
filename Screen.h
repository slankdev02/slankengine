#include <SDL2/SDL.h>
#include <iostream>


class Screen {

public:

    int width;
    int height;
    std::string title;
    bool isRunning = true;

    SDL_Window* window;
    SDL_Renderer* renderer;

    Screen(int width, int height, std::string title, Uint32 window_flags, Uint32 renderer_flags);
    void Update();
    void setBackgroundColor(int red, int green, int blue, int alpha);
};