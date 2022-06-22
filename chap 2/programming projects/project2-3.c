#include <stdio.h>

int main(void) {
    printf("Insert the value of radius to calculate the sphere's volume: ");

    int r;

    scanf("%d", &r);

    printf("Volume of the sphere with radius %d is, %.1f m^3", r, (4.0f / 3.0f) * 3 * r * r * r);

}