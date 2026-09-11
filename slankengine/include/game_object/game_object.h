#include <SDL3/SDL.h>
#include "slankengine_math.h"
#include "texture.h"
#include "rect.h"


class GameObject {
public:
    Transform transform;

    Rect rect;
    Texture image;

    GameObject(Vector3 position = Vector3{0, 0, 0}, Vector3 rotation = Vector3{0, 0, 0}, Vector3 scale = Vector3{1, 1, 1});
    //currently leaving out a destructor as I am not yet using raw resources
};