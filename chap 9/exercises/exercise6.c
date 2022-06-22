#include <stdio.h>

int digit (int n, int k) {
    int i;
    for (; k > 0; k--, n /= 10) {
        if (n == 0) {
            return 0;
        }
        i = n % 10;
    }
    return i;
}

int main(void) {
    printf("Enter a number and which digit you want to return: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", digit(a, b));
}