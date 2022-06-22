/* checks the numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};
    int digit, i;
    long long n;
    
    /*printf("Enter a number: ");
    scanf("%ld", &n);   */
    for (;;) {
        for (i = 0; i < sizeof(digit_seen) / sizeof(digit_seen[0]); i++ )
        digit_seen[i] = 0; 
        printf("Enter a number: ");
        scanf("%lld", &n); 
        if (n <= 0) 
            break;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
    }

    if (n > 0)
        printf("Repeated digit \n");
    else 
        printf("No repeated digit \n");
    }

    return 0;


}