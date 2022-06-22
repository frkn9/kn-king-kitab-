#include<stdio.h>

int main() {
    float a, biggest = 0.0f, j = 15;


    while (biggest >= 0 && j > 0)  {
        printf("Enter a number: ");
        scanf("%f", &a); 
        if ( a > biggest) 
            biggest = a;
        if (a <= 0)
            break;
        j--;
    }
    printf("The largest number entered was %.2f", biggest);
    }
