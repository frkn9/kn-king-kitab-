#include <stdio.h>

int num_digits(int inputted_number);

int main(void) {

    int a;

    printf("Enter number: ");

    scanf("%d", &a);

    printf("Number of digits is: %d", num_digits(a));
}

int num_digits (int n) {

    int count;

    for (count = 0; n > 0; count++) {
        n /= 10;
    }
    return count;
}