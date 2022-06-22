#include <stdio.h>

int main (void) {

    int true = 1, false = 0, teenager, age;
    scanf("%d", &age);

    if (age >= 13 && age <= 19) {
        teenager = true;
    }
    else {
        teenager = false;   
    }

    printf("%d", teenager);
}   