#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 50

void remove_filename(char *url);

int main(void) {
    char str[N];
    printf("Enter file: ");
    scanf("%s", str);
    remove_filename(str);

    printf("%s", str);
}

void remove_filename(char *url) {
    while ( ((*url == '/') && (*(url-1) != '/') && (*(url+1) != '/')) == 0)
        url++;

    strcpy(url, "");
    
    return;    
}