/* computes average of 3 numbers */

#include <stdio.h>


double average(double, double ) ;

int main(void) {
    double x, y, z;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("Average value of %g and %g: %g\n", x, y, average(x, y));
    printf("Average value of %g and %g: %g\n", y, z, average(y, z));
    printf("Average value of %g and %g: %g\n", x, z, average(x, z));

    return 0;
}

double average(double a, double b) {
        return ( a + b ) / 2;
    }