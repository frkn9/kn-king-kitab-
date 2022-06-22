/* checks the numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};        //digiti kes, hiç girilmiş mi ona bak, girilmişse printle, printlenmişse tekrar printleme 
    int digit, i;                                  
    long long n;
    
    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("Repeated digit(s): ");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            printf("%d ", digit);
        }
        digit_seen[digit] = true;
        n /= 10;    
    }

    return 0;
}