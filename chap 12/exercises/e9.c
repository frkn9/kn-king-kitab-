#include <stdio.h>
#define N 10

double inner_product(const double *a, const double *b, int n) {
    double sum = 0.0, *p, *q;

    for(p = a, q = b; p < a + n; p++, q++) {
        sum+= (*p) * (*q); 
    }

    return sum;
}

int main(void) {
    
    double a[N] = {10,9,8,7,6,5,4,3,2,1};
    double b[N] = {10,9,8,7,6,5,4,3,2,1};

    printf("%.2lf", inner_product(a, b, N));
} 
