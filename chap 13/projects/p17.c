#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define N 100

bool is_palindrome(char *message) {
    char *p = message;
    char *q = message;

    while(*p)
        p++;
    p--;

    while(p > q)
        if(*p-- != *q++)
            return false;
        
    return true;

}

int main(void) {
    char str[N];
    
    printf("Enter a message: ");
    gets(str);

    if(is_palindrome(str))
        printf("Word is a palindrome!");
    else
        printf("Word is NOT a palindrome!");
}