#include <stdio.h>

int main(void) {

    int i;
    printf("type in the value of i: ");
    scanf("%d", &i);

    printf("%d", i >=0 ? i : -i);


}