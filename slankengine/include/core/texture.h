#include <SDL3/SDL.h>
#include <string>


class Texture {

public:

    void setImage(std::string src);
    Texture();
    ~Texture();

private:
    SDL_Texture* image;

    void destroyImage();
    
};