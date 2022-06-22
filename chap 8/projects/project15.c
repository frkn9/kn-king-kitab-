#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 80


int main(void) {
/*  lower case >> 97 to 122
    *upper case >> 65 to 90 */

   char a[MAX_SIZE];
   char c, k;
   int i;
   int shift;

    printf("Enter a message to be encrypted: ");

    for (i = 0; i < MAX_SIZE; i++) {
        a[i] = getchar();
        if (a[i] == '\n') break;
    }

    

    printf("Enter shift amount(1-25): ");
    scanf("%d", &shift);

    for (i = 0; i < MAX_SIZE; i++) {
        
        c = a[i];
        if (a[i] == '\n') break;    

        if ((toupper(c) - 65 + shift) <= 25) {             //find is wraparound is needed
            if (a[i] < 123 && a[i] > 96) {                  //finds if it is a letter
                printf("%c", a[i] + shift);
            }
            else if(a[i] < 91 && a[i] > 64) {
                printf("%c", a[i] + shift);
            }
            else 
                printf("%c", a[i]);
        }

        if ((toupper(c) - 65 + shift) > 25) {
            if (a[i] < 123 && a[i] > 96) {
                printf("%c", ((a[i] - 'a') + shift) % 26 + 'a');
            } 
            else if (a[i] < 91 && a[i] > 64) {
                printf("%c", ((a[i] - 'A') + shift) % 26 + 'A');
            }
            else 
                printf("%c", a[i]);
        }  
    }
}
