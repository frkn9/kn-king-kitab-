#include <stdio.h>

int main(){
    int income;
    printf("Enter income:");
    scanf("%d",&income);
    if (income>0)
        if (income < 750)
            printf("Amount of tax: $%.2f", income * 0.01f);
        else if(income<=2250)
            printf("Amount of tax: $%.2f", 7.50f+income*0.02f);
        else if(income<=3750)
            printf("Amount of tax: $%.2f", 37.50f+income*0.03f);
        else if(income<=5250)
            printf("Amount of tax: $%.2f", 82.50f+income*0.04f);
        else if(income<=7000)
            printf("Amount of tax: $%.2f", 142.50f+income*0.05f);
        else
            printf("Amount of tax: $%.2f", 230.00f+income*0.06f);
    else 
        printf("invalid income");

}