#include <stdio.h>
#include <ctype.h>
int main() {

    int hour, minute;
    char ch;
    printf("Enter a 12-hour time: (hh:mm +*pm or am*) ");
    scanf("%d:%d %c", &hour, &minute, &ch);

    switch (toupper(ch))
    {
    case 'A':
        printf("Equivalant 24-hour time: %.2d:%.2d", hour, minute);
        break;
    case 'P':
        if(hour != 12) {
        hour += 12;
        printf("Equivalant 24-hour time: %.2d:%.2d", hour, minute);
        }
        else {
            hour = 0;
            printf("Equivalant 24-hour time: %.2d:%.2d", hour, minute);
        }
    
    default:
        break;
    }
}