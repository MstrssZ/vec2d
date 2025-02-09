#include <math.h>
#include "../include/vec2d.h"

Vec2 vec2_add(Vec2 a, Vec2 b){
    return (Vec2){a.x + b.x, a.y + b.y};
}

Vec2 vec2_sub(Vec2 a, Vec2 b){
    return (Vec2){a.x - b.x, a.y - b.y};
}

Vec2 vec2_mult(Vec2 a, Vec2 b){
    return (Vec2){a.x * b.x, a.y * b.y};
}

Vec2 vec2_div(Vec2 a, Vec2 b){
    return (Vec2){a.x / b.x, a.y / b.y};
}

int vec2_dot(Vec2 a, Vec2 b){
    return ((a.x * b.x) + (a.y * b.y));
}

Vec2 vec2_scale_copy(Vec2 a, int scale){
    return (Vec2){a.x * scale, a.y * scale};
}

void vec2_scale_reference(Vec2* a, int scale){
    a->x *= scale;
    a->y *= scale;
}

float vec2_length(Vec2 a){
    return sqrt(vec2_dot(a, a));
}

Vec2f vec2_norm(Vec2 a){
    return (Vec2f){(a.x / vec2_length(a)), (a.y / vec2_length(a))};
}

Vec2f vec2f_add(Vec2f a, Vec2f b){
    return (Vec2f){a.x + b.x, a.y + b.y};
}

Vec2f vec2f_sub(Vec2f a, Vec2f b){
    return (Vec2f){a.x - b.x, a.y - b.y};
}

Vec2f vec2f_mult(Vec2f a, Vec2f b){
    return (Vec2f){a.x * b.x, a.y * b.y};
}

Vec2f vec2f_div(Vec2f a, Vec2f b){
    return (Vec2f){a.x / b.x, a.y / b.y};
}

float vec2f_dot(Vec2f a, Vec2f b){
    return ((a.x * b.x) + (a.y * b.y));
}

Vec2f vec2f_scale_copy(Vec2f a, int scale){
    return (Vec2f){a.x * scale, a.y * scale};
}

void vec2f_scale_reference(Vec2f* a, int scale){
    a->x *= scale;
    a->y *= scale;
}

float vec2f_length(Vec2f a){
    return sqrtf((a.x * a.x) + (a.y * a.y));
}

Vec2f vec2f_norm(Vec2f a){
    return (Vec2f){(a.x / vec2f_length(a)), (a.y / vec2f_length(a))};
}
