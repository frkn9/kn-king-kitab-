#include <stdio.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)
/* program that takes 3 height lenght and width values and calculates the volume and weight. */

int main (void){
    int height, lenght, width, volume, weight;

    printf("Please enter height:  ");
    scanf("%d", &height);
    printf("Please enter lenght:  ");
    scanf("%d", &lenght);
    printf("Please enter width:  ");
    scanf("%d", &width);
    volume = height * lenght * width;
    weight = (volume + (INCHES_PER_POUND -1)) / INCHES_PER_POUND;

    printf("Volume is (cubic inches):  %d\n", volume);
    printf("Dimensional weight is (pounds):   %d\n", weight);

    printf("%d", RECIPROCAL_OF_PI);

    return 0;

}