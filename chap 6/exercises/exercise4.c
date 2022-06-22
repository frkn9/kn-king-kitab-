#include <stdio.h> 

int main() {

    int i;

    for (i = 0; i < 10; i++) {
        printf("%d\t", i);
    }
    printf("\n\n");
    for (i = 0; i < 10; ++i) {
        printf("%d\t", i);
    }
    printf("\n\n");
    for (i = 0; i++ < 10;) {
        printf("%d\t", i);
    }
}