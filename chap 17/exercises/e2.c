#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(char* p) {
    char* q;
    q = malloc(sizeof(char) * (strlen(p) + 1));
    if(q == NULL)
        return NULL;
    else {
        strcpy(q, p);
        return q;
    }
}