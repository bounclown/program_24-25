#include "vector.h"

Vector vec_init(float x, float y, float z) {
    Vector vec = {x, y, z};
    return vec;
}

float vec_len(Vector vec) {
    return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

int find_long(Vector* vectors, int count) {
    int long_index = 0;
    float max_len = 0.0;

    for (int i = 0; i < count; i++) {
       float len = vec_len(vectors[i]);
       if (len > max_len ) {
        max_len = len;
        long_index = i;
       }
    }

    return long_index;
}