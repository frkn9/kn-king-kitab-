#include <stdio.h>

int main(void) {

    int i, j, k, max;

    if ( i > j) {
        if ( i > k) {
            max = i;
        }
        else { 
            max = k;
        }
    }
    else {
        if (j > k) {
            max = j;
        }
        else {
            max = k;
        }
    }

    if ( 7 == 4) {
        printf("7=7");
    }
    else if ( 7 < 4 ) {
        printf("ok");
    }
    else
        printf("%d", 444444);
}
