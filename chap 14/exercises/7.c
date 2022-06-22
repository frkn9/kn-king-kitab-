#include <stdio.h>
#define GENERIC_MAX(type) \
type type##_max(type x, type y) {return x > y ? x : y;}
typedef unsigned long ULONG;    

GENERIC_MAX(float);
GENERIC_MAX(ULONG);



int main(void) {

    int x = 41;
    int y = -21;

    printf("%.2f\n", float_max(x,y));
    printf("%d", ULONG_max(x,y));
}