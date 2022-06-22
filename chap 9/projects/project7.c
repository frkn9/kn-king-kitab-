#include <stdio.h>
#include <math.h>

int func(int x, int n) {
    int result = 1;
    if (n != 0) {
        if (n % 2 == 0) {
            result *= (func (x, n / 2) * func(x, n / 2));
        }
        else if (n % 2 == 1) {
            result *= ( x * func(x, n - 1));
        }
    }

    return result;
}

int main(void) {

    int x = 0;
    int n = 0;
    printf("Enter number: ");                                              // pow()
    scanf("%d", &x);
    printf("Enter exponent: ");
    scanf("%d", &n);
    
    printf("%d", func(x, n));
}