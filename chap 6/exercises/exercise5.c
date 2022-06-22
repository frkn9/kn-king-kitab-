#include<stdio.h>

int main () {
    int i = -5;
    while (i > 10)
    {
        printf("while");
    }
    
    for (; i > 10; ) {
        printf("for");
    }
    do {
        printf("do");
    } while (i > 10);
    

    
}