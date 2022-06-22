#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 100  //takes a string, converts all alphabeetic characters to uppercase

void capitalize(char *str, int n);

int main(void) {
    
    char str[N];
    printf("Enter anything: ");
    gets(str);
    int length = strlen(str);
    capitalize(str, length);
    printf("%s", str);
}

void capitalize(char *str, int n) {
    int i = 0;

    while((*(str+i) != '\0') && i < n)  {
        if(isalpha(*(str+i)));
            *(str+i) = toupper(*(str+i));
        i++;
    }
    return;
}

