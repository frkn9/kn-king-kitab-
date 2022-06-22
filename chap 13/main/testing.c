#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100


int main(int argc, char* argv[]) {
    
    int i = 1;

    while(i < argc) {
        printf("%s\n", &argv[i][0]);
        i++;
    }
    
}


	