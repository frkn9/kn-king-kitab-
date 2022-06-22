#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int read_line(char str[], int n) {
    int ch, i = 0;

    while (isspace( (ch = getchar())))                                /* (a) */
        ; 
    str[i++] = ch;
    while (i < n && (ch = getchar()) != '\n' && !isspace(ch)) /* (b) & (d) */
        str[i++] = ch;
    if (ch == '\n' && i < n - 1)                              /* (c) */
        str[i++] = '\n';
    str[i] = '\0';
    return i;
}

int main(void) {
    char str[10];

    read_line(str, 10);

    printf("%s", str);
}