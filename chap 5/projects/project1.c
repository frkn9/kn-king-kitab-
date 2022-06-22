#include <stdio.h>

int main() {

    int number;
    printf("Enter a number with up to 3 digits: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("The number has 1 digit");
    }
    else if (number < 100) {
        printf("The number has 2 digits");    
    }
    else if (number < 1000) {
        printf("The number has 3 digits");
    }
}