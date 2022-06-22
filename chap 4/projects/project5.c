   #include <stdio.h>

    int main (void) {

        int first_digit, one_1, one_2, one_3, one_4, one_5, two_1, two_2, two_3, two_4, two_5;
        printf("Enter the number: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first_digit, &one_1, &one_2, &one_3, &one_4, &one_5, &two_1, &two_2, &two_3, &two_4, &two_5);
        
        int first_sum = first_digit + one_1 + one_2 + one_3 + one_4 + one_5;
        int second_sum = two_1 + two_2 + two_3 + two_4 + two_5;
        int total_sum = 3 * first_sum + second_sum;

        printf("Check digit is: %d\n", 9 - ((total_sum - 1) % 10));

        printf("%d\t%d", first_digit, two_2);

        //amacımıza ulaştık gibi ama kod doğru cevabı vermiyor.
        
        return 0;
        
    }