#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 50

void get_extension(const char *file_name, char *extension);

int main(void) {
    printf("enter file name: ");
    char file[N];
    char extension[N];
    scanf("%s", file);
    get_extension(file, extension);
    printf("extension format: %s", extension);
}

void get_extension(const char *file_name, char *extension) {

    while((*file_name != '\0') && *(file_name++) != '.');
    
    strcpy(extension, file_name);
    
}