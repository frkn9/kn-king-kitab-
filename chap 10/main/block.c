#include <stdio.h>

int i = 15;

int foo();

int foo(void) {
    printf("%d", i);
}

int main(void) {
    
    i = 7;

    printf("%d\n", i);
    { int i = 5;
    printf("%d\n", i);
    } 
    printf("%d\n", i);
    foo();
}

