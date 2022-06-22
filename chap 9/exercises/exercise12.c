#include <stdio.h>
#define MAX_SIZE 100

double inner_product(double first_vector[], double second_vector[], int lenght_of_vectors);

int main(void) {

    double a[MAX_SIZE] = {0.0}, b[MAX_SIZE] = {0.0};
    int lenght;
    int i;

    printf("Enter lenght of vectors: ");
    scanf(" %d", &lenght);
    printf("Enter elements of the first vector: ");

    for (i = 0; i < lenght; i++) {
        scanf(" %lf", &a[i]);
    }

    printf("Enter elements of the second vector: ");
    for (i = 0; i < lenght; i++) {
        scanf(" %lf", &b[i]);
    }

    printf("Inner product is %.2lf", inner_product(a, b, lenght));
}

double inner_product(double first[], double sec[], int len) {

    int i;
    double sum = 0;
    for (i = 0; i < len; i++) {
        sum += first[i] * sec[i];
    }
    return sum;
}
