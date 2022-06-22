#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 50

bool test_extension(const char *file_name, const char *extension);

int main(void) {

    char file_name[N];
    char extension[N];

    printf("Enter website name:");
    scanf("%s", file_name);

    strcpy(extension,".exe");
    
    int i = test_extension(file_name, extension);

    if(i == true)
        printf("Same extensions!");
    else    
        printf("Unmatching extensions.");


}

bool test_extension(const char *file_name, const char *extension) {
    
    for(; *file_name != '.'; file_name++);
    
    if(strcmp(file_name, extension) == 0)
        return true;
    else
        return false;
}