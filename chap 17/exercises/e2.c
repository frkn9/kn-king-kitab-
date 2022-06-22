#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* duplicate(const char *p);

int main(void) {
    char *str1 = "asdadaaaaa987";
    char *str2;

    str2 = duplicate(str1);

    printf("%s", str2);


}

char* duplicate(const char *p) {

    char* temp;

    strcpy(temp, p);

    return temp;
}