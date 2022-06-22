#include <stdio.h> 

int main() {

    printf("Enter a fraction: ");
    int a, b, remainder, x, y; 
    scanf("%d/%d", &a, &b);

    if (b == 0) 
        printf("Error, invalid number:");
    x = a, y = b;

    for (; y != 0; ) {
        remainder = x % y;          // a = m, b = n           //x = a, y = b
        x = y;
        y = remainder;
    }
        printf("The lowest terms: %d/%d ", a/x, b/x);

}