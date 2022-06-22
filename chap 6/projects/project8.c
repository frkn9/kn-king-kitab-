#include<stdio.h>

int main(void) {

    int i, n, s;

    printf("Enter days in the month: ");
    scanf("%d", &n);
    printf("Enter starting day: ");
    scanf("%d", &s);
    
    for (i=1; n >= i; i++) {

        printf("%d\t",i);

        if ( (i + s - 1 )% 7 == 0 )
            printf("\n");
        
    }


}