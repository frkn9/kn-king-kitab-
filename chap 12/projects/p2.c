#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void) {
    char str[N];
    char c, *p, *q;
    p = str;
    q = str;    

    while( ( c = toupper(getchar())) != '\n')
        if(isalpha(c))
            *p++ = c;

    p--;
    
    while( q < p ) {
        if(*p != *q) {
            printf("Not a palindrome");
            return 0;
        }
    p--;
    q++;
    }

    printf("Palindrome");
    return 0;

}