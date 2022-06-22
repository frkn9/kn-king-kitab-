#include <stdio.h>
#include <ctype.h>

int main(void) {


    int i = 0;

    printf("%p", &i);
}

void f(const int *p);