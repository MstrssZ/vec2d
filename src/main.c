#include "../include/raylib.h"
#include "../include/vec2d.h"
#include <stdio.h>

#define WIN_WIDTH 800
#define WIN_HEIGHT 600
#define CENTER_W (WIN_WIDTH/2)
#define CENTER_H (WIN_HEIGHT/2)

void drawVec2Arrow(Vec2 vector){
  int vecxnorm = CENTER_W + (vector.x * 20);
  int vecynorm = CENTER_H - (vector.y * 20);
  DrawLine(CENTER_W, CENTER_H, vecxnorm, vecynorm, WHITE);
  //TODO: implement the triangle at the end of the vector
  //DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
}

int main(void) {
  InitWindow(WIN_WIDTH, WIN_HEIGHT, "ttitle");
  printf("hello\n");
   Vec2 v = (Vec2){1, 2};
  while (!WindowShouldClose()) {
    BeginDrawing();
    for (int i = 0; i < WIN_WIDTH; ++i) {
      if (i % 50 == 0) DrawLine(i, 0, i, WIN_HEIGHT, ColorAlpha(GRAY, 0.2f));
    }
    for (int i = 0; i < WIN_HEIGHT; ++i) {
      if (i % 50 == 0) DrawLine(0, i, WIN_WIDTH, i, ColorAlpha(GRAY, 0.2f));
    }
    drawVec2Arrow(v);
    EndDrawing();
  }
  CloseWindow();

  return 0;
}
