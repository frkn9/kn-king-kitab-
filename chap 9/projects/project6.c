#include <stdio.h>
#include <math.h>

void func(int x) {
    
    printf("Enter number to calculate: ");

    scanf("%d", &x);
    int polinom;

    polinom = (3 * pow(x,5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - (1 * pow(x, 2)) + (7 * x) - 6;
    printf("%d\n", polinom);

}

int main(void) {

    int a;
    func(a);
    
}

