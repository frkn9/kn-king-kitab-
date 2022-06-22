#include<stdio.h>

/* calculates the number of digits in an integer */
    
int main() {
    int digits = 0, n;
    printf("Enter a non-negative integer. ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n>0);

    printf("The number has %d digit(s)", digits);

    return 0;
    
}