#include <stdio.h>

int main (void) {
      printf("Enter 3 digit number:");
      int digit_1, digit_2, digit_3;
      scanf("%1d%1d%1d", &digit_1, &digit_2, &digit_3);
      printf("The reversal is: %d%d%d",digit_3, digit_2, digit_1);
}