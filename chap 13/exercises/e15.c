#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int f(char *s, char *t)
{
    char *p1, *p2;

    for(p1 = s; *p1; p1++) {
        for(p2 = t; *p2; p2++)
            if(*p1 == *p2) break;
        if(*p2 == '\0') break;
    }

    return p1 - s;
}

int main(void) {
    
    printf("%d", f("abcd", "bcd"));
}