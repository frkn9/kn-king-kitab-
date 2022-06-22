#include <stdio.h>
#include <stdlib.h>

void* my_malloc(size_t n);

int main(void) {
    int* kk;

    kk = my_malloc(10 * sizeof(kk));

    for(int i = 0; i < 10; i++) {
        kk[i] = 40;
    }

    printf("%d", *(kk+4));
}

void *my_malloc(size_t n) {
    void *p;
    if ((p = malloc(n)) == NULL) {
        printf("Error: malloc failed.\n");
        exit(EXIT_FAILURE);
    }
    return p;
}