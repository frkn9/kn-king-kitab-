#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s1[100]; 
    char s2[100]; 


    strcpy(s1, "computer");
    strcpy(s2, "science");

    if((strcmp(s1, s2)) < 0)  //-1 çıkacak
        strcat(s1, s2);       //s1 = "computerscience"
    else        
        strcat(s2, s1);     
    s1[strlen(s1) - 6] = '\0';      //strlens1 = 15
            
    printf("%s", s1);               //computers çıkar
}