#include <stdio.h>
#define N 10

int *find_middle(int a[], int n) {

    return a + n / 2;
}

int main(void) {
    int a[N] = {10,9,8,7,6,5,4,3,2,1};

    printf("%d", *(find_middle(a, N)));
}