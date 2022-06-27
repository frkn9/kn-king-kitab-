#include <stdio.h>

struct complex {
    double real;
    double imaginary;
} c1 = {.real = 0.0, .imaginary = 1.0}, c2 = {.real = 1.0, .imaginary = 0.0}, c3;



int main(void) {

    c3.imaginary = c1.imaginary + c2.imaginary;
    c3.real = c1.real + c2.real;

    printf("c1 real = %f, c1 imaginary = %f\nc2 real = %f, c2 imaginary = %f", c1.real, c1.imaginary, c2.real, c2.imaginary);

    c2 = c1;

    printf("\nc1 real = %f, c1 imaginary = %f\nc2 real = %f, c2 imaginary = %f", c1.real, c1.imaginary, c2.real, c2.imaginary);

    printf("\nc3 real = %f, c3 imaginary = %f\n", c3.real, c3.imaginary);
}
