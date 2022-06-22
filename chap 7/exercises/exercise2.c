#include <stdio.h>

int main() {

    printf("%.4f\n", 010E2);       //legal, checked it
    printf("%.4f\n", 32.1E+5);     //legal
  //  printf("%o\n", 0790);        //illegal bc 9>8
  //  printf("%d\n", 100_000);     //illegal obviously
    printf("%.4f", 3.978e-2);      //legal

}