#include <stdio.h>

int main(void) {

    int temperatures[7][24] = { {0}, {56,48,87,78,42,14,59,47,45,15,45,78,98}, [6][22] = 789 };

    int *p;
    int largest = temperatures[0][0];
    for(p = temperatures[0]; p < temperatures[6] + 24;p++) {
        if(*(p+1) > largest)
            largest = *(p+1);
    }

    printf("%d", largest);






}