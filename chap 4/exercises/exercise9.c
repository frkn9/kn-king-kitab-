#include <stdio.h>

int main(void) {
    int i, j, k;

    //a

    i = 7, j = 8;
    i *= j + 1;
    printf("1: %d  %d\n", i, j);

    i = j = k = 1;
    i += j += k;
    printf("2: %d %d %d \n", i, j, k);

    i = 1, j = 2, k = 3;
    i -= j -= k;
    printf("3: %d %d %d\n", i, j, k);

    i = 2, j = 1, k = 0;
    i *= j *= k;
    printf("4: %d %d %d\n", i, j, k);

    // 1 = 63 8 
    // 2 = 3 2 1
    // 3 = 2 -1 3
    // 4 = 0 0 0

    // ( = is right associative don't forget!) yani sağdan sola okuyor. sağdaki işlemleri ilk yapıyor.


}