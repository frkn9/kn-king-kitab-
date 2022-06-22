#include <stdio.h>          // random

void foo(void);  //forward-decl, it's OK to omit the parameter's name, in both C++ and C

int main()
{
    foo();
    return 0;
}

void foo(void)  //definition in C, it cannot compile with gcc
{
    printf("in foo\n");
}