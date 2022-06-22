#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_vowel_count(const char *sentence);


int main(void) {

    char c;
    int vowels = 0;
    char word[20];
    
    printf("Enter a sentence: ");
    gets(word);

    printf("Your sentence contains %d vowels.\n", compute_vowel_count(word));
    return 0;
}

int compute_vowel_count(const char *sentence) {

    int vowels = 0;
    int letter_count = 0;

    letter_count = strlen(sentence);
    for(int i = 0; i < letter_count; i++) {
        switch (toupper(sentence[i])) {
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    vowels++;
                    break;
                default:
                    break;
        }
    }

    return vowels;
}