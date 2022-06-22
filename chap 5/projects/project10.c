#include <stdio.h>

int main() {

    int first_digit, second_digit, num;
    printf("Enter grade: ");
    scanf("%d", &num);
    first_digit = num / 10;
    if (num > 0) {
        if (first_digit < 10) {
            switch (first_digit) {
                case 9: printf("A");
                break;
                case 8: printf("B");
                break;
                case 7: printf("C");
                break;
                case 6: printf("D");
                break;
                case 5: case 4: case 3: case 2: case 1: case 0: printf("FF");
                break;
            }
        }
        else if(num == 100)
            printf("A");
        else 
            printf("Error");
        }
    else
        printf("Error");
    

   }