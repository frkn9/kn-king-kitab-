#include <stdio.h>

int main () {

    int i;

    for (i = 9384; i > 0; printf("%d\n", i), i /= 10) {
    }
}