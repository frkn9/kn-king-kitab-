#include <stdio.h>
#include <math.h>
#define DISP(f,x) printf(#f "(%g) = %g\n", x, f(x))
#define DISP2(f,x,y) printf(#f "(%g) = %g," " "#f "(%g) = %g", x, f(x), y, f(y) )

int main(void) {
    float x = 7.456;
    float y = 123.1;
    DISP(sqrt,x);
    DISP2(sqrt, x, y);
} 