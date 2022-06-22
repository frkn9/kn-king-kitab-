#include <stdio.h>

int main (void) {

    printf("Enter a two digit number: ");
    int number1, number2;
    scanf("%1d%1d", &number1, &number2);
    printf("The reversal is: %1d%1d", number2, number1);

    return 0;
}