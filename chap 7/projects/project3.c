#include <stdio.h>
    // Sums a series of numbers (using double variables)
int main () {

    double n;
    double sum = 0.0f;

    printf("This program sums a series of integers\n");
    printf("Enter floats (0 to terminate): ");

    scanf("%lf", &n);
    while ( n!= 0.0f) {
        sum += n;
        scanf("%lf", &n);
    }   

    printf("The sum is %f", sum);

    return 0;

}