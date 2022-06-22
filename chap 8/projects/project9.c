#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {                    //bazen calısıyor
int i, k, random;                                   //0 up 1 right 2 down 3 left
char grid[10][10], letter;                           // up = --i     right = ++k    down = ++i  left --k

srand((unsigned) time(NULL));

letter = 65;


 for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
                grid[i][k] = 46;
        }                                   //i 0 k 9 
    }
int count = 0;
grid[0][0] = 'A';

for (i = 0, k = 0; letter < 90 ; count++ ) {
    if (count > 100)
        break;
    random = rand() % 4;

    if (i == 0 && k == 9 && grid[0][8] != 46 && grid[1][9] != 46)
        break;
    else if (i == 9 && k == 0 && grid [8][0] != 46 && grid[9][1] != 46)
        break;
    else if (i == 9 && k == 9 && grid[9][8] != 46 && grid[8][9] != 46)
        break;
    else if (i == 1 && k == 0 && grid[1][1] != 46 && grid[2][0] != 46)
        break;
    
    if (grid[i][k - 1] != 46 && grid[i + 1][k] != 46 && grid[i][k + 1] != 46 && grid[i - 1][k] != 46) 
        break;

    switch(random) {
        case 0:
            if (i != 0) {
                if (grid[i - 1][k] == 46)
                    grid[--i][k] = ++letter; 
                else if (grid[i][k - 1] != 46 && grid[i + 1][k] != 46 && grid[i][k + 1] != 46) break;
            }

            break;

        case 1: 
            if (k != 9) {
                if (grid[i][k + 1] == 46)
                    grid[i][++k] = ++letter;
                else if (grid[i][k - 1] != 46 && grid[i + 1][k] != 46 && grid[i - 1][k] != 46) break;
            }
            break;

        case 2:
            if (i != 9) {
                if (grid[i + 1][k] == 46)
                    grid[++i][k] = ++letter;
                else if (grid[i][k - 1] != 46 && grid[i][k + 1] != 46 && grid[i - 1][k] != 46) break;
            }
            break;

        case 3:
            if (k != 0) {
                if (grid[i][k - 1] == 46)
                    grid[i][--k] = ++letter;
                else if (grid[i + 1][k] != 46 && grid[i][k + 1] != 46 && grid[i - 1][k] != 46) break;
            }
            break;
            
        }
    }

for (i = 0; i < 10; i++) {
        for (k = 0; k < 10; k++) {
            printf("%2c ", grid[i][k]);
        }
        printf("\n");
    }

return 0;

}

   