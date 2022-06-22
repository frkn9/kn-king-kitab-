#include <stdio.h>
#define NELEMS(a) ( (sizeof(a))/(sizeof(a[0])) )


int main(void) {
    int arr[8];

    printf("%d", NELEMS(arr));
}