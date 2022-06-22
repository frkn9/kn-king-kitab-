#include <stdio.h>

int main() {
    int knots;
    printf("Enter wind speed in knots: ");
    scanf("%d", &knots);

    if (knots > 0)
        if (knots <= 3) 
            printf("Calm");
        else if ( knots <= 27)
            printf("Light air");
        else if (knots <= 47)
            printf("Gale");
        else if(knots<=63)
            printf("Storm");
        else    
            printf("HURRICANE");
    else
        printf("invalid knot");
        

}