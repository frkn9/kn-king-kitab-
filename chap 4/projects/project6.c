#include <stdio.h>

int main (void) {

    printf("Enter the first 12 digits of an EAN:  ");
    int num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9, num_10, num_11, num_12, first_sum, second_sum, total;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",  &num_1, &num_2, &num_3, &num_4, &num_5, &num_6, &num_7, &num_8, &num_9, &num_10, &num_11, &num_12 );
    first_sum = num_2 + num_4 + num_6 + num_8 + num_10 + num_12;
    second_sum = num_1 + num_3 + num_5 + num_7 + num_9 + num_11;
    total = ( 3 * first_sum) + second_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));


}

