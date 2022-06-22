/* checks the numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int digit_seen[10] = {0};        //digiti kes, hiç girilmiş mi ona bak, girilmişse printle, printlenmişse tekrar printleme 
    int digit, i, k;                                  
    long long n;
    
    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("Digit:          ");

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] += 1;
        n /= 10;
    }

    for (k = 0; k < 10; k++) {
        printf("%4d", k);
    }

    printf("\nOccurrences:    ");
    for (k = 0; k < 10; k++) {
        printf("%4d", digit_seen[k]);
    }


    return 0;
}