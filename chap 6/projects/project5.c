#include <stdio.h>

int main (void) {

    printf("Enter a two digit number: ");
    int num;
    scanf("%d", &num);
    
    
    do {
        printf("%d", num % 10);
        num /= 10;
        
    }  while (num > 0);


    
    

    return 0;
}