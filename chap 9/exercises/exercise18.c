#include <stdio.h>

int gcd(int m, int n) {
   
    if ( n != 0)
        gcd(n , m % n);
    else 
        return m;
} 

int main(void) {

    int a, b;
    printf("Enter two numbers to calculate their greatest common divisor: ");
    scanf("%d %d", &a, &b);

    printf("GCD is: %d", gcd(a, b));

}