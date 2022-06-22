#include <stdio.h>

int main(void) {

    char checker_board[8][8];

    int i, j;

    for (i = 0, j = 0; i < 8; i++) {
        if ( (i + j) % 2 == 0)
            checker_board[i][j] = 'B';     
        else   
            checker_board[i][j] = 'R';
        if (i == 7) 
            j++, i = -1;
        if (j == 8)
            break;                                   //B for even
    }       

        
 

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%4c", checker_board[i][j]);
        }
        printf("\n");
    
}
}