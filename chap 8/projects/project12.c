#include <stdio.h>
#include <ctype.h>

int main (void) {

    int a[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int sum = 0, i;
    printf("Enter word: ");
    while ((ch = getchar()) != '\n') {
        i = toupper(ch) - 65;
        sum += a[i]; 
    }
    printf("\nScrabble value is %d", sum);
}