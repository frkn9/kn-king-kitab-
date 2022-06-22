/* Converts a fahrenhait temperature to Celcius */
#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenhait, celcius;

    printf("Enter Fahrenhait temperature: ");

    scanf("%f", &fahrenhait);

    celcius = (fahrenhait - FREEZING_POINT) * SCALE_FACTOR;

    printf("Celcius equivalent is:  %.1f", celcius); 

       return 0;
}