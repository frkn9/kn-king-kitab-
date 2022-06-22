#include <stdio.h>
#include <stdbool.h>
#define N 10

bool search(const int *a, int n, int key) {
    int *p;

    for(p = a; p < a + n; p++) {
        if(*p == key)
            return 1;
    }
    return 0;
}


int main(void) {

    int a[N] = {10,9,8,7,6,5,4,3,2,1};
    int key = 11;
    printf("%d", search(a, N, key));

}