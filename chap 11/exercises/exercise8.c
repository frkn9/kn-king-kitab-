#include <stdio.h>
#define N 10

int *find_largest(int a[], int n);

int main(void) {
    printf("Enter %d numbers:   ", N);
    int a[N] = {0};
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Largest is: %d", *find_largest(a, N));
}

int *find_largest(int a[], int n){
    int *largest = &a[0];
    
    for(int i = 0; i < n; i++) {
        if (a[i] > *largest)
            *largest = a[i];
    }

    return largest;
}

