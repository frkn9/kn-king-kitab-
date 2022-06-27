#include <stdio.h>

#define RECTANGLE 4;
#define CIRCLE 0;

struct point {
    int x, y;
};

struct shape{
    int shape_kind;
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
}s;    

int main(void) {
s.shape_kind = RECTANGLE; //legal
s.center.x = 10; //legal
// s.height; //illegal
s.u.rectangle.height = 25; //olmalı
s.u.rectangle.width = 8; //legal
//s.u.circle illegal
s.u.circle.radius = 5;
//s.u.radius illegal



}