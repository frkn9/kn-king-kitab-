#include <stdio.h>

int main () {

    int i, j;

    for (i = 5, j = 4; i > 0, j > 0; i--,j = i-1) {   // 5, i=4,j=3; 4, i=3, j=2; 3, i=2, j=1; 2, i=1, j=0;
        printf("%d\n",i );
    }
}