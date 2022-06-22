#include <stdio.h>

int main(void) {

    printf("Enter a positive integer: ");

    double i, count, num;
    scanf("%lf", &i);
    count = i;  //count 4
    num = i;    //num 4

    while ( --count > 0) {
        i *= count;
    }

    printf("Factorial of %.2lf is: %.2lf", num, i);
    
}