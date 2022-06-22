#include <stdio.h>

int main(void) {

    printf("Enter a sentence: ");
    char c;
    float word_count = 1.0f, word_lenght = 0.0f;

    while ((c = getchar()) != '\n') {
        if (c == ' ') 
            word_count++;
        else 
            word_lenght++; 
        }
        printf("Average word lenght %.1f\n", word_lenght / word_count);
        return 0;
}