#include <stdio.h>
#include <string.h>
#define N 100


void reverse(char *message);

int main(void) {
    
    char message[N];
    printf("Enter a message to reverse: ");
    gets(message);

    reverse(message);
    
    printf("Reversed: %s", message);

}

void reverse(char *message) {

    char *p = message;
    while(*p)
      p++;
    p--;

    char *q = message;
    char temp;


    while(p > q) {
        temp = *p;
        *p = *q;
        *q = temp;

        q++;
        p--;
    }   

    return;

}