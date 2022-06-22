#include <stdio.h>

int main(void){
    printf("Enter x value: ");

    int x;

    scanf("%d", &x);

    // int polynomial = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + 7 * x - 6; 

    int polynomial_2 = ((((3 * x + 2) * x - 5) * x - 1) * x + 7 ) * x - 6;  /*this one performs fewer multiplications, its called 
    Horner's Rule*/

    printf("Result of the polynomial is : %d\n", polynomial_2);

    return 0;
}