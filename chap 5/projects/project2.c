#include <stdio.h>

int main() {
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12 && hour <= 24 && minute < 60) {
        printf("Equivalant 12-hour time: %d:%2.2d PM", (hour - 12), minute);
    }
    else if ( hour < 12) {
        printf("Equivalant 12-hour time: %d:%2.2d AM", (hour), minute);
    }
    else if ( hour == 12) {
         printf("Equivalant 12-hour time: %d:%2.2d AM", (hour), minute);
    }
    else {
        printf("Invalid time");
    }

}