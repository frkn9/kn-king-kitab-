#include <stdio.h>
double median(double x, double y, double z) {

    double median = 0.0;

    if (x == y || x == z)
        median = x;
    else if (y == z)
        median = y;
    
    if ((x > y && z > x) || (x > z && y > x))
        median = x;
    else if ((y > x && z > y) || (y > z && x > y))
        median = y;
    else if ((y > z && z > x) || (z > y && x > z))
        median = z;

    return median;
}   
    int main(void) {
    double a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2lf", median(a, b, c));
}