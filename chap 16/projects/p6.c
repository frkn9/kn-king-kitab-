#include <stdio.h>
#include "../exercises/e5.c"


int main(void) {

    printf("Enter first date (dd/mm/yy) ");
    scanf("%d/%d/%d", &date_1.day,&date_1.month,&date_1.year);
    printf("Enter the second date (dd/mm/yy) " );
    scanf("%d/%d/%d", &date_2.day, &date_2.month, &date_2.year);

    

    if (date_1.year<date_2.year)
        printf("%d/%d/%d comes first", date_1.day,date_1.month,date_1.year);
    else if (date_2.year<date_1.year)
        printf("%d/%d/%d comes first", date_2.day,date_2.month,date_2.year);
    else{
        int i = compare_dates(date_1, date_2);
        if( i == 1)
            printf("%d/%d/%d comes first", date_2.day,date_2.month,date_2.year);
        else if (i == -1)
            printf("%d/%d/%d comes first", date_1.day,date_1.month,date_1.year);
        else 
            printf("Same date");
    }
    printf("\n");
}