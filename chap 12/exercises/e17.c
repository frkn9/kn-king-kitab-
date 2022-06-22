#include <stdio.h>
#define LEN 23
#define N 7

int sum_two_dimensional_array( int a[][LEN], int n) {
    int *p;
    int sum = 0;
    for(p = *a; p <= *a + n * LEN - 1; p++) {
        sum += *p;
    }

    return sum;

}   

int main(void) {
    int temperatures[N][LEN] = { {0}, {56,48,87,78,42,14,59,47,45,15,45,78,98}, [6][22] = 789 };

    printf("%d", sum_two_dimensional_array(temperatures, N));
}