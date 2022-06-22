#include <stdio.h>

int main (void) {
    int i, j;

    printf("type in i: ");
    scanf("%d", &i);
    printf("type in j: ");
    scanf("%d", &j);

    printf("%d", (i > j) - (i < j));
}