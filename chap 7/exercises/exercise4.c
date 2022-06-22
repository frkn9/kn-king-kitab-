#include <stdio.h>

int main () {
    char c = 21;        
    int i = 12;
    i += c;             //legal
    c = 2 * c - 1;      //legal
    printf("i:%d/ c:%d\n", i, c); 
   // printf(c); //illegal
   putchar(c); //legal
   
    

}