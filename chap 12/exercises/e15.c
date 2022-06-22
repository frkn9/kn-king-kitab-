#include <stdio.h>

int main(void) {
    int temperatures[7][24] = { {0}, {56,48,87,78,42,14,59,47,45,15,45,78,98} };
    int i = 1;
    int *p;
    
    for(p = temperatures[i]; p < temperatures[i+1]; p++) {
        printf("%d ", *p);  
    }

}