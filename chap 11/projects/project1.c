#include <stdio.h>

//program that asks the user to enter us dollar amount and shows how to pay that amount using the smallest number of 
//20, 10, 5 and 1 dollar bills

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {

    int dollar_amount, twenties, tens, fives, ones;
    printf("Enter dollar amount: ");
    scanf("%d", &dollar_amount);

    pay_amount(dollar_amount, &twenties, &tens, &fives, &ones);

    printf("%d twenties\n%d tens\n%d fives\n%d ones", twenties, tens, fives, ones);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

    *twenties = (dollars / 20);
    *tens = (dollars - *twenties * 20) / 10;
    *fives = (dollars - *twenties * 20 - *tens * 10) / 5;
    *ones = (dollars - *twenties * 20 - *tens * 10 - *fives * 5); 
}