#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 80

void encrypt(char *message, int shift);

int main(void) {
    char arr[MAX_SIZE];
    int shift;
    printf("Enter a message: ");
    gets(arr);
    printf("Enter shift amount: ");
    scanf("%d", &shift);
    encrypt(arr, 5);

    printf("Message encrypted by %d letters is %s", shift, arr);

}

void encrypt(char *message, int shift) {

    char c;
    int length = strlen(message);
    int i;

    for(i = 0; i < length ; i++) {
        if(*(message+i) != ' ') {
            c = *(message+i);
            c += shift;
            *(message+i) = c;
        }
    }

    return;


}