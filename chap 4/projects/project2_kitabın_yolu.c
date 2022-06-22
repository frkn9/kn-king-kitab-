#include <stdio.h>

int main(void) {

    printf("Enter three digit number: ");
    int number;
    scanf("%d", &number);
    printf("%d%d%d", number % 10 , number / 10 % 10, number / 100);

    return 0;
}