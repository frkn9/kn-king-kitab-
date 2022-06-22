#include <stdio.h> 

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main() {
     int a, b, x, y;

    printf("Enter a fraction: ");
   
    scanf("%d/%d", &a, &b);

    reduce(a, b, &x, &y);

    printf("The lowest terms: %d/%d ", a/x, b/x);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {

    if (denominator == 0) 
        printf("Error, invalid number:");
    *reduced_numerator = numerator, *reduced_denominator = denominator;

    for (int remainder; *reduced_denominator != 0; ) {
        remainder = *reduced_numerator % *reduced_denominator;          // a = m, b = n           //x = a, y = b
        *reduced_numerator = *reduced_denominator;
        *reduced_denominator = remainder;
    }
        
}