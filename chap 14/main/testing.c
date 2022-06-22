#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {

    #if INT_MAX < 100000
    #error ZAA
    #endif

}
