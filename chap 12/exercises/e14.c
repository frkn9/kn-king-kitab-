#include <stdio.h>
#include <stdbool.h>

bool search(int (*a)[24],int  row, int col) {
    int *p = &a[0][0];

    for(; p < &a[row-1][col-1]; p++) {
        if(*p == 33)
            return true;
    } 
    return false;


}



int main(void) {
    int temperatures[7][24] = {0, [4][6] = 33};

    printf("%d", search(temperatures, 7, 24));

}