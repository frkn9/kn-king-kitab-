#include <stdio.h>
#define N 100

int main(void) {
 
    char str[N];
    char *p = str;

    while ( (*p = getchar()) != '\n')
        p++;

    p--;
    while( p >= str)
        printf("%c", *p--);

}