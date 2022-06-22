#include <stdio.h>

int main (void) {

    int i, j;

    i = 6;
    j = i += i;
    printf("%d %3d\n", i, j);        // 12 12

    i = 5;
    j = (i -= 2) +1;
    printf("%d %3d\n", i, j);        // 3 4

    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %3d\n", i, j);        // uh oh i got rounded to 2?

    i = 2, j = 8;
    j = ( i = 6 ) + ( j = 3);       // 6 9
    printf("%d %3d\n", i, j);


}