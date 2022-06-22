#include <stdio.h> 

int main(void) {
    float dollar_cent;
    printf("Inser the amound of dollars and cents.  ");
    scanf("%f", &dollar_cent);

    float with_tax = dollar_cent + dollar_cent * (5.0f / 100.0f);

    printf("Amount with tax added is: %.2f", with_tax);

    return 0;
}