/* prints int and float values in various formats */

#include <stdio.h>

int main(void) {
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("l%dl%5dl%-5dl%5.3dl\n", i, i, i, i);
    printf("l%10.3fl%10.3el%-10gl\n", x, x, x);

    //printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");


    //printf("Test\t\\");

    return 0;

}