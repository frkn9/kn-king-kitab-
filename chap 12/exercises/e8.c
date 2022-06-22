#include <stdio.h>
#define N 10

void store_zeros(int *a, int n) {
    int *p;
    for (p = a; p < a + n; p++) 
        *p = 0;
}

int main(void) {

    int a[N] = {10,9,8,7,6,5,4,3,2,1};

    store_zeros(a, N);
    
    for(int *p = a; p < a + N; p++) 
        printf("%d ", *p);
    
}