#include <stdio.h>

int main() {

    printf("Enter two integers: ");
    int a, b, remainder;
    scanf("%d %d", &a, &b);

    for (; b != 0; ) {
        remainder = a % b;          // a = m, b = n
        a = b;
        b = remainder;
    }
    printf("Greatest common divisor: %d ", a);


}