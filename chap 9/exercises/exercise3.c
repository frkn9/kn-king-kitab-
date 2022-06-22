#include <stdio.h>

int gcd(int first_number, int second_number);   /*greatest common divisor calculator*/

int main(void) {

    int a, b;
    printf("Enter two numbers to calculate their greatest common divisor: ");
    scanf("%d %d", &a, &b);

    printf("GCD is: %d", gcd(a, b));

}

int gcd(int m, int n) {
    int remainder;
    for (; n != 0; ) {
        
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

