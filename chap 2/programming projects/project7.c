#include <stdio.h>

//program that asks the user to enter us dollar amount and shows how to pay that amount using the smallest number of 
//20, 10, 5 and 1 dollar bills

int main(void) {

    int dollar_amount;
    printf("Enter dollar amount: ");
    scanf("%d", &dollar_amount);

    int _20_bills = (dollar_amount) / 20;
    int _10_bills = (dollar_amount - (20 * _20_bills)) / 10;
    int _5_bills = (dollar_amount - (20 * _20_bills) - (10 * _10_bills)) / 5;
    int _1_bills = (dollar_amount - (20 * _20_bills) - (10 * _10_bills) - (5 *_5_bills)) / 1;

    printf("$20 bills: %d\n", _20_bills);
    printf("$10 bills: %d\n", _10_bills);
    printf("$5 bills: %d\n", _5_bills);
    printf("$1 bills: %d\n", _1_bills);

}