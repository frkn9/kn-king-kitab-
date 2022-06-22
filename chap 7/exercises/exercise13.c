#include <stdio.h>

int main(void) {

    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("%d\n", c * i);      //type of result : int
    printf("%d\n", s + m );     //type of result : long
    printf("%f\n", f / c);      //type of result : float
    printf("%f\n", d / s);      //type of result : double
    printf("%f\n", f - d);      //type of result : double
    printf("%d\n", (int) f);    //type of result : int 


    printf("////////////%d", c);

}