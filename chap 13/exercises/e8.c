#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[100];      //tired or wired çıkacak, line 10 da "d-or-wi" nin kopyalanması strnin 4. karakterinden itibaren başlatılıyor

    strcpy(str, "tire-bouchon");
    strcpy(str+4, "d-or-wi");
    strcat(str, "red?");

    printf("%s", str);

}