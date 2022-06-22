#include <stdio.h>

double tax(double income){
    double tax_value = 0.0f;
        if (income < 750)
           tax_value =  income * 0.01f;
        else if(income<=2250)
            tax_value = 7.50f + income * 0.02f;
        else if(income<=3750)
            tax_value = 37.50f+income*0.03f;
        else if(income<=5250)
            tax_value = 82.50f+income*0.04f;
        else if(income<=7000)
            tax_value = 142.50f+income*0.05f;
        else
            tax_value = 230.00f+income*0.06f;
    return tax_value;

}

int main(void) {
    double income;
    printf("Enter income: ");
    scanf("%lf", &income);
    if (income > 0)
        printf("Amount of tax: $%.2lf", tax(income));
    else    
        printf("Invalid income");
}