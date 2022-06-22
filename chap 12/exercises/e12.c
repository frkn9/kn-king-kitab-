#include <stdio.h>
#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {

    const int *p = a;
    *largest = *second_largest = *a;
    
    while (p++ < a + n) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest)
            *second_largest = *p;

    }
    return;
}

int main(void) {
    int a[N] = {84,859,74,4,-78,4,41,12,7,25};
    int *largest, *second_largest;
    find_two_largest(a, 10, largest, second_largest);

    printf("%d %d", *largest, *second_largest);
}