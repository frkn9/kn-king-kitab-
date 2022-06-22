/* Name: pun.c 
 * Author: me 
 * Purpose: practicing code in the book
 */

#include <stdio.h> /*directive*/

int main(void) /* we're calling a function here*/ {
        printf("To C, or not to C: that is the question. \n");
        printf("To C, or not to C: ");
        printf("that is the question.\n");
        printf("Brevity is the soul of wit\n--Shakespare \n");

        int height, lenght, width;
        height = 8;
        lenght = 12;
        width = 10;

        printf("Height: %d\n", height);

        float profit;
        profit = 2150.78;
        printf("Profit: %.f\n", profit);

        int volume;
        volume = height * lenght * width;
        printf("Volume: %d\n", volume);

        printf("Height: %d Volume: %d\n", height , volume);


    return 0;

}