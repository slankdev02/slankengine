#include <game_object.h>
#include "slankengine_math.h"
#include "texture.h"
#include "rect.h"


GameObject::GameObject(Vector3 position, Vector3 rotation, Vector3 scale) : 

    transform(Transform{position, rotation, scale}),
    rect(Rect(transform.position, transform.rotation, transform.scale)),
    image(Texture()) {}


