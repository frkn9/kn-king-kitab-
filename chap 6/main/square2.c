/* prints a table of squares using for statement */

#include<stdio.h>

int main() {
    int i, n;

    printf("This program prints a table of squares\nEnter number of entries in the table: ");
    scanf("%d", &n);

    for (i = 1; i <= n ;i++){
        printf("%10d%10d\n", i, i * i);
    }

    
}