#include <stdio.h>
#include <stdlib.h>


int* create_array(int n, int initial_value) {

    int* p;
    p = (int*) malloc(sizeof(int) * n);

    if(p == NULL)
        return NULL;
    else {

        int i;


        for(i = 0; i < n; i++) {
            *(p+i) = initial_value;
        }

        return p;
    }
}