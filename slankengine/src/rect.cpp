#include "slankengine_math.h"
#include "rect.h"


Rect::Rect(Vector3 position, Vector3 rotation, Vector3 scale) : 
    transform(Transform{position, rotation, scale}) {}