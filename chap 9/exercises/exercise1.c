#include <stdio.h>      /*computes area of triangle*/
#include <stdlib.h>

double triangle_area (double base, double height) {
    double product;
    product = base * height;
    return product / 2;
}   
int main(void) {
    double base, height;
    printf("Enter base and height: ");
    scanf("%lf %lf", &base, &height);
    printf("\nArea is %.2lf", triangle_area(base,height) );

    return EXIT_SUCCESS;
}