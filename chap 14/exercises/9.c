#include <stdio.h>
#include <math.h>
#define CHECK(x, y, n) ( (((x)>=0 && (x)<=(n)-1) && ((y)>=0 && (y)<=(n)-1)) ? 1 : 0 )
#define BIGGEST(x,y,z) (((x) > (y)) && ((x) > (z))) ? x :  ( ((y) > (x)) && ((y) > (z)) ? y : z )
#define POLYNOMIAL(x) ( 3*pow((x),5) + 2*pow((x),4) + (-5)*pow((x),3) + (-1)*pow((x),2) + 7*(x) - 6 )
int main(void) {

    int a = 7, b = 5, c = 6;

    printf("%d\n", CHECK(a,b,c));

    printf("Biggest: %d\n", BIGGEST(a,b,c));

    printf("%.2f\n", POLYNOMIAL(a));
    
    
}