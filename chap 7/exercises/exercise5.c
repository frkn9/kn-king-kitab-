#include <stdio.h>

int main() {

    printf("%d\n", 'A');            //legal to write 65
    printf("%d\n", 0b100001);       //illegal bc c doesnt support binary numbbers
    printf("%d\n", 0101);           //legal to write 65
    printf("%d\n", 0x41);           //legal to write 65

}