/* prints a table of squares using for statement */

#include<stdio.h>

int main() {
    long i, n;

    printf("This program prints a table of squares\nEnter number of entries in the table: ");
    scanf("%d", &n);

    for (i = 1; i <= n ;i++){                                   
        printf("%25d%25d \n", i, i * i);                         
    }

    /*Smallest value of n that causes failure while i is of type
    int: 46341              largest 32 bit integer: 2,147,483,647
    short: 182              largest 16 bit integer: 32767
    long: 3037000500        largest 64 bit integer: 9,223,372,036,854,775,807

    Therefore, my machine stores short in 16 bits, int as 32 bits and long in 64 bits.*/

    
}