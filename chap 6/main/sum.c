#include<stdio.h>

int main(){

    /*Sums a series of numbers*/

    int n, sum = 0;
    printf("This program sums a series of integers \n");
    printf("Enter integers (press 0 to terminate) ");
    scanf("%d", &n);

    while (n!=0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d ", sum);
    
    
}