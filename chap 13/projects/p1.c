#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 20


int main(void) {

    char smallest[N];
    char largest[N];
    char new_word[N];   
    int i = 0;
    
    printf("Enter word: ");
    scanf("%s", new_word);
    strcpy(largest, strcpy(smallest,new_word));
    while(1) {
        printf("Enter word: ");
        scanf("%s", new_word);
        if(strcmp(smallest, new_word) == 1)
            strcpy(smallest, new_word);
        if(strcmp(largest, new_word) == -1)
            strcpy(largest, new_word);
        if(strlen(new_word) == 4)
            break;
    } 
    printf("Smallest word is %s\n", smallest);
    printf("Largest word is %s", largest);
}