#include <SDL3_image/SDL_image.h>
#include "core/texture.h"


Texture::Texture() {

}


Texture::~Texture() {
    destroyImage();
}


Texture::setImage(SDL_Renderer renderer) {
    image = IMG_LoadTexture(renderer, )
}


void Texture::destroyImage() {
    SDL_DestroyTexture(image);
}