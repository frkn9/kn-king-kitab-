#include <stdio.h>

int main() {
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (k = 2; num >= k * k ; k += 2) {
        printf("%d\n", k * k);
    }
}