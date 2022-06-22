#include <stdio.h>

int main(void) {

    int fib_numbers[40] = {0,1};

    int i;                                          //fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2]

    for (i = 2; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); i++) {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    printf("%d %d", fib_numbers[4], fib_numbers[38]);
}