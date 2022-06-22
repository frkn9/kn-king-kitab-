#include <stdio.h>

int main (void) {

    int a, b, c, d, max1, max2, max, min1, min2, min;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max1 = (a<b) ? b : a;
    max2 = (c<d) ? d : c;

    max = (max1<max2) ? max2 : max1;

    min1=(a<b) ? a : b; 
    min2=(c<d)?c:d;
    
    min=(min1<min2)?min1:min2;

    printf("largest is: %d\n",max);
    printf("smallest is: %d",min);
}       