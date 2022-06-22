#include <stdio.h>  //prints a countdown

void print_count (int n) {                          // doesnt return anything
    printf("T minus %d and counting\n", n);
}

int main (void) {
   
    int i;
    
    for (i = 10; i > 0; i--) {
        print_count(i);
    }

    return 0;
}

