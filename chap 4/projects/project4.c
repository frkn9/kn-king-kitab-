#include <stdio.h>

int main(void) {
    printf("Enter a number between 0 and 32767:  ");
    int number;
    scanf("%d", &number);
    int digit_1, digit_2, digit_3, digit_4, digit_5;
    digit_1 = number % 8;
    digit_2 = (number / 8) % 8;
    digit_3 = (number / 8) / 8 % 8;
    digit_4 = (number / 8) / 8 / 8 % 8;
    digit_5 = (number / 8) / 8 / 8 / 8 % 8;
    printf("%1d%1d%1d%1d%1d\n", digit_5, digit_4, digit_3, digit_2, digit_1);

    // burası bilgi için yazıldı, problemin parçası değil

    printf("%d\t", number % 8);
    printf("%d\t", (number / 8));
    printf("%d\t", (number / 8) / 8);
    printf("%d\t", (number / 8) / 8 / 8);
    printf("%d\t", (number / 8) / 8 / 8 / 8);
}