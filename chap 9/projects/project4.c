#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_SIZE 20

void read_word(int counts[26]) {
    printf("Enter first word: ");
    int i;
    char c;
    for (i = 0; i < MAX_SIZE; i++) {
        c = getchar();
        if (isalpha(c)) {
            counts[toupper(c) - 65] += 1;
        }
        if (c == '\n') break;
    }
}

bool equal_array(int counts1[26], int counts2[26]) {
    
    int i;
    for (i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) {
            printf("The words are not anagrams");
            break;
        }
        else {
            printf("The words are anagrams");
            break;
        }
    }
}

int main(void) {
    int alphabet1[26] = {0};  
    int alphabet2[26] = {0};          

    read_word(alphabet1);
    read_word(alphabet2);
    equal_array(alphabet1, alphabet2);
}
	