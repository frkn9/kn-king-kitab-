#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char grid[10][10]) {
    int i, k, random;                                   //0 up 1 right 2 down 3 left
    char letter;                           // up = --i     right = ++k    down = ++i  left --k

    letter = 65;


    for (k = 0; k < 10; k++) {
            for (i = 0; i < 10; i++) {
                    grid[i][k] = 46;
            }                                   //i 0 k 9 
        }

    grid[0][0] = 'A';

    for (i = 0, k = 0; letter < 90 ; printf("success %d\n", letter)) {
        random = rand() % 4;

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
}

void print_array(char grid[10][10]) {
    int i, k;   
    for (i = 0; i < 10; i++) {
        for (k = 0; k < 10; k++) {
            printf("%2c ", grid[i][k]);
        }
        printf("\n");
    }
}

int main(void) {                    //works but sometimes 
/*int i, k, random;                                   //0 up 1 right 2 down 3 left
char grid[10][10], letter;                           // up = --i     right = ++k    down = ++i  left --k

srand((unsigned) time(NULL));

letter = 65;


 for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
                grid[i][k] = 46;
        }                                   //i 0 k 9 
    }

grid[0][0] = 'A';

for (i = 0, k = 0; letter < 90 ; printf("success %d\n", letter)) {
    random = rand() % 4;

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
*/
srand((unsigned) time(NULL));
char grid[10][10];
generate_random_walk(grid);
print_array(grid);

return 0;

}

   