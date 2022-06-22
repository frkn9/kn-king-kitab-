#include <stdio.h>

int main(void) {
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("%d\n", *(p+3)); //14
    printf("%d\n", *(q-3)); //34
    printf("%p\n", q);
    printf("%p\n", p);
    printf("%d\n", p+(q-p));    //distance'i ölçüyor, nedense + yapamıyoruz :D
    printf("%d\n", (p<q));
    printf("%d\n", *p < *q);
}