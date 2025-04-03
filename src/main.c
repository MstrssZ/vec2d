#include "../include/raylib.h"
#include "../include/vec2d.h"
#include <stdio.h>

#define WIN_WIDTH 800
#define WIN_HEIGHT 600
#define CENTER_W (WIN_WIDTH/2)
#define CENTER_H (WIN_HEIGHT/2)

void drawVec2Add(Vec2 vec1, Vec2 vec2){
  int vec1xnorm = CENTER_W + (vec1.x * 50);
  int vec1ynorm = CENTER_H - (vec1.y * 50);
  int vec2xend = vec1xnorm + (vec2.x * 50);
  int vec2yend = vec1ynorm - (vec2.y * 50);
  DrawLine(CENTER_W, CENTER_H, vec1xnorm, vec1ynorm, WHITE);
  DrawLine(vec1xnorm, vec1ynorm, vec2xend, vec2yend, WHITE);
  DrawLine(CENTER_W, CENTER_H, vec2xend, vec2yend, RED);
}

void drawVec2Arrow(Vec2 vector){
  int vecxnorm = CENTER_W + (vector.x * 50);
  int vecynorm = CENTER_H - (vector.y * 50);
  DrawLine(CENTER_W, CENTER_H, vecxnorm, vecynorm, WHITE);
  //TODO: implement the triangle at the end of the vector
  //DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
}

void drawBG(void){
    for (int i = 0; i < WIN_WIDTH; ++i) {
      if (i % 50 == 0) DrawLine(i, 0, i, WIN_HEIGHT, ColorAlpha(GRAY, 0.2f));
    }
    for (int i = 0; i < WIN_HEIGHT; ++i) {
      if (i % 50 == 0) DrawLine(0, i, WIN_WIDTH, i, ColorAlpha(GRAY, 0.2f));
    }
  DrawLineEx((Vector2){.x = CENTER_W, .y = 0}, (Vector2){.x = CENTER_W, .y = WIN_HEIGHT}, 1.5f, WHITE);
  DrawLineEx((Vector2){.x = 0, .y = CENTER_H}, (Vector2){.x = WIN_WIDTH, .y = CENTER_H}, 1.5f, WHITE);
}

int main(void) {
  InitWindow(WIN_WIDTH, WIN_HEIGHT, "Vec2D Visualzation example");
  printf("hello\n");
   Vec2 v = (Vec2){.x = 1, .y = 2};
   Vec2 v2 = (Vec2){.x = 4, .y = 2};
  while (!WindowShouldClose()) {
    BeginDrawing();
    drawBG();
    //drawVec2Arrow(v);
    //drawVec2Arrow(v2);
    drawVec2Add(v, v2);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
