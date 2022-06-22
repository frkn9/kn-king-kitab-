#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 50

void build_index_url(const char *domain, char *index_url);

int main(void) {

    char dotcom[N];
    char full_index[N];
    printf("enter your site in specified format (for example: \"twitter.com\"): ");

    scanf("%s", dotcom);

    build_index_url(dotcom, full_index);

    printf("%s", full_index);
}

void build_index_url(const char *domain, char *index_url) {

    strcpy(index_url, "https://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}