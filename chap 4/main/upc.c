    #include <stdio.h>

    int main (void) {

        int first_digit, one_1, one_2, one_3, one_4, one_5, two_1, two_2, two_3, two_4, two_5;
        printf("Enter the first digit ");
        scanf("%d", &first_digit);
        printf("Enter the first group of five digits ");
        scanf("%1d%1d%1d%1d%1d", &one_1, &one_2, &one_3, &one_4, &one_5);
        printf("Enter the second group of five digits ");
        scanf("%1d%1d%1d%1d%1d", &two_1, &two_2, &two_3, &two_4, &two_5);
        
        int first_sum = first_digit + one_2 + one_4 + two_1 + two_3 + two_5;
        int second_sum = one_1 + one_3 + one_5 + two_2 + two_4;

        int total_sum = (3 * first_sum) + second_sum;

        printf("Check digit is: %d", 9 - ((total_sum - 1) % 10));

        return 0;
        
    }