#include <stdio.h>
#include <string.h>

#define N 50

double compute_average_word_length(const char *sent);

int main(void) {

    char arr[N];
    printf("Enter a sentence: ");

    gets(arr);

    printf("Average word lenght %.1f\n", compute_average_word_length(arr));

    

}

double compute_average_word_length(const char *sent) {

    double sum = strlen(sent);
    int i;
    double spaces = 0;

    for(i = 0; i < sum; i++) {
        if(sent[i] == 32) 
            spaces++;
    }  

    return ( (sum - spaces) / (spaces+1) );


}