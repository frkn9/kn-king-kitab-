#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 20

int main(void) {

    int alphabet[26] = {0};             //alfabe arrayi
    int i;                              //upper case 65--90
    char c, k;

    printf("Enter first word: ");

    for (i = 0; i < MAX_SIZE; i++) {

        c = getchar();
        if (isalpha(c)) {
            alphabet[toupper(c) - 65] += 1;
        }
        if (c == '\n') break;
    }

    printf("Enter second word: ");

    for (i = 0; i < MAX_SIZE; i++) {
        c = getchar();
        if (isalpha(c)) {
            alphabet[toupper(c) - 65] -= 1;
        }
        if (c == '\n') break;
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] != 0) {
            printf("The words are not anagrams");
            break;
        }
        else {
            printf("The words are anagrams");
            break;
        }
    }

    
}
	