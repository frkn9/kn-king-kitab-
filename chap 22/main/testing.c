#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* fp;
    FILE* fp2;

    fp = fopen(argv[1], "a");
    fp2 = freopen(argv[2], "a", stdout);

    if(fp == NULL) {
        printf("Error while opening the file. ");
        exit(EXIT_FAILURE);
    }

    


    fprintf(fp ,"Allahu Akbar\n");

    fclose(fp);

    printf("niggers xd\n");
}