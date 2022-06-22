#include <stdio.h>
#define N 10

int sum_array(const int *a, int n) {
    int sum, *p;
    p = a;

    sum = 0;

    for(; p < a + n; p++) {
        sum += *p;      
    }
    return sum;
}

int main(void) {

    int a[N] = {10,9,8,7,6,5,4,3,2,1};

    printf("%d", sum_array(a, N));
}