#include <SDL3/SDL.h>
#include <string>


class Texture {

public:
    SDL_Texture* image;

    void setImage(std::string src);
    Texture();
    ~Texture();

private:

    void destroyImage() {
        SDL_DestroyTexture(image);
    }

};