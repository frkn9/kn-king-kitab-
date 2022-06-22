#include <stdio.h>

int main () {

    int i;
    for (i = 1; i <= 128; i*= 2) {
        printf("%-10d", i);
    }
}