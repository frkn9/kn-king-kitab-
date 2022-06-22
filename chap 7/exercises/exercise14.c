#include <stdio.h>

int main(void) {

    float f, frac_part;
    printf("enter fraction: ");
    scanf("%f", &f);

   frac_part = f - (int) f;
   printf("%f", frac_part);             //does this always work correctly?
                                        //No. Converting f to int will fail if the value stored in--
                                        //--f exceeds the largest value of type int.

}