#include <stdio.h>

int main (void) {

    int i, j, k;

    i = 1, j = 2;

    k = (i > j) ? i : j;            // k is now 2
    
    k = ( i >= 0 ? i : 0) + j;      // k is now 3


#define RAT int  //rat = int oldu demek.

    RAT m, n, b;


_Bool x, y, z;

x = 7, y = 0, z = 1; // x and z are assigned 1, y is assigned 0.

printf("x:%d y:%d z:%d ", x, y, z);

}