#include <stdio.h>

int main (void) {
    float x;
    x = 12;
    printf("%f\n", x);

    int y;
    y = 48.004451;
    printf("%d\n", y);

    int a;
    float b;

    b = a = 45.7f;

    printf("%d\n", a);

    printf("%f\n", b);

    // b 45.7 yerine 45.00000 oluyor dikkat! bu = nın sağdan sola doğru okuması yüzünden.


    int i, j, k;

    i = 7;

    k = 1 + (j = i);

    printf(" i is: %d\n j is: %d\n k is: %d\n", i, j, k);

    //j ye işlemin içinde değer verdik

}