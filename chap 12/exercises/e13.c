#include <stdio.h>
#define N 10

int main(void) {

    int a[N][N] = {0};
    int *p;
    for(p = a[0]; p < a[0] + N * N; p = p + N + 1)
        *p = 1;
    int counter = 0;
    for(p = &a[0][0]; p <= &a[N-1][N-1]; p++, counter++) {
        if(counter % N == 0)
            printf("\n");
        printf("%d ", *p); 

    }
    	
}
