
// C program to illustrate sizes of
// pointer of array
#include<stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 3
int main() {
    int a[5] = {4,5,8,9,1};
    int *p = a;
    
    printf("%d", *(a+3));
}

