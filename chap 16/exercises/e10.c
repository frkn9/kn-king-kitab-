#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct point {
    int x, y
};

struct rectangle {
    struct point upper_left, lower_right;
};

double compute_rectangle_area(struct rectangle p);

struct point compute_center(struct rectangle p);

struct rectangle move(struct rectangle p, int x, int y);

bool lies_or_not(struct rectangle p, struct point q);




double compute_rectangle_area(struct rectangle p) {
    
    int a;
    int b;

    a = abs(p.lower_right.x - p.upper_left.x);
    b = abs(p.lower_right.y - p.upper_left.y);

    return a * b;
}

struct point compute_center(struct rectangle p) {
    
    struct point q;

    q.x = (p.lower_right.x + p.upper_left.x)/2;
    q.y = (p.lower_right.y + p.upper_left.y)/2;

    return q;
}

struct rectangle move(struct rectangle p, int x, int y) {

    p.upper_left.x += x;
    p.upper_left.y += y;
    p.lower_right.x += x;
    p.lower_right.y += y;

    return p;
}

bool lies_or_not(struct rectangle p, struct point q) {

    if( (q.x <= p.upper_left.x && q.x >= p.lower_right.x) || (q.x >= p.upper_left.x && q.x <= p.lower_right.x) ) 
        if( (q.y <= p.upper_left.y && q.y >= p.lower_right.y) || (q.y >= p.upper_left.y && q.y <= p.lower_right.y) ) 
            return true;
        else 
            return false;
    return false;
}


