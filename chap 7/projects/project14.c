#include <stdio.h>
#include <math.h>

int main(void) {
    double  x, y = 1.0f;
    printf("Enter a number: ");

    scanf("%lf", &x);

    while( fabs(((y + x / y ) / 2) - y) > 0.00001f ) {
        y = (y + x / y) / 2;
    }
    printf("Square root : %f", y);
} 