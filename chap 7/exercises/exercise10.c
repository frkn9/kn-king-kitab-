#include <stdio.h>

int main () {

    int i;
    long j;
    unsigned int k;

    printf("%d", i + (int) j * k);      //expression is unsigned int bc rules
}