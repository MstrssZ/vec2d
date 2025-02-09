#ifndef _VEC2D_
#define _VEC2D_

typedef struct {
    int x;
    int y;
} Vec2;

typedef struct {
    Vec2 vec;
    char* name;
} NamedVec2;

typedef struct {
    float x;
    float y;
} Vec2f;

// Add x+x and y+y
Vec2 vec2_add(Vec2 a, Vec2 b);

// Subtract a.x - b.x and a.y - b.y
Vec2 vec2_sub(Vec2 a, Vec2 b);

// Multiply x*x and y*y
Vec2 vec2_mult(Vec2 a, Vec2 b);

// Divide a.x / b.x and a.y / b.y
Vec2 vec2_div(Vec2 a, Vec2 b);

// Return the dot product of two Vec2 vectors
int vec2_dot(Vec2 a, Vec2 b);

// Scale a Vec2 vector by an integer return new Vec2
Vec2 vec2_scale_copy(Vec2 a, int scale);

// Scale a Vec2 vector by an integer returning new Vec2
void vec2_scale_reference(Vec2* a, int scale);

// Get the length(float) of a Vec2 vector
float vec2_length(Vec2 a);

// Return the unit vector of the input Vec2
Vec2f vec2_norm(Vec2 a);

//----------------------------
//          Vec2f stuff
//----------------------------

// Add x+x and y+y
Vec2f vec2f_add(Vec2f a, Vec2f b);

// Subtract a.x - b.x and a.y - b.y
Vec2f vec2f_sub(Vec2f a, Vec2f b);

// Multiply x*x and y*y
Vec2f vec2f_mult(Vec2f a, Vec2f b);

// Divide a.x / b.x and a.y / b.y
Vec2f vec2f_div(Vec2f a, Vec2f b);

// Return the dot product of two Vec2f vectors
float vec2f_dot(Vec2f a, Vec2f b);

// Scale a Vec2f vector by an integer return new Vec2f
Vec2f vec2f_scale_copy(Vec2f a, int scale);

// Scale a Vec2f vector by an integer returning new Vec2f
void vec2f_scale_reference(Vec2f* a, int scale);

// Get the length(float) of a Vec2f vector
float vec2f_length(Vec2f a);

// Return the unit vector of the input Vec2
Vec2f vec2f_norm(Vec2f a);


#endif // _VEC2D_
