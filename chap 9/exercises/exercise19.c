#include <stdio.h>

void pb(int n) {            //10 call 5 call 2 call 1 call 0
    if (n != 0) {
        pb (n / 2);
        putchar('0' + n % 2);       // 1 yazdı 0 yazdı 1 yazdı 0 yazdı
    }
}

int main(void) {

    int input;
    printf("Enter input: ");
    scanf("%d", &input);
    pb(input);
}