#include <stdio.h>
#define SIZE 10
int largest(int array_of_numbers[]);
double average(int array_of_numbers[]);
int post(int array_of_numbers[]);


int main(void) {
    int i;
    char c;

    int num_array[SIZE] = {0};
    printf("Enter sequences of numbers to find the largest (enter less numbers than 10): ");
    
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &num_array[i]);

    }
    printf("\n%d is the largest.", largest(num_array));
    printf("\n%.2lf is the average.", average(num_array));
    printf("\n%d is the count of positive numbers.", post(num_array));

}

int largest(int a[]) {
    int largest;
    int size = SIZE;

    for (largest = 0; size > 0; size--) {
        if (a[size - 1] >= largest)
            largest = a[size - 1];
    }

    return largest;
}   

double average(int a[]) {
    int i;
    double sum = 0.0;
    for (i = 0; i < SIZE; i++) {
        sum += a[i];
    }
    return sum /  SIZE;
}

int post(int a[]) {
    int i;
    int pos_count = 0;

    for (i = 0; i < SIZE; i++) {
        if (a[i] > 0)
            pos_count++;
    }

    return pos_count;

}

