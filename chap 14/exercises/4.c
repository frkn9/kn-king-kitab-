#include <stdio.h>
#define AVG(x,y) ( ( (x)+(y) ) / 2)
#define AREA(x,y) ( (x) * (y) )


int main(void) {
    double x = 7, y = 21;
    printf("%f\n",1/AVG(x,y));
    printf("%f", 1/AREA(x,y));
}


