#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 15

int main(void) {

    char c;
    int i = 0, k;
    char message[MAX_SIZE];

    printf("Enter phone number: ");
    while((c = getchar()) != '\n' && i < MAX_SIZE) {
        message[i++] = c;
    }
    k = i - 1;
    i = 0;
    while (i <= k) {
        switch ( toupper(message[i]) ) {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar('9');
                break;
            default:
                putchar(message[i]);
                break;
        }
        i++;
    } 
}