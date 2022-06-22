#include <stdio.h>

int main(void){
    int item_num, purchase_day, purchase_month, purchase_year;
    float item_price;

    printf("Enter item number: "),
    scanf("%d", &item_num);
    printf("Enter item price: ");
    scanf("%f", &item_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t%.2f\t\t%d/%d/%d", item_num, item_price, purchase_month, purchase_day, purchase_year);

    return 0;
}