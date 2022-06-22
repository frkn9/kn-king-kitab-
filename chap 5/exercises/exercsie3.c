#include <stdio.h>

int main(void) {

    int i, j, k;

    i = 3, j = 4, k = 5;
    printf("%d\t", i < j || ++j < k);      // 1 || 0 =0 1          // burası önemli!!!
    printf("%d %d %d\n", i, j, k);         // 3 5 5 

    i = 7, j = 8, k = 9;
    printf("%d\t", i - 7 && j++ < k);     // 0 && 1 == 0           sol 0 olduğu için sağı ignorelıyor tamamen
    printf("%d %d %d\n", i, j, k);        // 7 8 9

    i = 7, j = 8, k = 9;
    printf("%d\t", (i = j) || ( j = k));   // 1 || 1 == 1
    printf("%d %d %d\n", i, j, k );        // 8 8 9 

    i = 1, j = 1, k = 1;
    printf("%d\t", ++i || ++j && ++k);    // 1 || 1  && 1 == 1
    printf("%d %d %d\n", i, j, k);        // 2 2 2 

}