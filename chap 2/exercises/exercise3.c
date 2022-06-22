/* Computes the dimensional weight of a 12" x 10" x 8" box. */
#include <stdio.h>

int main(void) {

int height = 8, lenght = 12, width = 10, volume = height * lenght * width;

printf("Dimensions: %d, %d, %d\n", height, lenght, width);
printf("Volume (cubic inches) : %d\n", volume);
printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

printf("Volume: %d\n", height * lenght * width);

int i;
float x;
scanf("%d", &i);
scanf("%f", &x);
printf("%d\n", i);
printf("%.f", x);

return 0;   
}