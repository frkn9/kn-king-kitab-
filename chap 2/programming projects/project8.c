#include <stdio.h>

int main(void) {
    float amount_of_loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount_of_loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float balance_after_first_payment, balance_after_second_payment, balance_after_third_payment;

    balance_after_first_payment =  amount_of_loan * ((100.0f + interest_rate) / 100.0f) - monthly_payment;
    balance_after_second_payment = balance_after_first_payment * ((100.0f + interest_rate) / 100.0f) - monthly_payment;
    balance_after_third_payment = balance_after_second_payment * ((100.0f + interest_rate) / 100.0f) - monthly_payment;

    printf("Balance remaining after first payment is: $%.2f\n", balance_after_first_payment);
    printf("Balance remaining after second payment is: $%.2f\n", balance_after_second_payment);
    printf("Balance remaining after third payment is $%.2f\n", balance_after_third_payment);

    printf("%f", amount_of_loan * (100.0f + interest_rate) / 100.0f / 12.0f);

    return 0;
}