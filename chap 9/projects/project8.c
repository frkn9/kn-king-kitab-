/*First roll: sum of dices = 7 or 11 --> win || sum of dices = 2 or 3 or 12 --> lose    two dices with 6 faces
*any other sum is "point"
*player wins if they get point again
*the player loses by rolling 7
*any other sum is ignored
*ask if they want to play again
*display wins and loses at the end
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void) {
    int first_dice;
    int second_dice;
    first_dice = ((rand() % 6) + 1);
    second_dice = ((rand() % 6) + 1);

    return first_dice + second_dice; 

}

bool play_game(void) {
    int point = 0;
    int first_roll = 0;
    int next_roll = 0;

    first_roll = roll_dice();
    if (first_roll == 7 || first_roll == 11) {
        printf("Your roll is %d", first_roll);
        printf("\nYou won!");
        return 0;
    }
    else if (first_roll == 2 || first_roll == 3 || first_roll == 12) {
        printf("Your roll is %d", first_roll);
        printf("\nYou lost");
        return 1;
    }
    else 
        printf("Your roll is %d", first_roll);
        point = first_roll;
    
    
    while ((next_roll = roll_dice()) != point) {
        printf("\nYour roll is %d", next_roll);
        if (next_roll == 7) {
            printf("\nYou lost");
            return 1;
        }
    }
    if (next_roll == point) {
            printf("\nYour roll is %d", next_roll);
            printf("\nYou won!");
            return 0;
    }
}

int main(void) {
    int win_count = 0;
    int lose_count = 0;
    char repeat;
    srand(time(NULL));
    do {
        if (play_game() == 0)
            win_count++;
        else 
            lose_count++;
        printf("\nDo you want to repeat?\n");
        scanf(" %c", &repeat);
    } while (tolower(repeat) == 'y');

    printf("Wins: %d\nLoses: %d", win_count, lose_count);
}