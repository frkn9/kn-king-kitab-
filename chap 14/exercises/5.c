#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c) )

int main(void) {


    char str[10];
    int i;
    strcpy(str, "0123");
    i = 0;
    putchar(TOUPPER(str[++i]));


    

}