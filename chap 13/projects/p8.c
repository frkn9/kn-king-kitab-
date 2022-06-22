#include <stdio.h>
#include <ctype.h>
#include <string.h>

int scrabble(const char *word);

int main (void) {
    char word[20];
    printf("Enter word: ");
    scanf("%s", word);
    printf("Scrabble value is %d", scrabble(word));
}

int scrabble(const char *word) {
    int n = strlen(word);
    int sum = 0;

    for(int i = 0; i < n; i++) {
        switch (toupper(word[i])) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                    sum += 1;
                    break;
                case 'D': case 'G':
                    sum += 2;
                    break;
                case 'B': case 'C': case 'M': case 'P':
                    sum += 3;
                    break;
                case 'F': case 'H': case 'V': case 'W': case 'Y':
                    sum += 4;
                    break;
                case 'K':
                    sum += 5;
                    break;
                case 'J': case 'X':
                    sum += 8;
                    break;
                case 'Q': case 'Z':
                    sum += 10;
                    break;

                default: 
                    sum += 0;
                    break;
         }
    }

    return sum;
}