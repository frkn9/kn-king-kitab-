#include <stdio.h>
#define SIZE 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    int max, second_max;
    printf("Enter %d numbers:  ", SIZE);
    int array[SIZE] = {0};
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    find_two_largest(array, SIZE, &max, &second_max);

    printf("Largest is: %d and second largest is: %d\n", max, second_max);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    
    *largest = a[0];
    *second_largest = a[1];

    for(int i = 0; i < n; i++) {
        if (a[i] > *largest)
            *largest = a[i]; 
    }    

    for(int i = 0; i < n; i++) {
        if (a[i] > *second_largest && a[i] < *largest)
            *second_largest = a[i];
    }
}
