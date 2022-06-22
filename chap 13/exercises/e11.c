#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int strcomparison(char *s, char *t) {
    for(; *s == *t; s++, t++) 
        if(*s == '\0')
            return 0;
    return *s - *t;
}

int main(void) {
    char str1[100] = "furkan";
    char str2[100] = "merve";
    
    printf("%d",strcomparison(str1, str2));
}