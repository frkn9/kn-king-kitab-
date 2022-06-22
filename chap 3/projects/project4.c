#include <stdio.h>

int main(void) {
        printf("Enter telephone number in the form of (xxx) xxx-xxxx:\t");

        int _1, _2, _3;
        scanf("(%d) %d-%d", &_1, &_2, &_3);
        printf("%d.%d.%d", _1, _2, _3);
}