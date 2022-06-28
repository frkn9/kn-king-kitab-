#include <stdio.h>
#include <stdlib.h>

void* my_malloc(int n) {
    void *p;

    if((p = malloc(n) ) == NULL) {
        printf("error");
        exit(EXIT_FAILURE);
    }

    return p;
}