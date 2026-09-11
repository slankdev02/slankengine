#pragma once


struct Vector3 {
    float x;
    float y;
    float z;
};


struct Transform {
    Vector3 position;
    Vector3 rotation;
    Vector3 scale;
};
