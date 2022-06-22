#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 100

void censor(char *str, int n);

int main(void) {

    printf("Enter a string: ");
    char str[N];
    gets(str);
    int len = strlen(str);

    censor(str, len);

    printf("%s", str);
}

void censor(char *str, int n) {
    int i = 0;
    while(*(str) != '\0' && (i + 2) <= n)  {
        if(*(str+i) == 'f')
            if(*(str+i+1) == 'o')
                if(*(str+i+2)== 'o')
                {*(str+i) = 'x'; *(str+i+1) = 'x'; *(str+i+2) = 'x';}
    str++;
    }
}