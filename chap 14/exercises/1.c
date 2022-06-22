#include <stdio.h> 
#define CUBE(x) ( (x)*(x)*(x) )
#define REMAINDER_4(x) ( (x)%(4) )
#define PRODUCT_LESS_100(x,y)  ( ( (x)*(y)  < (100) ) ? (1) : (0))   


int main(void) {
    
    int a = 4;
    int b = 489;
    printf("%d\n", CUBE(a));
    printf("%d\n", REMAINDER_4(b));
    printf("%d\n", PRODUCT_LESS_100(a,b));


}