#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int i = 11;
    int j = 78;
    printf("i is %d j is %d\n", i, j);

    swap( &i , &j );

    printf("i is %d j is %d\n", i, j);
    
}

void swap(int *p, int *q) {

    int temp = *p;

    *p = *q;
    *q = temp;

}

