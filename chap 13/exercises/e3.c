#include <stdio.h>
#include <string.h>

int main(void) {

    int i, j;
    char s[100];


    scanf("%d%s%d", &i, s, &j); //12 abc34 56

    printf("%d\n", i);
    printf("%s\n", s);
    printf("%d\n", j);
}