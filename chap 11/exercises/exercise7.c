#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void) {
    int day_of_year, year, month, day;

    printf("Enter the day of the year(between 1 and 366) and the year: ");
    
    scanf("%d %d", &day_of_year, &year);

    split_date(day_of_year, year, &month, &day);

    printf("%d,%d", month, day);
}

void split_date(int day_of_year, int year, int *month, int *day) {

    if( (year % 4) == 0 ) {
        if (day_of_year > 31)
            day_of_year-= 31;
        else{
            *month = 1;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 29)
            day_of_year -= 29;
        else {
            *month = 2;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 3;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 4;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 5;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 6;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 7;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 8;
            *day = day_of_year;
            return;
        }
        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 9;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 10;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 11;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 12;
            *day = day_of_year;
            return;
        }
    }

        if( (year % 4) != 0 )
        
        {
        if (day_of_year > 31)
            day_of_year-= 31;
        else {
            *month = 1;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 28)
            day_of_year -= 28;
        else {
            *month = 2;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 3;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 4;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 5;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 6;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 7;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 8;
            *day = day_of_year;
            return;
        }
        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 9;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 10;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 30)
            day_of_year -= 30;
        else {
            *month = 11;
            *day = day_of_year;
            return;
        }

        if (day_of_year > 31)
            day_of_year -= 31;
        else {
            *month = 12;
            *day = day_of_year;
            return;
        }





    }   
}
