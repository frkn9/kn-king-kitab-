#include <stdio.h>

int main (void) {

    int i, j, k;

    i = 3, j = 4, k = 5;

    printf("%d", i % j + i < k);       //3 + 3 < 5
}