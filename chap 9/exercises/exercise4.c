#include <stdio.h>

int day_of_year();

int main(void) {

    int month, day, year;
    printf("Enter month/day/year: ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Day of the year is: %dth day of %d", day_of_year(month, day, year), year);
}

int day_of_year(int month, int day, int year) {

    int sum = 0, i; 
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    i = month;
    for (; month > 0; month--) {
        sum += num_days[month - 1];
    }
    sum += day;

    if (year % 4 == 0 && i > 2)
    sum++;

    return sum;
}

 