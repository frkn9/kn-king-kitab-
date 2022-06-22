#include <stdio.h>

int main (void) {
    printf("ENTER 2 DIGIT NUMBER:   ");
    int number;
    scanf("%d", &number);
    printf("%d%d", number % 10, number / 10);
}