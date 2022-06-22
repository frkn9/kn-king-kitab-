#include <stdio.h>

int main(void) {

    char init_name, surname;
    printf("Enter a first name and last name: ");
    
    scanf(" %c", &init_name);

    while ((surname = getchar()) != ' ') ;
    while ((surname = getchar()) == ' ') ;

     do {
        putchar(surname);
    } while ((surname = getchar()) != '\n' && surname != ' ');

    printf(", %c.\n", init_name);


    return 0;

}