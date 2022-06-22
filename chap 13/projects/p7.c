#include<stdio.h>

int main(){
    int digit10, digit1;
    printf("Enter two digit number ");
    scanf("%1d%1d", &digit10, &digit1);
    char *sec_digits[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *first_digits[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *tens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    if(digit10 == 1)
        printf("%s", *(tens+digit1));
    else 
        printf("%s-%s", *(sec_digits + digit10 - 2), *(first_digits + digit1 - 1));
}