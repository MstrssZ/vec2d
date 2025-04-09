#include <stdio.h>
#include "../include/vec2d.h"

int main(void) {
    printf("hello\n");
    Vec2f v1 = (Vec2f){1, 2};


    Vec2f v2 = (Vec2f){3, 4};
    Vec2f add = vec2f_add(v1, v2);
    Vec2f sub = vec2f_sub(v2, v1);
    Vec2f mult = vec2f_mult(v1, v2);
    Vec2f div = vec2f_div(v2, v1);
    float dot = vec2f_dot(v2, v1);
    Vec2f scale = vec2f_scale_copy(v2, 3);
    float length = vec2f_length(v1);

    printf("v1: {%f, %f}\n", v1.x, v1.y);
    printf("v2: {%f, %f}\n", v2.x, v2.y);
    printf("add: {%f, %f}\n", add.x, add.y);
    printf("sub: {%f, %f}\n", sub.x, sub.y);
    printf("mult: {%f, %f}\n", mult.x, mult.y);
    printf("div: {%f, %f}\n", div.x, div.y);
    printf("dot: %f\n", dot);
    printf("scale: {%f, %f}\n", scale.x, scale.y);
    vec2f_scale_reference(&add, 3);
    printf("add: {%f, %f}\n", add.x, add.y);
    printf("length: %f\n", length);
    printf("v2 length: %f\n", vec2f_length(v2));
    printf("add length: %f\n", vec2f_length(add));
    printf("sub length: %f\n", vec2f_length(sub));
    printf("mult length: %f\n", vec2f_length(mult));
    printf("div length: %f\n", vec2f_length(div));

    return 0;
}
