#include <stdio.h>

struct date {
    int day, month, year;
}date_1, date_2;

int main(void) {

    printf("Enter first date (dd/mm/yy) ");
    scanf("%d/%d/%d", &date_1.day,&date_1.month,&date_1.year);
    printf("Enter the second date (dd/mm/yy) " );
    scanf("%d/%d/%d", &date_2.day, &date_2.month, &date_2.year);

    if (date_1.year<date_2.year)
        printf("%d/%d/%d comes first", date_1.day,date_1.month,date_1.year);
    else if (date_2.year<date_1.year)
        printf("%d/%d/%d comes first", date_2.day,date_2.month,date_2.year);
    else if (date_1.month< date_2.month)
        printf("%d/%d/%d comes first", date_1.day,date_1.month,date_1.year);
    else if (date_2.month<date_1.month)
        printf("%d/%d/%d comes first", date_2.day,date_2.month,date_2.year);
    else if (date_1.day<date_2.day)
        printf("%d/%d/%d comes first", date_1.day,date_1.month,date_1.year);
    else if (date_2.day<date_1.day)
        printf("%d/%d/%d comes first", date_2.day,date_2.month,date_2.year);
    else    
        printf("Same dates");

    printf("\n");
}