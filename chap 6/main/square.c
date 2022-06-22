#include <stdio.h>

int main(){

    printf("This program prints a table of squares\nEnter number of entries in table: ");
    int n, i = 1;
    scanf("%d", &n);

    while (n>=i) {
        printf("%10d\t%10d\n", i, i * i);
        ++i;
    }
}