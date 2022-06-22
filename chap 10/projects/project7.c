#include <stdio.h>

int main(void) {
                                                                    //3 için        //column 3 hep boş;
    char array[3][4] = {{32,32,32,32},{32,32,32,32},{32,32,32,32}};

    array[0][1] = '_';
    array[1][1] = '_', array[1][2] = '|';
    array[2][1] = '_', array[2][2] = '|';

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%c", array[i][j]);
            if(j == 3) 
                printf("\n");
        }
    }






}                 












