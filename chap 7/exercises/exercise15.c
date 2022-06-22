#include <stdio.h>

int main() {

    typedef char Int8;    //char uses 1 byte (8 bits) of memory
    typedef short Int16;  //short uses 2 bytes (16 bits) of memory
    typedef int Int32;    //int uses 4 bytes (32 bits) of memory

    printf("Size of char: %d\n", sizeof(char));
    printf("Size of short: %d\n", sizeof(short));
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of unsigned int: %d\n", sizeof(unsigned int));
    printf("Size of long %d\n", sizeof(long int));
    printf("Size of long long %d\n", sizeof(long long));
    printf("Size of float %d\n", sizeof(float));
    printf("Size of double %d\n", sizeof(double));
    printf("Size of long double %d\n", sizeof(long double));        //...

  
}