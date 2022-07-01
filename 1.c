#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    int i = strlen(argv[1]);

    for(; i >= 0; i-- ) {

        putchar(argv[1][i]);
    }
        putchar('\n');
    int arr[10][5] = { {1,2,3,4,5}, {6,7,8,9,10} };
    int sum = 0;
    int j, k;

    for(j = 0; j < 10; j++) 
        for(k = 0; k < 5; k++)
            sum += arr[j][k];


    printf("%d\n", sum);
}