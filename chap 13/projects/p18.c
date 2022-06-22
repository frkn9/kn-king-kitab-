#include <stdio.h>
#include <string.h>

int main(void) {

    int day;
    int month;
    int year;

    char* p[] = {"January", "February", "March", "April","May", "June","July","September","October","November","December"}; //pointer arrayi
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %s %d, %d", *(p+month-1), day, year);


}