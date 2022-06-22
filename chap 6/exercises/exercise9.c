#include <stdio.h>

int main () {
    int i = 10, j = 30;
    while (i  >= 0 && j > 0 )
    {
        printf("%4d", i++);
        i /= 2;        
        j--;
    }
    
}