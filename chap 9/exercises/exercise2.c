#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n)
{
  return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}

int main(void) {

    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", check(a, b, c));

}