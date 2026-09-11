#include <SDL3/SDL.h>
#include "slankengine_math.h"


class Rect {

public:

    Transform transform;

    Rect(Vector3 position, Vector3 rotation, Vector3 scale);
};