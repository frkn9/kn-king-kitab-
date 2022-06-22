#include <stdio.h>
#define N 10

int find_largest(int *a, int n) {
    int *q;
    int largest = *a;
    for(q = a; q < a + n - 1; q++) {
        if(*(q+1) > largest)
            largest = *(q+1);
    }

    return largest;
}

int main(void) {    
    int a[N] = {84,859,74,4,-78,4,41,12,7,25};
    
    printf("%d", find_largest(a, N));

}