#include <stdio.h>
#define MAX_SIZE 20

int main(void) {
    char a[20];
    int i = 0, k;
    char init_name;
    printf("Enter a first name and last name: ");
    
    scanf(" %c", &init_name);

    while ((a[0] = getchar()) != ' ');
    while ((a[0] = getchar()) == ' ');       //surname = boşluk iken hiçbirşey yapma

    do {
        i++;
    } while ( (a[i] = getchar()) != '\n' && a[i] != ' ');
    k = i;

    for(i = 0; i < k; i++ ) {
        printf("%c", a[i]);
    }
    printf(", %c.\n", init_name);


    return 0;

}