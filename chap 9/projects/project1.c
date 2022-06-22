#include <stdio.h>

void selection_sort(int m, int a[]) {                   //NOT OVER

    int largest = 0;
    int i;
    int temp = 0;
    int k;
    
    for (i = 0; i < m; i++) {
        if (a[i] > largest ) {
            k = i;
            largest = a[i];
        }
    }
    if (m == 0) {
        for (i = 0; i < 10; i++) {
        printf(" %d ", a[i]);
        }
        return;
    }
    temp = a[m - 1];
    a[m - 1] = largest;
    a[k] = temp;

    selection_sort(m - 1, a);
    }

int main(void) {
    int i;
    int a[10] = {0};
    printf("Enter 10 integers: ");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    
    selection_sort(10, a);
}