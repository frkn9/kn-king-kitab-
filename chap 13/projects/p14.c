#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define N 30

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
    char first_word[N];
    char second_word[N];

    printf("Enter first word: ");
    scanf("%s", first_word);
    printf("Enter second word: ");
    scanf("%s", second_word);

    if( are_anagrams(first_word, second_word) == true)
        printf("Words are anagrams!");
    else
        printf("Words are NOT anagrams");

    return 0;

}

bool are_anagrams(const char *word1, const char *word2) {

    int len;
    len = strlen(word1);
    if(len != strlen(word2))
        return false;
    int i;
    int alphabet[26] = {0};

    for( i = 0; i < len; i++) {
        alphabet[ toupper(*(word1+i)) - 65] += 1; 
    }

    for( i = 0; i < len; i++) {
        alphabet[ toupper(*(word2+i)) - 65] -= 1; 
    }

    for( i = 0; i < 26; i++) {
        if(alphabet[i] != 0)
            return false;
    }

    return true;

    

    

}